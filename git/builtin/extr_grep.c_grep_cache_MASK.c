
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int buf; int len; } ;
struct repository {TYPE_1__* index; scalar_t__ submodule_prefix; } ;
struct pathspec {int dummy; } ;
struct grep_opt {scalar_t__ status_only; struct repository* repo; } ;
struct cache_entry {int ce_flags; scalar_t__ name; int ce_mode; int oid; } ;
struct TYPE_3__ {int cache_nr; struct cache_entry** cache; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct cache_entry const*) ;
 scalar_t__ FUNC_5 (struct cache_entry const*) ;
 scalar_t__ FUNC_6 (struct cache_entry const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct grep_opt*,int ) ;
 int FUNC_9 (struct grep_opt*,int *,int ,int ,int ) ;
 int FUNC_10 (struct grep_opt*,struct pathspec const*,int *,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_11 (TYPE_1__*,struct pathspec const*,int ,int ,int ,int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_12 (struct repository*) ;
 int FUNC_13 (struct strbuf*,scalar_t__) ;
 int FUNC_14 (struct strbuf*) ;
 int FUNC_15 (struct strbuf*,int) ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (TYPE_1__*,struct pathspec const*,int ,int *) ;

__attribute__((used)) static int FUNC_19(struct grep_opt *VAR_3,
        const struct pathspec *VAR_4, int VAR_5)
{
 struct repository *VAR_6 = VAR_3->repo;
 int VAR_7 = 0;
 int VAR_8;
 struct strbuf VAR_9 = VAR_1;
 int VAR_10 = 0;
 if (VAR_6->submodule_prefix) {
  VAR_10 = FUNC_17(VAR_6->submodule_prefix);
  FUNC_13(&VAR_9, VAR_6->submodule_prefix);
 }

 if (FUNC_12(VAR_6) < 0)
  FUNC_7(FUNC_3("index file corrupt"));

 for (VAR_8 = 0; VAR_8 < VAR_6->index->cache_nr; VAR_8++) {
  const struct cache_entry *VAR_11 = VAR_6->index->cache[VAR_8];
  FUNC_15(&VAR_9, VAR_10);
  FUNC_13(&VAR_9, VAR_11->name);

  if (FUNC_2(VAR_11->ce_mode) &&
      FUNC_11(VAR_6->index, VAR_4, VAR_9.buf, VAR_9.len, 0, ((void*)0),
       FUNC_0(VAR_11->ce_mode) ||
       FUNC_1(VAR_11->ce_mode))) {





   if (VAR_5 || (VAR_11->ce_flags & VAR_0) ||
       FUNC_5(VAR_11)) {
    if (FUNC_6(VAR_11) || FUNC_4(VAR_11))
     continue;
    VAR_7 |= FUNC_9(VAR_3, &VAR_11->oid, VAR_9.buf,
       0, VAR_9.buf);
   } else {
    VAR_7 |= FUNC_8(VAR_3, VAR_9.buf);
   }
  } else if (VAR_2 && FUNC_1(VAR_11->ce_mode) &&
      FUNC_18(VAR_6->index, VAR_4, VAR_9.buf, ((void*)0))) {
   VAR_7 |= FUNC_10(VAR_3, VAR_4, ((void*)0), VAR_11->name,
           VAR_11->name, VAR_5);
  } else {
   continue;
  }

  if (FUNC_6(VAR_11)) {
   do {
    VAR_8++;
   } while (VAR_8 < VAR_6->index->cache_nr &&
     !FUNC_16(VAR_11->name, VAR_6->index->cache[VAR_8]->name));
   VAR_8--;
  }
  if (VAR_7 && VAR_3->status_only)
   break;
 }

 FUNC_14(&VAR_9);
 return VAR_7;
}
