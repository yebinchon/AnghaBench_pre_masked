
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; struct cache_entry const** entries; } ;
struct submodule_update_clone {int quickstop; struct cache_entry const** failed_clones; TYPE_1__ list; scalar_t__ failed_clones_nr; int failed_clones_alloc; } ;
struct strbuf {int dummy; } ;
typedef struct cache_entry {int name; } const cache_entry ;


 int FUNC_0 (struct cache_entry const**,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,int ,int ) ;

__attribute__((used)) static int FUNC_5(int VAR_0,
          struct strbuf *VAR_1,
          void *VAR_2,
          void *VAR_3)
{
 const struct cache_entry *VAR_4;
 struct submodule_update_clone *VAR_5 = VAR_2;

 int *VAR_6 = VAR_3;
 int VAR_7 = *VAR_6;
 FUNC_2(VAR_6);

 if (!VAR_0)
  return 0;

 if (VAR_7 < VAR_5->list.nr) {
  VAR_4 = VAR_5->list.entries[VAR_7];
  FUNC_4(VAR_1, FUNC_1("Failed to clone '%s'. Retry scheduled"),
       VAR_4->name);
  FUNC_3(VAR_1, '\n');
  FUNC_0(VAR_5->failed_clones,
      VAR_5->failed_clones_nr + 1,
      VAR_5->failed_clones_alloc);
  VAR_5->failed_clones[VAR_5->failed_clones_nr++] = VAR_4;
  return 0;
 } else {
  VAR_7 -= VAR_5->list.nr;
  VAR_4 = VAR_5->failed_clones[VAR_7];
  FUNC_4(VAR_1, FUNC_1("Failed to clone '%s' a second time, aborting"),
       VAR_4->name);
  FUNC_3(VAR_1, '\n');
  VAR_5->quickstop = 1;
  return 1;
 }

 return 0;
}
