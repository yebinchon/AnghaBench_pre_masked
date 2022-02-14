
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 () ;
 int FUNC_1 (char*,int,double,double) ;

__attribute__((used)) static void
FUNC_2(int VAR_0)
{
 double VAR_1;

 VAR_1 = FUNC_0();
 FUNC_1("%5d iter in %10.6f sec = %8.3f msec\n",
  VAR_0, VAR_1, VAR_1 * 1000.0 / VAR_0);
}
