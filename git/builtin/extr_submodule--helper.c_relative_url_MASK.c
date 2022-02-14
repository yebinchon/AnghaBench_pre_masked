
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; scalar_t__ len; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char**,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (struct strbuf*,char*,char const*,...) ;
 char* FUNC_8 (struct strbuf*,int *) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*,scalar_t__) ;
 size_t FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char const*) ;

__attribute__((used)) static char *FUNC_14(const char *VAR_1,
    const char *VAR_2,
    const char *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;
 char *VAR_6;
 char *VAR_7 = FUNC_13(VAR_1);
 struct strbuf VAR_8 = VAR_0;
 size_t VAR_9 = FUNC_11(VAR_7);

 if (FUNC_4(VAR_7[VAR_9-1]))
  VAR_7[VAR_9-1] = '\0';

 if (!FUNC_12(VAR_7) || FUNC_3(VAR_7))
  VAR_4 = 0;
 else {
  VAR_4 = 1;




  if (!FUNC_6(VAR_7) &&
      !FUNC_5(VAR_7)) {
   FUNC_9(&VAR_8);
   FUNC_7(&VAR_8, "./%s", VAR_7);
   FUNC_2(VAR_7);
   VAR_7 = FUNC_8(&VAR_8, ((void*)0));
  }
 }




 while (VAR_2) {
  if (FUNC_5(VAR_2)) {
   VAR_2 += 3;
   VAR_5 |= FUNC_0(&VAR_7, VAR_4);
  } else if (FUNC_6(VAR_2))
   VAR_2 += 2;
  else
   break;
 }
 FUNC_9(&VAR_8);
 FUNC_7(&VAR_8, "%s%s%s", VAR_7, VAR_5 ? ":" : "/", VAR_2);
 if (FUNC_1(VAR_2, "/"))
  FUNC_10(&VAR_8, VAR_8.len - 1);
 FUNC_2(VAR_7);

 if (FUNC_6(VAR_8.buf))
  VAR_6 = FUNC_13(VAR_8.buf + 2);
 else
  VAR_6 = FUNC_13(VAR_8.buf);
 FUNC_9(&VAR_8);

 if (!VAR_3 || !VAR_4)
  return VAR_6;

 FUNC_7(&VAR_8, "%s%s", VAR_3, VAR_6);
 FUNC_2(VAR_6);
 return FUNC_8(&VAR_8, ((void*)0));
}
