
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct idt77252_dev {int flags; int tqueue; int * irqstat; int name; TYPE_2__* atmdev; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* phy; } ;
struct TYPE_3__ {int (* interrupt ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct idt77252_dev*) ;
 int FUNC_3 (struct idt77252_dev*) ;
 int FUNC_4 (struct idt77252_dev*) ;
 int FUNC_5 (struct idt77252_dev*) ;
 int FUNC_6 (struct idt77252_dev*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_13(int VAR_19, void *VAR_20)
{
 struct idt77252_dev *VAR_21 = VAR_20;
 u32 VAR_22;

 VAR_22 = FUNC_8(VAR_5) & 0xffff;
 if (!VAR_22)
  return VAR_2;

 if (FUNC_11(VAR_0, &VAR_21->flags)) {
  FUNC_7("%s: Re-entering irq_handler()\n", VAR_21->name);
  goto out;
 }

 FUNC_12(VAR_22, VAR_5);

 if (VAR_22 & VAR_16) {
  FUNC_0("%s: TSIF\n", VAR_21->name);
  VAR_21->irqstat[15]++;
  FUNC_5(VAR_21);
 }
 if (VAR_22 & VAR_18) {
  FUNC_0("%s: TXICP\n", VAR_21->name);
  VAR_21->irqstat[14]++;



 }
 if (VAR_22 & VAR_17) {
  FUNC_0("%s: TSQF\n", VAR_21->name);
  VAR_21->irqstat[12]++;
  FUNC_5(VAR_21);
 }
 if (VAR_22 & VAR_15) {
  FUNC_0("%s: TMROF\n", VAR_21->name);
  VAR_21->irqstat[11]++;
  FUNC_2(VAR_21);
 }

 if (VAR_22 & VAR_6) {
  FUNC_0("%s: EPDU\n", VAR_21->name);
  VAR_21->irqstat[5]++;
  FUNC_3(VAR_21);
 }
 if (VAR_22 & VAR_13) {
  FUNC_0("%s: RSQAF\n", VAR_21->name);
  VAR_21->irqstat[1]++;
  FUNC_3(VAR_21);
 }
 if (VAR_22 & VAR_14) {
  FUNC_0("%s: RSQF\n", VAR_21->name);
  VAR_21->irqstat[6]++;
  FUNC_3(VAR_21);
 }
 if (VAR_22 & VAR_12) {
  FUNC_0("%s: RAWCF\n", VAR_21->name);
  VAR_21->irqstat[4]++;
  FUNC_4(VAR_21);
 }

 if (VAR_22 & VAR_11) {
  FUNC_0("%s: PHYI", VAR_21->name);
  VAR_21->irqstat[10]++;
  if (VAR_21->atmdev->phy && VAR_21->atmdev->phy->interrupt)
   VAR_21->atmdev->phy->interrupt(VAR_21->atmdev);
 }

 if (VAR_22 & (VAR_7 | VAR_8 |
      VAR_9 | VAR_10)) {

  FUNC_12(FUNC_8(VAR_4) & ~(VAR_3), VAR_4);

  FUNC_0("%s: FBQA: %04x\n", VAR_21->name, VAR_22);

  if (VAR_22 & VAR_7)
   VAR_21->irqstat[2]++;
  if (VAR_22 & VAR_8)
   VAR_21->irqstat[3]++;
  if (VAR_22 & VAR_9)
   VAR_21->irqstat[7]++;
  if (VAR_22 & VAR_10)
   VAR_21->irqstat[8]++;

  FUNC_9(&VAR_21->tqueue);
 }

out:
 FUNC_1(VAR_0, &VAR_21->flags);
 return VAR_1;
}
