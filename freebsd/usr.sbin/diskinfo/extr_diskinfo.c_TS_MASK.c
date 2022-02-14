
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 double FUNC_0 () ;
 int FUNC_1 (char*,double,double) ;

__attribute__((used)) static void
FUNC_2(u_int VAR_0, int VAR_1)
{
 double VAR_2;

 VAR_2 = FUNC_0();
 FUNC_1("%8.1f usec/IO = %8.1f Mbytes/s\n",
     VAR_2 * 1000000.0 / VAR_1, (double)VAR_0 * VAR_1 / VAR_2 / (1024 * 1024));
}
