
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(const char *VAR_2)
{
 if (VAR_2)
  FUNC_1(VAR_1, "%s: Error: %s\n\n", VAR_0, VAR_2);
 FUNC_1(VAR_1, "Usage: %s [-y|-n|-v] [-s seed[,no]] [-m max] [-i input]\n", VAR_0);
 FUNC_1(VAR_1, "\t-y	64bit mode\n");
 FUNC_1(VAR_1, "\t-n	32bit mode\n");
 FUNC_1(VAR_1, "\t-v	Verbosity(-vv dumps any decoded result)\n");
 FUNC_1(VAR_1, "\t-s	Give a random seed (and iteration number)\n");
 FUNC_1(VAR_1, "\t-m	Give a maximum iteration number\n");
 FUNC_1(VAR_1, "\t-i	Give an input file with decoded binary\n");
 FUNC_0(1);
}
