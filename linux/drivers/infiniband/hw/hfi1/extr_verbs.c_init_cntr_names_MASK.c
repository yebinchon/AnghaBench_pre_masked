
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char const*,size_t const) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2,
      const size_t VAR_3,
      int VAR_4,
      int *VAR_5,
      const char ***VAR_6)
{
 char *VAR_7, *VAR_8, **VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  if (VAR_2[VAR_10] == '\n')
   VAR_11++;

 VAR_7 = FUNC_0((VAR_11 + VAR_4) * sizeof(char *) + VAR_3,
       VAR_1);
 if (!VAR_7) {
  *VAR_5 = 0;
  *VAR_6 = ((void*)0);
  return -VAR_0;
 }

 VAR_8 = VAR_7 + (VAR_11 + VAR_4) * sizeof(char *);
 FUNC_1(VAR_8, VAR_2, VAR_3);

 VAR_9 = (char **)VAR_7;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_9[VAR_10] = VAR_8;
  VAR_8 = FUNC_2(VAR_8, '\n');
  *VAR_8++ = '\0';
 }

 *VAR_5 = VAR_11;
 *VAR_6 = (const char **)VAR_7;
 return 0;
}
