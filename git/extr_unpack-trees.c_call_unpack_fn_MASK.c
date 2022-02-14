
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int (* fn ) (struct cache_entry const* const*,struct unpack_trees_options*) ;} ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (struct cache_entry const* const*,struct unpack_trees_options*) ;

__attribute__((used)) static inline int FUNC_1(const struct cache_entry * const *VAR_0,
     struct unpack_trees_options *VAR_1)
{
 int VAR_2 = VAR_1->fn(VAR_0, VAR_1);
 if (VAR_2 > 0)
  VAR_2 = 0;
 return VAR_2;
}
