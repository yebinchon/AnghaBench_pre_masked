
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct patch {char* old_name; int is_new; unsigned int new_mode; unsigned int old_mode; scalar_t__ is_delete; } ;
struct cache_entry {unsigned int ce_mode; } ;
struct apply_state {scalar_t__ cached; TYPE_1__* repo; scalar_t__ check_index; } ;
struct TYPE_5__ {struct cache_entry** cache; } ;
struct TYPE_4__ {TYPE_2__* index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (struct cache_entry*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,struct cache_entry*,struct stat*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (TYPE_2__*,char const*,int ) ;
 int FUNC_8 (char const*,struct stat*) ;
 struct patch* FUNC_9 (struct apply_state*,struct patch*,int*) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (struct apply_state*,struct cache_entry*,struct stat*) ;
 int FUNC_12 (int ,char const*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_13(struct apply_state *VAR_3,
     struct patch *VAR_4,
     struct cache_entry **VAR_5,
     struct stat *VAR_6)
{
 const char *VAR_7 = VAR_4->old_name;
 struct patch *VAR_8 = ((void*)0);
 int VAR_9 = 0, VAR_10;
 unsigned VAR_11 = 0;

 if (!VAR_7)
  return 0;

 FUNC_2(VAR_4->is_new <= 0);
 VAR_8 = FUNC_9(VAR_3, VAR_4, &VAR_10);

 if (VAR_10)
  return FUNC_5(FUNC_1("path %s has been renamed/deleted"), VAR_7);
 if (VAR_8) {
  VAR_11 = VAR_8->new_mode;
 } else if (!VAR_3->cached) {
  VAR_9 = FUNC_8(VAR_7, VAR_6);
  if (VAR_9 && VAR_2 != VAR_0)
   return FUNC_6("%s", VAR_7);
 }

 if (VAR_3->check_index && !VAR_8) {
  int VAR_12 = FUNC_7(VAR_3->repo->index, VAR_7,
      FUNC_10(VAR_7));
  if (VAR_12 < 0) {
   if (VAR_4->is_new < 0)
    goto is_new;
   return FUNC_5(FUNC_1("%s: does not exist in index"), VAR_7);
  }
  *VAR_5 = VAR_3->repo->index->cache[VAR_12];
  if (VAR_9 < 0) {
   if (FUNC_4(VAR_3->repo->index, *VAR_5, VAR_6))
    return -1;
  }
  if (!VAR_3->cached && FUNC_11(VAR_3, *VAR_5, VAR_6))
   return FUNC_5(FUNC_1("%s: does not match index"), VAR_7);
  if (VAR_3->cached)
   VAR_11 = (*VAR_5)->ce_mode;
 } else if (VAR_9 < 0) {
  if (VAR_4->is_new < 0)
   goto is_new;
  return FUNC_6("%s", VAR_7);
 }

 if (!VAR_3->cached && !VAR_8)
  VAR_11 = FUNC_3(*VAR_5, VAR_6->st_mode);

 if (VAR_4->is_new < 0)
  VAR_4->is_new = 0;
 if (!VAR_4->old_mode)
  VAR_4->old_mode = VAR_11;
 if ((VAR_11 ^ VAR_4->old_mode) & VAR_1)
  return FUNC_5(FUNC_1("%s: wrong type"), VAR_7);
 if (VAR_11 != VAR_4->old_mode)
  FUNC_12(FUNC_1("%s has type %o, expected %o"),
   VAR_7, VAR_11, VAR_4->old_mode);
 if (!VAR_4->new_mode && !VAR_4->is_delete)
  VAR_4->new_mode = VAR_11;
 return 0;

 is_new:
 VAR_4->is_new = 1;
 VAR_4->is_delete = 0;
 FUNC_0(VAR_4->old_name);
 return 0;
}
