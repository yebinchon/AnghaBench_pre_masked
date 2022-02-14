
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (unsigned char) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_0[])
{
 int VAR_1;
 char *VAR_2, *VAR_3, *VAR_4;

 while ((VAR_2 = *++VAR_0)) {

  if (VAR_2[0] != '-') {
   if (VAR_2[0] != '+')
    return;
  } else if (VAR_2[1] == '-')
   return;
  if (!FUNC_1((unsigned char)VAR_2[1]))
   continue;




  VAR_1 = FUNC_4(VAR_2);
  if ((VAR_4 = VAR_3 = FUNC_2(VAR_1 + 3)) == ((void*)0))
   FUNC_0(1, "malloc");
  *VAR_3++ = '-';
  *VAR_3++ = VAR_2[0] == '+' ? 's' : 'f';
  (void)FUNC_3(VAR_3, VAR_2 + 1);
  *VAR_0 = VAR_4;
 }
}
