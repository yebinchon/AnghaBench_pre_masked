
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ldc_channel*,void*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ldc_channel *VAR_2, void *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 1000;

 VAR_5 = -VAR_1;
 while (VAR_6-- > 0) {
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
  if (!VAR_5 || (VAR_5 != -VAR_0))
   break;
  FUNC_1(1);
 }

 return VAR_5;
}
