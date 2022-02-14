
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct repository {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct repository*,char const*,int,int,struct strbuf*,int ,int ,unsigned int) ;
 int FUNC_1 (char const*,int,int,struct strbuf*) ;
 int FUNC_2 (struct repository*,char const*,int,struct strbuf*) ;
 char* FUNC_3 (char const*,char,int) ;
 int VAR_4 ;
 int FUNC_4 (struct repository*,char const*,int,int,struct strbuf*,unsigned int) ;
 int FUNC_5 (char const*) ;
 int VAR_5 ;

int FUNC_6(struct repository *VAR_6,
          const char *VAR_7, int VAR_8,
          struct strbuf *VAR_9,
          unsigned VAR_10)
{
 char *VAR_11;
 const char *VAR_12;
 int VAR_13;

 if (!VAR_8)
  VAR_8 = FUNC_5(VAR_7);

 if (!VAR_10 || (VAR_10 & VAR_1)) {
  VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);
  if (!VAR_13) {
   return VAR_13;
  } else if (VAR_13 > 0) {
   if (VAR_13 == VAR_8)
    return VAR_13;
   else
    return FUNC_4(VAR_6, VAR_7, VAR_8, VAR_13, VAR_9, VAR_10);
  }
 }

 for (VAR_12 = VAR_7;
      (VAR_11 = FUNC_3(VAR_12, '@', VAR_8 - (VAR_12 - VAR_7)));
      VAR_12 = VAR_11 + 1) {

  if (!VAR_10 || (VAR_10 & VAR_0)) {
   VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_11 - VAR_7, VAR_9);
   if (VAR_13 > 0)
    return FUNC_4(VAR_6, VAR_7, VAR_8, VAR_13, VAR_9,
         VAR_10);
  }

  VAR_13 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_11 - VAR_7, VAR_9,
         VAR_5, VAR_3,
         VAR_10);
  if (VAR_13 > 0)
   return VAR_13;

  VAR_13 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_11 - VAR_7, VAR_9,
         VAR_4, VAR_2,
         VAR_10);
  if (VAR_13 > 0)
   return VAR_13;
 }

 return -1;
}
