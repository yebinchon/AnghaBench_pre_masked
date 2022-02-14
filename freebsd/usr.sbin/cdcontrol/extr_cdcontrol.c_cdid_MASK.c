
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_2(void)
{
 u_int VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1)
 {
  if (VAR_0)
   FUNC_1 ("CDID=");
  FUNC_1 ("%08x\n",VAR_1);
 }
 return VAR_1 ? 0 : 1;
}
