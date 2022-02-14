
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_1, long VAR_2, long VAR_3)
{
 long VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_2 / (60L * 60 * 24);
 VAR_2 %= (60L * 60 * 24);
 VAR_5 = VAR_2 / (60L * 60);
 VAR_2 %= (60L * 60);
 VAR_6 = VAR_2 / 60;
 VAR_2 %= 60;

 FUNC_0(VAR_1, "\t");
 if (VAR_4)
  FUNC_0(VAR_1, "%ldd", VAR_4);
 if (VAR_5)
  FUNC_0(VAR_1, "%ldh", VAR_5);
 if (VAR_6)
  FUNC_0(VAR_1, "%ldm", VAR_6);
 FUNC_0(VAR_1, "%ld%c%02lds", VAR_2, VAR_0, VAR_3);
}
