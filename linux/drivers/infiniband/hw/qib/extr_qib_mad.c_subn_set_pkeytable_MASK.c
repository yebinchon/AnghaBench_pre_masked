
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
 unsigned int FUNC_3 (struct qib_devdata*) ;
 scalar_t__ FUNC_4 (struct qib_devdata*,int ,int *) ;
 int FUNC_5 (struct ib_smp*,struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct ib_smp *VAR_1, struct ib_device *VAR_2,
         u8 VAR_3)
{
 u32 VAR_4 = 32 * (FUNC_1(VAR_1->attr_mod) & 0xffff);
 __be16 *VAR_5 = (__be16 *) VAR_1->data;
 u16 *VAR_6 = (u16 *) VAR_1->data;
 struct qib_devdata *VAR_7 = FUNC_2(VAR_2);
 unsigned VAR_8, VAR_9 = FUNC_3(VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  VAR_6[VAR_8] = FUNC_0(VAR_5[VAR_8]);

 if (VAR_4 != 0 || FUNC_4(VAR_7, VAR_3, VAR_6) != 0)
  VAR_1->status |= VAR_0;

 return FUNC_5(VAR_1, VAR_2, VAR_3);
}
