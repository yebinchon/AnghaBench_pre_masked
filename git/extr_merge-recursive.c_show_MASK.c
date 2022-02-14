
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct merge_options {int verbosity; TYPE_1__* priv; } ;
struct TYPE_2__ {int call_depth; } ;



__attribute__((used)) static int FUNC_0(struct merge_options *VAR_0, int VAR_1)
{
 return (!VAR_0->priv->call_depth && VAR_0->verbosity >= VAR_1) ||
  VAR_0->verbosity >= 5;
}
