
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(void)
{

 if (VAR_1 == -1) {
  VAR_1 = FUNC_2("/dev/mem", VAR_0);
  if (VAR_1 == -1)
   FUNC_1(1, "opening /dev/mem");
  FUNC_0(&VAR_2);
 }
}
