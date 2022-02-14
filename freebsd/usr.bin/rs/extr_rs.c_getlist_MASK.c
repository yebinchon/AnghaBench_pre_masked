
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 short FUNC_0 (char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,short) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_6(short **VAR_1, char *VAR_2)
{
 int VAR_3 = 1;
 char *VAR_4;

 for (VAR_4 = VAR_2 + 1; *VAR_4; VAR_4++) {
  if (!FUNC_3((unsigned char)*VAR_4))
   FUNC_1(1,
 "option %.1s requires a list of unsigned numbers separated by commas", VAR_4);
  VAR_3++;
  while (*VAR_4 && FUNC_3((unsigned char)*VAR_4))
   VAR_4++;
  if (*VAR_4 != ',')
   break;
 }
 if (!(*VAR_1 = (short *) FUNC_4(VAR_3 * sizeof(short))))
  FUNC_1(1, "no list space");
 VAR_3 = 0;
 for (VAR_4 = VAR_2 + 1; *VAR_4; VAR_4++) {
  (*VAR_1)[VAR_3++] = FUNC_0(VAR_4);
  FUNC_5("++ %d ", (*VAR_1)[VAR_3-1]);
  FUNC_2(VAR_0);
  while (*VAR_4 && FUNC_3((unsigned char)*VAR_4))
   VAR_4++;
  if (*VAR_4 != ',')
   break;
 }
 (*VAR_1)[VAR_3] = 0;
 return(VAR_4 - 1);
}
