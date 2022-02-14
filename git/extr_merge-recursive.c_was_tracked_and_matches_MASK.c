
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct merge_options {TYPE_1__* priv; } ;
struct diff_filespec {scalar_t__ mode; int oid; } ;
struct cache_entry {scalar_t__ ce_mode; int oid; } ;
struct TYPE_4__ {struct cache_entry** cache; } ;
struct TYPE_3__ {TYPE_2__ orig_index; } ;


 int FUNC_0 (TYPE_2__*,char const*,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct merge_options *VAR_0, const char *VAR_1,
       const struct diff_filespec *VAR_2)
{
 int VAR_3 = FUNC_0(&VAR_0->priv->orig_index, VAR_1, FUNC_2(VAR_1));
 struct cache_entry *VAR_4;

 if (0 > VAR_3)

  return 0;


 VAR_4 = VAR_0->priv->orig_index.cache[VAR_3];
 return (FUNC_1(&VAR_4->oid, &VAR_2->oid) && VAR_4->ce_mode == VAR_2->mode);
}
