
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct merge_options {int buffer_output; TYPE_1__* priv; int obuf; } ;
struct TYPE_2__ {int needed_rename_limit; int call_depth; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct merge_options*) ;
 scalar_t__ FUNC_3 (struct merge_options*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct merge_options *VAR_0)
{
 FUNC_2(VAR_0);
 if (!VAR_0->priv->call_depth && VAR_0->buffer_output < 2)
  FUNC_4(&VAR_0->obuf);
 if (FUNC_3(VAR_0, 2))
  FUNC_1("merge.renamelimit",
           VAR_0->priv->needed_rename_limit, 0);
 FUNC_0(VAR_0->priv);
}
