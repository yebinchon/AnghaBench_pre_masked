
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct stat {int dummy; } ;
struct patch {int is_binary; int old_name; int * fragments; int old_mode; int resultsize; int result; } ;
struct image {int dummy; } ;
struct cache_entry {int dummy; } ;
struct apply_state {int dummy; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct apply_state*,struct strbuf*,struct cache_entry const*,struct stat*,struct patch*,int ,int ) ;
 int FUNC_4 (struct image*,char*,size_t,int) ;
 struct patch* FUNC_5 (struct apply_state*,struct patch*,int*) ;
 int FUNC_6 (struct strbuf*,int ,int ) ;
 char* FUNC_7 (struct strbuf*,size_t*) ;

__attribute__((used)) static int FUNC_8(struct apply_state *VAR_2,
    struct image *VAR_3,
    struct patch *VAR_4, struct stat *VAR_5,
    const struct cache_entry *VAR_6)
{
 struct strbuf VAR_7 = VAR_0;
 size_t VAR_8;
 char *VAR_9;
 struct patch *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(VAR_2, VAR_4, &VAR_11);
 if (VAR_11)
  return FUNC_1(FUNC_0("path %s has been renamed/deleted"),
        VAR_4->old_name);
 if (VAR_10) {

  FUNC_6(&VAR_7, VAR_10->result, VAR_10->resultsize);
 } else {
  VAR_11 = FUNC_3(VAR_2, &VAR_7, VAR_6, VAR_5, VAR_4,
        VAR_4->old_name, VAR_4->old_mode);
  if (VAR_11 < 0)
   return VAR_11;
  else if (VAR_11 == VAR_1) {






   FUNC_2(VAR_4->fragments);
   VAR_4->fragments = ((void*)0);
  } else if (VAR_11) {
   return FUNC_1(FUNC_0("failed to read %s"), VAR_4->old_name);
  }
 }

 VAR_9 = FUNC_7(&VAR_7, &VAR_8);
 FUNC_4(VAR_3, VAR_9, VAR_8, !VAR_4->is_binary);
 return 0;
}
