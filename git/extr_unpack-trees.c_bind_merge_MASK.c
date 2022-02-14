
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int merge_size; scalar_t__ quiet; } ;
struct cache_entry {int name; } ;


 int FUNC_0 (struct unpack_trees_options*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct cache_entry const*,struct unpack_trees_options*) ;
 int FUNC_3 (struct cache_entry const*,int *,struct unpack_trees_options*) ;
 char* FUNC_4 (int ) ;

int FUNC_5(const struct cache_entry * const *VAR_1,
        struct unpack_trees_options *VAR_2)
{
 const struct cache_entry *VAR_3 = VAR_1[0];
 const struct cache_entry *VAR_4 = VAR_1[1];

 if (VAR_2->merge_size != 1)
  return FUNC_1("Cannot do a bind merge of %d trees",
        VAR_2->merge_size);
 if (VAR_4 && VAR_3)
  return VAR_2->quiet ? -1 :
   FUNC_1(FUNC_0(VAR_2, VAR_0),
         FUNC_4(VAR_4->name),
         FUNC_4(VAR_3->name));
 if (!VAR_4)
  return FUNC_2(VAR_3, VAR_2);
 else
  return FUNC_3(VAR_4, ((void*)0), VAR_2);
}
