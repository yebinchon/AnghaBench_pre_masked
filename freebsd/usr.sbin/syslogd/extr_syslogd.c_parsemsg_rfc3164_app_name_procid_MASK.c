
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,char*) ;

__attribute__((used)) static void
FUNC_1(char **VAR_0, const char **VAR_1,
    const char **VAR_2) {
 char *VAR_3, *VAR_4, *VAR_5;
 size_t VAR_6, VAR_7;

 VAR_3 = *VAR_0;


 VAR_4 = VAR_3;
 VAR_6 = FUNC_0(VAR_3,
     "abcdefghijklmnopqrstuvwxyz"
     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
     "0123456789"
     "_-/");
 if (VAR_6 == 0)
  goto bad;
 VAR_3 += VAR_6;


 if (*VAR_3 == '[') {
  VAR_5 = ++VAR_3;
  VAR_7 = FUNC_0(VAR_3, "0123456789");
  if (VAR_7 == 0)
   goto bad;
  VAR_3 += VAR_7;
  if (*VAR_3++ != ']')
   goto bad;
 } else {
  VAR_5 = ((void*)0);
  VAR_7 = 0;
 }


 if (VAR_3[0] != ':' || VAR_3[1] != ' ')
  goto bad;


 VAR_4[VAR_6] = '\0';
 if (VAR_5 != 0)
  VAR_5[VAR_7] = '\0';

 *VAR_0 = VAR_3 + 2;
 *VAR_1 = VAR_4;
 *VAR_2 = VAR_5;
 return;
bad:
 *VAR_1 = ((void*)0);
 *VAR_2 = ((void*)0);
}
