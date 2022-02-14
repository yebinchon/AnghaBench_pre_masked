
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache_dir {int dummy; } ;
struct untracked_cache {int dir_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct untracked_cache*,struct untracked_cache_dir*) ;
 struct untracked_cache_dir* FUNC_1 (struct untracked_cache*,struct untracked_cache_dir*,char const*,int) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static int FUNC_3(struct untracked_cache *VAR_1,
        struct untracked_cache_dir *VAR_2,
        const char *VAR_3, int VAR_4)
{
 const char *VAR_5 = FUNC_2(VAR_3, '/');

 if (VAR_5) {
  int VAR_6 = VAR_5 - VAR_3;
  struct untracked_cache_dir *VAR_7 =
   FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6);
  int VAR_8 =
   FUNC_3(VAR_1, VAR_7, VAR_5 + 1,
       VAR_4 - (VAR_6 + 1));
  if (VAR_8)
   FUNC_0(VAR_1, VAR_2);
  return VAR_8;
 }

 FUNC_0(VAR_1, VAR_2);
 return VAR_1->dir_flags & VAR_0;
}
