
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct patch {scalar_t__ is_delete; int resultsize; int result; scalar_t__ direct_to_threeway; } ;
struct image {int line_allocated; int len; int buf; } ;
struct cache_entry {int dummy; } ;
struct apply_state {int threeway; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct apply_state*,struct patch*) ;
 scalar_t__ FUNC_2 (struct apply_state*,struct image*,struct patch*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct apply_state*,struct image*,struct patch*,struct stat*,struct cache_entry const*) ;
 scalar_t__ FUNC_6 (struct apply_state*,struct image*,struct patch*,struct stat*,struct cache_entry const*) ;

__attribute__((used)) static int FUNC_7(struct apply_state *VAR_0, struct patch *VAR_1,
        struct stat *VAR_2, const struct cache_entry *VAR_3)
{
 struct image VAR_4;

 if (FUNC_5(VAR_0, &VAR_4, VAR_1, VAR_2, VAR_3) < 0)
  return -1;

 if (VAR_1->direct_to_threeway ||
     FUNC_2(VAR_0, &VAR_4, VAR_1) < 0) {

  if (!VAR_0->threeway || FUNC_6(VAR_0, &VAR_4, VAR_1, VAR_2, VAR_3) < 0)
   return -1;
 }
 VAR_1->result = VAR_4.buf;
 VAR_1->resultsize = VAR_4.len;
 FUNC_1(VAR_0, VAR_1);
 FUNC_4(VAR_4.line_allocated);

 if (0 < VAR_1->is_delete && VAR_1->resultsize)
  return FUNC_3(FUNC_0("removal patch leaves file contents"));

 return 0;
}
