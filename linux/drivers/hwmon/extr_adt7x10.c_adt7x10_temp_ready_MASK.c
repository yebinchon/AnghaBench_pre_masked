
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  VAR_5 = FUNC_0(VAR_3, VAR_0);
  if (VAR_5 < 0)
   return VAR_5;
  if (!(VAR_5 & VAR_1))
   return 0;
  FUNC_1(60);
 }
 return -VAR_2;
}
