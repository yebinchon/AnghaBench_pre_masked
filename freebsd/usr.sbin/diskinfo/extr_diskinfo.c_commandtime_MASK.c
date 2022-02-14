
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int off_t ;


 int FUNC_0 () ;
 double FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_5(int VAR_0, off_t VAR_1, u_int VAR_2)
{
 double VAR_3, VAR_4;
 int VAR_5;

 FUNC_2("I/O command overhead:\n");
 VAR_5 = VAR_1;
 FUNC_4(VAR_0, 0, VAR_2);
 FUNC_0();
 for (VAR_5 = 0; VAR_5 < 10; VAR_5++)
  FUNC_3(VAR_0);
 VAR_3 = FUNC_1();

 FUNC_2("\ttime to read 10MB block    %10.6f sec\t= %8.3f msec/sector\n",
  VAR_3, VAR_3*100/2048);

 FUNC_4(VAR_0, 0, VAR_2);
 FUNC_0();
 for (VAR_5 = 0; VAR_5 < 20480; VAR_5++)
  FUNC_4(VAR_0, 0, VAR_2);
 VAR_4 = FUNC_1();

 FUNC_2("\ttime to read 20480 sectors %10.6f sec\t= %8.3f msec/sector\n",
  VAR_4, VAR_4*100/2048);
 FUNC_2("\tcalculated command overhead\t\t\t= %8.3f msec/sector\n",
  (VAR_4 - VAR_3)*100/2048);

 FUNC_2("\n");
 return;
}
