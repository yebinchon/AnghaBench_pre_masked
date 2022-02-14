
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 () ;
 int FUNC_1 (char*,double,double,double) ;

__attribute__((used)) static void
FUNC_2(double VAR_0)
{
 double VAR_1;

 VAR_1 = FUNC_0();
 FUNC_1("%8.0f kbytes in %10.6f sec = %8.0f kbytes/sec\n",
  VAR_0, VAR_1, VAR_0 / VAR_1);
}
