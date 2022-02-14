
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int line_len; int line; } ;
struct TYPE_4__ {TYPE_3__ ctx; } ;
typedef TYPE_1__ git_config_parser ;
typedef int git_buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char**,int*,char*,int) ;

__attribute__((used)) static int FUNC_7(git_config_parser *VAR_0, git_buf *VAR_1, int VAR_2)
{
 int VAR_3;
 bool VAR_4 = 1;

 while (VAR_4) {
  char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
  int VAR_7;


  FUNC_4(&VAR_0->ctx);
  VAR_5 = FUNC_2(VAR_0->ctx.line, VAR_0->ctx.line_len);
  FUNC_0(VAR_5);





  if (VAR_5[0] == '\0') {
   VAR_7 = 0;
   goto out;
  }


  VAR_3 = FUNC_5(VAR_5, !!VAR_2);
  if (VAR_5[0] == '\0')
   goto next;

  if ((VAR_7 = FUNC_6(&VAR_6, &VAR_4,
        VAR_5, VAR_2)) < 0)
   goto out;


  if ((VAR_7 = FUNC_3(VAR_1, VAR_6)) < 0)
   goto out;

next:
  FUNC_1(VAR_5);
  FUNC_1(VAR_6);
  VAR_2 = VAR_3;
  continue;

out:
  FUNC_1(VAR_5);
  FUNC_1(VAR_6);
  return VAR_7;
 }

 return 0;
}
