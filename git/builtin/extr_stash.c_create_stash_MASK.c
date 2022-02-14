
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct stash_info {int w_commit; } ;
struct pathspec {int dummy; } ;
typedef int ps ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct pathspec*) ;
 int FUNC_1 (struct pathspec*,struct strbuf*,int ,int ,struct stash_info*,int *,int ) ;
 int FUNC_2 (struct pathspec*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct strbuf*,int,char const**,char) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static int FUNC_7(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 int VAR_4 = 0;
 struct strbuf VAR_5 = VAR_0;
 struct stash_info VAR_6;
 struct pathspec VAR_7;


 FUNC_5(&VAR_5, VAR_1 - 1, ++VAR_2, ' ');

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 if (!FUNC_0(&VAR_7))
  return 0;

 VAR_4 = FUNC_1(&VAR_7, &VAR_5, 0, 0, &VAR_6,
         ((void*)0), 0);
 if (!VAR_4)
  FUNC_4("%s", FUNC_3(&VAR_6.w_commit));

 FUNC_6(&VAR_5);
 return VAR_4;
}
