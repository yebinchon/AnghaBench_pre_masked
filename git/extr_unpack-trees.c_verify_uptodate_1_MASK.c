
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int src_index; scalar_t__ reset; scalar_t__ index_only; } ;
struct stat {int dummy; } ;
struct cache_entry {int ce_flags; int name; int ce_mode; int oid; } ;
typedef enum unpack_trees_error_types { ____Placeholder_unpack_trees_error_types } unpack_trees_error_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct unpack_trees_options*,int,int ) ;
 scalar_t__ FUNC_2 (struct cache_entry const*) ;
 scalar_t__ FUNC_3 (struct cache_entry const*) ;
 int FUNC_4 (struct cache_entry const*,char*,int ,struct unpack_trees_options*) ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_5 (int ,struct cache_entry const*,struct stat*,int) ;
 int FUNC_6 (int ,struct stat*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct cache_entry const*) ;

__attribute__((used)) static int FUNC_9(const struct cache_entry *VAR_5,
        struct unpack_trees_options *VAR_6,
        enum unpack_trees_error_types VAR_7)
{
 struct stat VAR_8;

 if (VAR_6->index_only)
  return 0;






 if ((VAR_5->ce_flags & VAR_2) || FUNC_2(VAR_5))
  ;
 else if (VAR_6->reset || FUNC_3(VAR_5))
  return 0;

 if (!FUNC_6(VAR_5->name, &VAR_8)) {
  int VAR_9 = VAR_1|VAR_0;
  unsigned VAR_10 = FUNC_5(VAR_6->src_index, VAR_5, &VAR_8, VAR_9);

  if (FUNC_8(VAR_5)) {
   int VAR_11 = FUNC_4(VAR_5,
    "HEAD", FUNC_7(&VAR_5->oid), VAR_6);
   if (VAR_11)
    return FUNC_1(VAR_6, VAR_7, VAR_5->name);
   return 0;
  }

  if (!VAR_10)
   return 0;





  if (FUNC_0(VAR_5->ce_mode))
   return 0;

  VAR_4 = 0;
 }
 if (VAR_4 == VAR_3)
  return 0;
 return FUNC_1(VAR_6, VAR_7, VAR_5->name);
}
