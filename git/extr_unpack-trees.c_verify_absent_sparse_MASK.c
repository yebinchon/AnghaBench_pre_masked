
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int dummy; } ;
struct cache_entry {int dummy; } ;
typedef enum unpack_trees_error_types { ____Placeholder_unpack_trees_error_types } unpack_trees_error_types ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cache_entry const*,int,struct unpack_trees_options*) ;

__attribute__((used)) static int FUNC_1(const struct cache_entry *VAR_2,
    enum unpack_trees_error_types VAR_3,
    struct unpack_trees_options *VAR_4)
{
 enum unpack_trees_error_types VAR_5 = VAR_3;
 if (VAR_5 == VAR_1)
  VAR_5 = VAR_0;

 return FUNC_0(VAR_2, VAR_5, VAR_4);
}
