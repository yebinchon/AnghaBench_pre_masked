
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipuv3_channel {int num; struct ipu_soc* ipu; } ;
struct ipu_soc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipu_soc*,int ) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

int FUNC_6(struct ipuv3_channel *VAR_2, int VAR_3)
{
 struct ipu_soc *VAR_4 = VAR_2->ipu;
 unsigned long VAR_5;

 VAR_5 = VAR_1 + FUNC_4(VAR_3);
 while (FUNC_3(VAR_4, FUNC_0(VAR_2->num)) &
   FUNC_2(VAR_2->num)) {
  if (FUNC_5(VAR_1, VAR_5))
   return -VAR_0;
  FUNC_1();
 }

 return 0;
}
