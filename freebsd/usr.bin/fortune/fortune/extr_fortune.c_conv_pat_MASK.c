
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 char* FUNC_5 (unsigned int) ;
 int VAR_0 ;
 int FUNC_6 (unsigned char) ;
 int FUNC_7 (unsigned char) ;

__attribute__((used)) static char *
FUNC_8(char *VAR_1)
{
 char *VAR_2;
 unsigned int VAR_3;
 char *VAR_4;

 VAR_3 = 1;
 for (VAR_2 = VAR_1; *VAR_2 != '\0'; VAR_2++)
  if (FUNC_2((unsigned char)*VAR_2))
   VAR_3 += 4;
  else
   VAR_3++;
 if ((VAR_4 = FUNC_5(VAR_3)) == ((void*)0)) {
  FUNC_1(VAR_0, "pattern too long for ignoring case\n");
  FUNC_0(1);
 }

 for (VAR_2 = VAR_4; *VAR_1 != '\0'; VAR_1++) {
  if (FUNC_3((unsigned char)*VAR_1)) {
   *VAR_2++ = '[';
   *VAR_2++ = *VAR_1;
   *VAR_2++ = FUNC_7((unsigned char)*VAR_1);
   *VAR_2++ = ']';
  }
  else if (FUNC_4((unsigned char)*VAR_1)) {
   *VAR_2++ = '[';
   *VAR_2++ = *VAR_1;
   *VAR_2++ = FUNC_6((unsigned char)*VAR_1);
   *VAR_2++ = ']';
  }
  else
   *VAR_2++ = *VAR_1;
 }
 *VAR_2 = '\0';

 return (VAR_4);
}
