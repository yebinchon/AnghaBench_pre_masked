
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct stat {int dummy; } ;
struct patch {char* new_name; unsigned int new_mode; int is_binary; int old_name; int is_new; } ;
struct image {int dummy; } ;
struct cache_entry {int dummy; } ;
struct apply_state {TYPE_1__* repo; } ;
struct TYPE_5__ {struct cache_entry** cache; } ;
struct TYPE_4__ {TYPE_2__* index; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,struct cache_entry*,struct stat*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_2__*,char*,int ) ;
 int FUNC_6 (struct apply_state*,struct strbuf*,struct cache_entry*,struct stat*,struct patch*,char*,unsigned int) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (struct image*,char*,size_t,int) ;
 char* FUNC_9 (struct strbuf*,size_t*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (struct apply_state*,struct cache_entry*,struct stat*) ;

__attribute__((used)) static int FUNC_12(struct apply_state *VAR_3,
   struct image *VAR_4,
   struct patch *VAR_5)
{
 struct strbuf VAR_6 = VAR_1;
 int VAR_7, VAR_8;
 size_t VAR_9;
 char *VAR_10;
 struct stat VAR_11;
 struct cache_entry *VAR_12;
 char *VAR_13 = VAR_5->new_name;
 unsigned VAR_14 = VAR_5->new_mode;

 if (!VAR_5->is_new)
  FUNC_0("patch to %s is not a creation", VAR_5->old_name);

 VAR_8 = FUNC_5(VAR_3->repo->index, VAR_13, FUNC_10(VAR_13));
 if (VAR_8 < 0)
  return FUNC_3(FUNC_1("%s: does not exist in index"), VAR_13);
 VAR_12 = VAR_3->repo->index->cache[VAR_8];
 if (FUNC_7(VAR_13, &VAR_11)) {
  if (VAR_2 != VAR_0)
   return FUNC_4("%s", VAR_13);
  if (FUNC_2(VAR_3->repo->index, VAR_12, &VAR_11))
   return -1;
 }
 if (FUNC_11(VAR_3, VAR_12, &VAR_11))
  return FUNC_3(FUNC_1("%s: does not match index"), VAR_13);

 VAR_7 = FUNC_6(VAR_3, &VAR_6, VAR_12, &VAR_11, VAR_5, VAR_13, VAR_14);
 if (VAR_7 < 0)
  return VAR_7;
 else if (VAR_7)
  return -1;
 VAR_10 = FUNC_9(&VAR_6, &VAR_9);
 FUNC_8(VAR_4, VAR_10, VAR_9, !VAR_5->is_binary);
 return 0;
}
