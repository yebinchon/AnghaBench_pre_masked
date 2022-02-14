
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,size_t) ;
 int FUNC_1 (unsigned char const) ;
 scalar_t__ FUNC_2 (unsigned char const) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,unsigned char const*,size_t) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0, char **VAR_1, size_t *VAR_2)
{
 const unsigned char *VAR_3;
 unsigned char *VAR_4;
 char *VAR_5;
 size_t VAR_6 = *VAR_2, VAR_7;
 int VAR_8, VAR_9;


 for (VAR_3 = (const unsigned char *)VAR_0; VAR_6 && *VAR_3 && FUNC_2(*VAR_3);
     VAR_3++, VAR_6--)
  continue;
 if ((VAR_5 = FUNC_3(VAR_6 + 1)) == ((void*)0))
  FUNC_0(1, "Cannot allocate %zu bytes", VAR_6 + 1);
 (void)FUNC_4(VAR_5, VAR_3, VAR_6);
 VAR_5[VAR_6] = '\0';
 if (*VAR_5 == '\0')
  return 0;

 VAR_7 = 0;
 VAR_8 = 0;
 VAR_9 = 0;

 for (VAR_4 = (unsigned char *)VAR_5; VAR_6 && *VAR_3; VAR_3++, VAR_6--) {
  if (FUNC_2(*VAR_3)) {
   if (VAR_7 && FUNC_2(VAR_4[-1]))
    continue;
   *VAR_4++ = ' ';
   VAR_7++;
  } else {
   if (!VAR_9 && *VAR_3 == '#') {
    if (VAR_8)
     break;
    VAR_9 = 1;
   } else
    VAR_8 |= FUNC_1(*VAR_3);
   *VAR_4++ = *VAR_3;
   VAR_7++;
  }
 }


 while (VAR_7 && FUNC_2(VAR_4[-1])) {
  --VAR_4;
  --VAR_7;
 }
 *VAR_4 = '\0';
 *VAR_1 = VAR_5;
 *VAR_2 = VAR_7;
 return VAR_8;
}
