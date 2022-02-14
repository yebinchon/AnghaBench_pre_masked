
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,void*) ;
 int VAR_1 ;
 int FUNC_2 (struct platform_device*,int) ;
 int FUNC_3 (struct platform_device*,char*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 int VAR_3;

 if (FUNC_0()) {
  char VAR_4[4];
  FUNC_5(VAR_4, "0");
  VAR_3 = FUNC_3(VAR_2, VAR_4);
  if (VAR_3 >= 0)
   FUNC_4(VAR_3, &VAR_1);
 } else {
  int VAR_5 = 0;
  for ( ; VAR_5 < VAR_0; VAR_5++) {
   VAR_3 = FUNC_2(VAR_2, VAR_5);
   FUNC_1(VAR_3, (void *)(VAR_5 + 1));
  }
 }
 return 0;
}
