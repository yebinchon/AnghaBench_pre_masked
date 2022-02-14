
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(int *VAR_4, int *VAR_5, int VAR_6, char *VAR_7[])
{
 int VAR_8;

 for (VAR_8 = 1; VAR_8 < VAR_6; ++VAR_8) {
  if (VAR_7[VAR_8][0] != '-')
   break;
  else if (!FUNC_2(VAR_7[VAR_8], "--verbose") || !FUNC_2(VAR_7[VAR_8], "-v"))
   *VAR_4 |= VAR_2;
  else if (!FUNC_2(VAR_7[VAR_8], "--dry-run") || !FUNC_2(VAR_7[VAR_8], "-n"))
   *VAR_4 |= VAR_0;
  else if (!FUNC_2(VAR_7[VAR_8], "--update") || !FUNC_2(VAR_7[VAR_8], "-u"))
   *VAR_4 |= VAR_1;
  else if (!FUNC_2(VAR_7[VAR_8], "-h")) {
   FUNC_1();
   break;
  } else if (!FUNC_2(VAR_7[VAR_8], "--")) {
   VAR_8++;
   break;
  } else {
   FUNC_0(VAR_3, "Unsupported option %s.\n", VAR_7[VAR_8]);
   FUNC_1();
  }
 }

 if (VAR_6 <= VAR_8)
  FUNC_1();

 *VAR_5 = VAR_8;
}
