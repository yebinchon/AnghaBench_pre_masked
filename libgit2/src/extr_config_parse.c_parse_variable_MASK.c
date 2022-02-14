
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int line_len; int line; } ;
struct TYPE_6__ {TYPE_5__ ctx; } ;
typedef TYPE_1__ git_config_parser ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int *,int) ;
 int FUNC_10 (char**,char const**,TYPE_1__*,char*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char**,int*,char const*,int ) ;

__attribute__((used)) static int FUNC_13(git_config_parser *VAR_1, char **VAR_2, char **VAR_3)
{
 const char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 int VAR_8, VAR_9;
 bool VAR_10;

 *VAR_2 = ((void*)0);
 *VAR_3 = ((void*)0);

 FUNC_8(&VAR_1->ctx);
 VAR_5 = FUNC_3(VAR_1->ctx.line, VAR_1->ctx.line_len);
 FUNC_0(VAR_5);

 VAR_8 = FUNC_11(VAR_5, 0);

 if ((VAR_9 = FUNC_10(&VAR_6, &VAR_4, VAR_1, VAR_5)) < 0)
  goto out;




 if (VAR_4 != ((void*)0)) {
  while (FUNC_2(VAR_4[0]))
   VAR_4++;

  if ((VAR_9 = FUNC_12(&VAR_7, &VAR_10, VAR_4, 0)) < 0)
   goto out;

  if (VAR_10) {
   git_buf VAR_11 = VAR_0;
   FUNC_4(&VAR_11, VAR_7, 0);
   VAR_7 = ((void*)0);

   if (FUNC_9(VAR_1, &VAR_11, VAR_8) < 0 ||
       FUNC_7(&VAR_11)) {
    VAR_9 = -1;
    FUNC_6(&VAR_11);
    goto out;
   }

   VAR_7 = FUNC_5(&VAR_11);
  }
 }

 *VAR_2 = VAR_6;
 *VAR_3 = VAR_7;
 VAR_6 = ((void*)0);
 VAR_7 = ((void*)0);

out:
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);
 FUNC_1(VAR_5);
 return VAR_9;
}
