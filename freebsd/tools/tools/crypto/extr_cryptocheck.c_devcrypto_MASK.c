
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int,int ) ;

__attribute__((used)) static int
FUNC_2(void)
{
 static int VAR_2 = -1;

 if (VAR_2 < 0) {
  VAR_2 = FUNC_1("/dev/crypto", VAR_1 | VAR_0, 0);
  if (VAR_2 < 0)
   FUNC_0(1, "/dev/crypto");
 }
 return (VAR_2);
}
