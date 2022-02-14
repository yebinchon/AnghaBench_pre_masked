
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 scalar_t__ VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,...) ;
 scalar_t__ FUNC_4 (char,int ) ;
 int FUNC_5 (char*,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_6(void)
{
 register int VAR_6, VAR_7;
 register char *VAR_8;
 char VAR_9[80];

 if (!VAR_4)
  (void)FUNC_3(VAR_3, "begin %o %s\n", VAR_2, *VAR_1);
 while ((VAR_7 = FUNC_5(VAR_9, 1, 45, VAR_5))) {
  VAR_6 = FUNC_0(VAR_7);
  if (FUNC_4(VAR_6, VAR_3) == VAR_0)
   break;
  for (VAR_8 = VAR_9; VAR_7 > 0; VAR_7 -= 3, VAR_8 += 3) {

   if (VAR_7 < 3) {
    VAR_8[2] = '\0';
    if (VAR_7 < 2)
     VAR_8[1] = '\0';
   }
   VAR_6 = *VAR_8 >> 2;
   VAR_6 = FUNC_0(VAR_6);
   if (FUNC_4(VAR_6, VAR_3) == VAR_0)
    break;
   VAR_6 = ((*VAR_8 << 4) & 060) | ((VAR_8[1] >> 4) & 017);
   VAR_6 = FUNC_0(VAR_6);
   if (FUNC_4(VAR_6, VAR_3) == VAR_0)
    break;
   VAR_6 = ((VAR_8[1] << 2) & 074) | ((VAR_8[2] >> 6) & 03);
   VAR_6 = FUNC_0(VAR_6);
   if (FUNC_4(VAR_6, VAR_3) == VAR_0)
    break;
   VAR_6 = VAR_8[2] & 077;
   VAR_6 = FUNC_0(VAR_6);
   if (FUNC_4(VAR_6, VAR_3) == VAR_0)
    break;
  }
  if (FUNC_4('\n', VAR_3) == VAR_0)
   break;
 }
 if (FUNC_2(VAR_5))
  FUNC_1(1, "read error");
 if (!VAR_4)
  (void)FUNC_3(VAR_3, "%c\nend\n", FUNC_0('\0'));
}
