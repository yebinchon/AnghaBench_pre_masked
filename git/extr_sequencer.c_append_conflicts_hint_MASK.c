
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int name; } ;
typedef enum commit_msg_cleanup_mode { ____Placeholder_commit_msg_cleanup_mode } commit_msg_cleanup_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cache_entry const*) ;
 char VAR_1 ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char*,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct strbuf*) ;

void FUNC_5(struct index_state *VAR_2,
 struct strbuf *VAR_3, enum commit_msg_cleanup_mode VAR_4)
{
 int VAR_5;

 if (VAR_4 == VAR_0) {
  FUNC_1(VAR_3, '\n');
  FUNC_4(VAR_3);
  FUNC_1(VAR_3, VAR_1);
 }

 FUNC_1(VAR_3, '\n');
 FUNC_2(VAR_3, "Conflicts:\n");
 for (VAR_5 = 0; VAR_5 < VAR_2->cache_nr;) {
  const struct cache_entry *VAR_6 = VAR_2->cache[VAR_5++];
  if (FUNC_0(VAR_6)) {
   FUNC_2(VAR_3, "\t%s\n", VAR_6->name);
   while (VAR_5 < VAR_2->cache_nr &&
          !FUNC_3(VAR_6->name, VAR_2->cache[VAR_5]->name))
    VAR_5++;
  }
 }
}
