
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct merge_options {TYPE_2__* priv; TYPE_1__* repo; } ;
struct TYPE_4__ {int call_depth; } ;
struct TYPE_3__ {int index; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char const*,int,int ) ;
 int FUNC_2 (struct merge_options*,int,int ,char const*,char const*,...) ;
 char* FUNC_3 (struct merge_options*,char const*,char const*) ;
 scalar_t__ FUNC_4 (struct merge_options*,char const*) ;

__attribute__((used)) static char *FUNC_5(struct merge_options *VAR_0,
        const char *VAR_1,
        const char *VAR_2,
        const char *VAR_3)
{
 char *VAR_4 = ((void*)0);
 if (FUNC_1(VAR_0->repo->index, VAR_1, !VAR_0->priv->call_depth, 0)) {
  VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2);
  FUNC_2(VAR_0, 1, FUNC_0("%s is a directory in %s adding "
          "as %s instead"),
         VAR_1, VAR_3, VAR_4);
 } else if (FUNC_4(VAR_0, VAR_1)) {
  VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2);
  FUNC_2(VAR_0, 1, FUNC_0("Refusing to lose untracked file"
          " at %s; adding as %s instead"),
         VAR_1, VAR_4);
 }

 return VAR_4;
}
