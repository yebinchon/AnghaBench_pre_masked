
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct path_exists_context {int pathspec; TYPE_2__* args; } ;
struct object_id {int dummy; } ;
struct TYPE_4__ {TYPE_1__* repo; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int *,int ,int ,int ,int *,int) ;
 int FUNC_2 (struct strbuf*,struct strbuf*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static int FUNC_5(const struct object_id *VAR_2, struct strbuf *VAR_3,
   const char *VAR_4, unsigned VAR_5,
   int VAR_6, void *VAR_7)
{
 int VAR_8 = -1;
 struct path_exists_context *VAR_9 = VAR_7;

 if (FUNC_0(VAR_5)) {
  struct strbuf VAR_10 = VAR_1;
  FUNC_2(&VAR_10, VAR_3);
  FUNC_3(&VAR_10, VAR_4);
  if (!FUNC_1(VAR_9->args->repo->index,
        &VAR_9->pathspec,
        VAR_10.buf, VAR_10.len, 0, ((void*)0), 1))
   VAR_8 = VAR_0;
  FUNC_4(&VAR_10);
 }
 return VAR_8;
}
