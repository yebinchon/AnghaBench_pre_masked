
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct option {int dummy; } ;
typedef enum stripspace_mode { ____Placeholder_stripspace_mode } stripspace_mode ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct option const FUNC_1 (char,char*,int*,int ,int) ;
 struct option const FUNC_2 () ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_4 ;
 int FUNC_6 (int,char const**,char const*,struct option const*,int ,int ) ;
 int FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (struct strbuf*,int ,int) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*,int) ;
 int VAR_5 ;
 int FUNC_11 (int ,struct option const*) ;
 int FUNC_12 (int,int ,int ) ;

int FUNC_13(int VAR_6, const char **VAR_7, const char *VAR_8)
{
 struct strbuf VAR_9 = VAR_1;
 enum stripspace_mode VAR_10 = VAR_3;
 int VAR_11;

 const struct option VAR_12[] = {
  FUNC_1('s', "strip-comments", &VAR_10,
       FUNC_0("skip and remove all lines starting with comment character"),
       VAR_2),
  FUNC_1('c', "comment-lines", &VAR_10,
       FUNC_0("prepend comment character and space to each line"),
       VAR_0),
  FUNC_2()
 };

 VAR_6 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_12, VAR_5, 0);
 if (VAR_6)
  FUNC_11(VAR_5, VAR_12);

 if (VAR_10 == VAR_2 || VAR_10 == VAR_0) {
  FUNC_7(&VAR_11);
  FUNC_5(VAR_4, ((void*)0));
 }

 if (FUNC_8(&VAR_9, 0, 1024) < 0)
  FUNC_4("could not read the input");

 if (VAR_10 == VAR_3 || VAR_10 == VAR_2)
  FUNC_10(&VAR_9, VAR_10 == VAR_2);
 else
  FUNC_3(&VAR_9);

 FUNC_12(1, VAR_9.buf, VAR_9.len);
 FUNC_9(&VAR_9);
 return 0;
}
