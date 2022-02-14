
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int result; int src_index; scalar_t__ dir; } ;
struct stat {int st_mode; } ;
struct cache_entry {int ce_flags; } ;
typedef enum unpack_trees_error_types { ____Placeholder_unpack_trees_error_types } unpack_trees_error_types ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct unpack_trees_options*,int,char const*) ;
 scalar_t__ FUNC_2 (struct unpack_trees_options*,char const*,int,struct stat*) ;
 scalar_t__ VAR_1 ;
 struct cache_entry* FUNC_3 (int *,char const*,int,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,char const*,int*) ;
 scalar_t__ FUNC_5 (struct cache_entry const*,struct unpack_trees_options*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2, int VAR_3, int VAR_4,
         const struct cache_entry *VAR_5, struct stat *VAR_6,
         enum unpack_trees_error_types VAR_7,
         struct unpack_trees_options *VAR_8)
{
 const struct cache_entry *VAR_9;
 if (VAR_1 && FUNC_2(VAR_8, VAR_2, VAR_3, VAR_6))
  return 0;

 if (VAR_8->dir &&
     FUNC_4(VAR_8->dir, VAR_8->src_index, VAR_2, &VAR_4))




  return 0;
 if (FUNC_0(VAR_6->st_mode)) {







  if (FUNC_5(VAR_5, VAR_8) < 0)
   return -1;
  return 0;
 }






 VAR_9 = FUNC_3(&VAR_8->result, VAR_2, VAR_3, 0);
 if (VAR_9) {
  if (VAR_9->ce_flags & VAR_0)
   return 0;
 }

 return FUNC_1(VAR_8, VAR_7, VAR_2);
}
