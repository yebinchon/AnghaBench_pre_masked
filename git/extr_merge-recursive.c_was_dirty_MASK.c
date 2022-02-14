
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct merge_options {TYPE_1__* priv; } ;
struct cache_entry {int dummy; } ;
struct TYPE_4__ {int src_index; } ;
struct TYPE_3__ {TYPE_2__ unpack_opts; scalar_t__ call_depth; } ;


 int VAR_0 ;
 struct cache_entry* FUNC_0 (int ,char const*,int ,int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (struct cache_entry*,TYPE_2__*) ;
 int FUNC_3 (struct merge_options*,char const*) ;

__attribute__((used)) static int FUNC_4(struct merge_options *VAR_1, const char *VAR_2)
{
 struct cache_entry *VAR_3;
 int VAR_4 = 1;

 if (VAR_1->priv->call_depth || !FUNC_3(VAR_1, VAR_2))
  return !VAR_4;

 VAR_3 = FUNC_0(VAR_1->priv->unpack_opts.src_index,
          VAR_2, FUNC_1(VAR_2), VAR_0);
 VAR_4 = FUNC_2(VAR_3, &VAR_1->priv->unpack_opts) != 0;
 return VAR_4;
}
