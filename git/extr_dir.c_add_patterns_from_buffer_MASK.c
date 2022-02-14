
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_list {char* filebuf; } ;


 int FUNC_0 (char*,char const*,int,struct pattern_list*,int) ;
 scalar_t__ FUNC_1 (char**,size_t) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, size_t VAR_1,
        const char *VAR_2, int VAR_3,
        struct pattern_list *VAR_4)
{
 int VAR_5, VAR_6 = 1;
 char *VAR_7;

 VAR_4->filebuf = VAR_0;

 if (FUNC_1(&VAR_0, VAR_1))
  VAR_1 -= VAR_0 - VAR_4->filebuf;

 VAR_7 = VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_0[VAR_5] == '\n') {
   if (VAR_7 != VAR_0 + VAR_5 && VAR_7[0] != '#') {
    VAR_0[VAR_5 - (VAR_5 && VAR_0[VAR_5-1] == '\r')] = 0;
    FUNC_2(VAR_7);
    FUNC_0(VAR_7, VAR_2, VAR_3, VAR_4, VAR_6);
   }
   VAR_6++;
   VAR_7 = VAR_0 + VAR_5 + 1;
  }
 }
 return 0;
}
