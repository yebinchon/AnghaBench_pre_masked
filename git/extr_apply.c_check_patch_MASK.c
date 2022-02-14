
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct patch {char* old_name; char* new_name; int rejected; scalar_t__ is_new; int direct_to_threeway; int new_mode; int old_mode; int is_delete; scalar_t__ is_copy; scalar_t__ is_rename; } ;
struct cache_entry {int dummy; } ;
struct apply_state {int unsafe_paths; scalar_t__ threeway; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct apply_state*,struct patch*,struct stat*,struct cache_entry*) ;
 int FUNC_2 (struct apply_state*,struct patch*,struct cache_entry**,struct stat*) ;
 int FUNC_3 (struct apply_state*,char const*,int) ;
 scalar_t__ FUNC_4 (struct patch*) ;
 int FUNC_5 (int ,...) ;
 struct patch* FUNC_6 (struct apply_state*,char const*) ;
 scalar_t__ FUNC_7 (struct apply_state*,char*) ;
 int FUNC_8 (char const*,char const*) ;
 scalar_t__ FUNC_9 (struct patch*) ;
 scalar_t__ FUNC_10 (struct patch*) ;

__attribute__((used)) static int FUNC_11(struct apply_state *VAR_2, struct patch *VAR_3)
{
 struct stat VAR_4;
 const char *VAR_5 = VAR_3->old_name;
 const char *VAR_6 = VAR_3->new_name;
 const char *VAR_7 = VAR_5 ? VAR_5 : VAR_6;
 struct cache_entry *VAR_8 = ((void*)0);
 struct patch *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_3->rejected = 1;

 VAR_11 = FUNC_2(VAR_2, VAR_3, &VAR_8, &VAR_4);
 if (VAR_11)
  return VAR_11;
 VAR_5 = VAR_3->old_name;
 if ((VAR_9 = FUNC_6(VAR_2, VAR_6)) &&
     (FUNC_10(VAR_9) || FUNC_9(VAR_9)))
  VAR_10 = 1;
 else
  VAR_10 = 0;

 if (VAR_6 &&
     ((0 < VAR_3->is_new) || VAR_3->is_rename || VAR_3->is_copy)) {
  int VAR_12 = FUNC_3(VAR_2, VAR_6, VAR_10);

  if (VAR_12 && VAR_2->threeway) {
   VAR_3->direct_to_threeway = 1;
  } else switch (VAR_12) {
  case 0:
   break;
  case 129:
   return FUNC_5(FUNC_0("%s: already exists in index"), VAR_6);
   break;
  case 128:
   return FUNC_5(FUNC_0("%s: already exists in working directory"),
         VAR_6);
  default:
   return VAR_12;
  }

  if (!VAR_3->new_mode) {
   if (0 < VAR_3->is_new)
    VAR_3->new_mode = VAR_1 | 0644;
   else
    VAR_3->new_mode = VAR_3->old_mode;
  }
 }

 if (VAR_6 && VAR_5) {
  int VAR_13 = !FUNC_8(VAR_5, VAR_6);
  if (!VAR_3->new_mode)
   VAR_3->new_mode = VAR_3->old_mode;
  if ((VAR_3->old_mode ^ VAR_3->new_mode) & VAR_0) {
   if (VAR_13)
    return FUNC_5(FUNC_0("new mode (%o) of %s does not "
            "match old mode (%o)"),
     VAR_3->new_mode, VAR_6,
     VAR_3->old_mode);
   else
    return FUNC_5(FUNC_0("new mode (%o) of %s does not "
            "match old mode (%o) of %s"),
     VAR_3->new_mode, VAR_6,
     VAR_3->old_mode, VAR_5);
  }
 }

 if (!VAR_2->unsafe_paths && FUNC_4(VAR_3))
  return -128;
 if (!VAR_3->is_delete && FUNC_7(VAR_2, VAR_3->new_name))
  return FUNC_5(FUNC_0("affected file '%s' is beyond a symbolic link"),
        VAR_3->new_name);

 if (FUNC_1(VAR_2, VAR_3, &VAR_4, VAR_8) < 0)
  return FUNC_5(FUNC_0("%s: patch does not apply"), VAR_7);
 VAR_3->rejected = 0;
 return 0;
}
