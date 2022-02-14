
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_map {int ntste; int flags; } ;
struct idt77252_dev {int tst_free; unsigned long utopia_pcr; int name; scalar_t__ tst_size; } ;
struct atm_vcc {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_pcr; scalar_t__ pcr; scalar_t__ min_pcr; } ;
struct atm_qos {TYPE_1__ txtp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct idt77252_dev*,struct vc_map*,int,int ) ;
 int FUNC_4 (struct idt77252_dev*,struct vc_map*,int,int ) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(struct idt77252_dev *VAR_5, struct vc_map *VAR_6,
    struct atm_vcc *VAR_7, struct atm_qos *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13;
 int VAR_14, VAR_15;

 if ((VAR_8->txtp.max_pcr == 0) &&
     (VAR_8->txtp.pcr == 0) && (VAR_8->txtp.min_pcr == 0)) {
  FUNC_5("%s: trying to open a CBR VC with cell rate = 0\n",
         VAR_5->name);
  return -VAR_0;
 }

 VAR_10 = 0;
 VAR_9 = VAR_5->tst_free;
 if (FUNC_6(VAR_4, &VAR_6->flags))
  VAR_10 = VAR_6->ntste;
 VAR_9 += VAR_10;

 VAR_14 = FUNC_2(&VAR_8->txtp);
 VAR_15 = VAR_14 >= 0 ? VAR_14 : -VAR_14;

 FUNC_1("%s: CBR target cell rate = %d\n", VAR_5->name, VAR_15);

 VAR_12 = (unsigned long) VAR_15 * ((unsigned long) VAR_5->tst_size - 2);
 VAR_13 = VAR_12 % (unsigned long)VAR_5->utopia_pcr;

 VAR_11 = (int) (VAR_12 / VAR_5->utopia_pcr);
 if (VAR_14 > 0) {
  if (VAR_13 > 0)
   VAR_11++;
 } else if (VAR_14 == 0) {
  VAR_11 = VAR_9 - VAR_2;
  if (VAR_11 <= 0) {
   FUNC_5("%s: no CBR bandwidth free.\n", VAR_5->name);
   return -VAR_1;
  }
 }

 if (VAR_11 == 0) {
  FUNC_5("%s: selected CBR bandwidth < granularity.\n",
         VAR_5->name);
  return -VAR_0;
 }

 if (VAR_11 > (VAR_9 - VAR_2)) {
  FUNC_5("%s: not enough CBR bandwidth free.\n", VAR_5->name);
  return -VAR_1;
 }

 VAR_6->ntste = VAR_11;

 VAR_5->tst_free = VAR_9 - VAR_11;
 if (FUNC_6(VAR_4, &VAR_6->flags)) {
  if (VAR_10 == VAR_11)
   return 0;

  FUNC_0("%s: modify %d -> %d entries in TST.\n",
   VAR_5->name, VAR_10, VAR_11);
  FUNC_3(VAR_5, VAR_6, VAR_11, VAR_3);
  return 0;
 }

 FUNC_0("%s: setting %d entries in TST.\n", VAR_5->name, VAR_11);
 FUNC_4(VAR_5, VAR_6, VAR_11, VAR_3);
 return 0;
}
