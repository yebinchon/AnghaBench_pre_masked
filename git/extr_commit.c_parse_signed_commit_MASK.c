
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct commit {int dummy; } ;


 char* FUNC_0 (struct commit const*,unsigned long*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_1 (char const*,char,int) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int FUNC_3 (struct strbuf*,char const*,int) ;
 int FUNC_4 (struct commit const*,char const*) ;

int FUNC_5(const struct commit *VAR_2,
   struct strbuf *VAR_3, struct strbuf *VAR_4)
{

 unsigned long VAR_5;
 const char *VAR_6 = FUNC_0(VAR_2, &VAR_5);
 int VAR_7, VAR_8 = -1;
 const char *VAR_9, *VAR_10;

 VAR_9 = VAR_6;
 VAR_10 = VAR_6 + VAR_5;
 VAR_7 = 0;
 VAR_8 = 0;
 while (VAR_9 < VAR_10) {
  const char *VAR_11 = ((void*)0);
  const char *VAR_12 = FUNC_1(VAR_9, '\n', VAR_10 - VAR_9);

  VAR_12 = VAR_12 ? VAR_12 + 1 : VAR_10;
  if (VAR_7 && VAR_9[0] == ' ')
   VAR_11 = VAR_9 + 1;
  else if (FUNC_2(VAR_9, VAR_0) &&
    VAR_9[VAR_1] == ' ')
   VAR_11 = VAR_9 + VAR_1 + 1;
  if (VAR_11) {
   FUNC_3(VAR_4, VAR_11, VAR_12 - VAR_11);
   VAR_8 = 1;
   VAR_7 = 1;
  } else {
   if (*VAR_9 == '\n')

    VAR_12 = VAR_10;
   FUNC_3(VAR_3, VAR_9, VAR_12 - VAR_9);
   VAR_7 = 0;
  }
  VAR_9 = VAR_12;
 }
 FUNC_4(VAR_2, VAR_6);
 return VAR_8;
}
