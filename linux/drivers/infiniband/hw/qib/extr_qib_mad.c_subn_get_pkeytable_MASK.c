
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct qib_devdata {int dummy; } ;
struct ib_smp {int status; scalar_t__ data; int attr_mod; } ;
struct ib_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct qib_devdata* FUNC_2 (struct ib_device*) ;
 int FUNC_3 (struct qib_devdata*,int ,int *) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 unsigned int FUNC_5 (struct qib_devdata*) ;
 int FUNC_6 (struct ib_smp*) ;

__attribute__((used)) static int FUNC_7(struct ib_smp *VAR_1, struct ib_device *VAR_2,
         u8 VAR_3)
{
 u32 VAR_4 = 32 * (FUNC_0(VAR_1->attr_mod) & 0xffff);
 u16 *VAR_5 = (u16 *) VAR_1->data;
 __be16 *VAR_6 = (__be16 *) VAR_1->data;



 FUNC_4(VAR_1->data, 0, sizeof(VAR_1->data));
 if (VAR_4 == 0) {
  struct qib_devdata *VAR_7 = FUNC_2(VAR_2);
  unsigned VAR_8, VAR_9 = FUNC_5(VAR_7);

  FUNC_3(VAR_7, VAR_3, VAR_5);

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   VAR_6[VAR_8] = FUNC_1(VAR_5[VAR_8]);
 } else
  VAR_1->status |= VAR_0;

 return FUNC_6(VAR_1);
}
