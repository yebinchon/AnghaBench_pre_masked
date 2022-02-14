
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct path_hashmap_entry {int e; int path; } ;
struct object_id {int dummy; } ;
struct merge_options {TYPE_1__* priv; } ;
struct TYPE_2__ {int current_file_dir_set; } ;


 int FUNC_0 (struct path_hashmap_entry*,char const*,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct strbuf*,char const*) ;
 int FUNC_6 (struct strbuf*,int) ;

__attribute__((used)) static int FUNC_7(const struct object_id *VAR_1,
      struct strbuf *VAR_2, const char *VAR_3,
      unsigned int VAR_4, int VAR_5, void *VAR_6)
{
 struct path_hashmap_entry *VAR_7;
 int VAR_8 = VAR_2->len;
 struct merge_options *VAR_9 = VAR_6;

 FUNC_5(VAR_2, VAR_3);

 FUNC_0(VAR_7, VAR_3, VAR_2->buf, VAR_2->len);
 FUNC_3(&VAR_7->e, FUNC_4(VAR_7->path));
 FUNC_2(&VAR_9->priv->current_file_dir_set, &VAR_7->e);

 FUNC_6(VAR_2, VAR_8);
 return (FUNC_1(VAR_4) ? VAR_0 : 0);
}
