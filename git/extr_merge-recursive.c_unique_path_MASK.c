
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {size_t len; int buf; } ;
struct path_hashmap_entry {int e; int path; } ;
struct merge_options {TYPE_1__* priv; } ;
struct TYPE_2__ {int current_file_dir_set; int call_depth; } ;


 int FUNC_0 (struct path_hashmap_entry*,char const*,int ,size_t) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct strbuf*,char*,char const*) ;
 char* FUNC_8 (struct strbuf*,int *) ;
 int FUNC_9 (struct strbuf*,size_t) ;

__attribute__((used)) static char *FUNC_10(struct merge_options *VAR_1,
    const char *VAR_2,
    const char *VAR_3)
{
 struct path_hashmap_entry *VAR_4;
 struct strbuf VAR_5 = VAR_0;
 int VAR_6 = 0;
 size_t VAR_7;

 FUNC_7(&VAR_5, "%s~", VAR_2);
 FUNC_1(&VAR_5, VAR_3);

 VAR_7 = VAR_5.len;
 while (FUNC_5(&VAR_1->priv->current_file_dir_set,
         FUNC_6(VAR_5.buf), VAR_5.buf) ||
        (!VAR_1->priv->call_depth && FUNC_2(VAR_5.buf))) {
  FUNC_9(&VAR_5, VAR_7);
  FUNC_7(&VAR_5, "_%d", VAR_6++);
 }

 FUNC_0(VAR_4, VAR_2, VAR_5.buf, VAR_5.len);
 FUNC_4(&VAR_4->e, FUNC_6(VAR_4->path));
 FUNC_3(&VAR_1->priv->current_file_dir_set, &VAR_4->e);
 return FUNC_8(&VAR_5, ((void*)0));
}
