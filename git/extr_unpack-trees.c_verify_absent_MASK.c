
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int skip_sparse_checkout; } ;
struct cache_entry {int ce_flags; } ;
typedef enum unpack_trees_error_types { ____Placeholder_unpack_trees_error_types } unpack_trees_error_types ;


 int VAR_0 ;
 int FUNC_0 (struct cache_entry const*,int,struct unpack_trees_options*) ;

__attribute__((used)) static int FUNC_1(const struct cache_entry *VAR_1,
    enum unpack_trees_error_types VAR_2,
    struct unpack_trees_options *VAR_3)
{
 if (!VAR_3->skip_sparse_checkout && (VAR_1->ce_flags & VAR_0))
  return 0;
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
