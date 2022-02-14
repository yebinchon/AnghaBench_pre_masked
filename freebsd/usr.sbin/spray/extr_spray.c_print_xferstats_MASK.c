
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(u_int VAR_0, int VAR_1, double VAR_2)
{
 int VAR_3;
 double VAR_4;
 double VAR_5;

 VAR_3 = VAR_0 * VAR_1;
 VAR_4 = VAR_0 / VAR_2;
 VAR_5 = VAR_3 / VAR_2;

 FUNC_0("\t%.0f packets/sec, ", VAR_4);

 if (VAR_5 >= 1024)
  FUNC_0 ("%.1fK ", VAR_5 / 1024);
 else
  FUNC_0 ("%.0f ", VAR_5);

 FUNC_0("bytes/sec\n");
}
