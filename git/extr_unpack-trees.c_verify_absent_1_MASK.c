
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int update; scalar_t__ reset; scalar_t__ index_only; } ;
struct stat {int dummy; } ;
struct cache_entry {char* name; int oid; } ;
typedef enum unpack_trees_error_types { ____Placeholder_unpack_trees_error_types } unpack_trees_error_types ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (struct cache_entry const*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,int ,struct cache_entry const*,struct stat*,int,struct unpack_trees_options*) ;
 int FUNC_4 (struct cache_entry const*,int ,int *,struct unpack_trees_options*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct cache_entry const*) ;
 char* FUNC_10 (char*,int) ;

__attribute__((used)) static int FUNC_11(const struct cache_entry *VAR_3,
      enum unpack_trees_error_types VAR_4,
      struct unpack_trees_options *VAR_5)
{
 int VAR_6;
 struct stat VAR_7;

 if (VAR_5->index_only || VAR_5->reset || !VAR_5->update)
  return 0;

 VAR_6 = FUNC_2(VAR_3->name, FUNC_0(VAR_3));
 if (!VAR_6)
  return 0;
 else if (VAR_6 > 0) {
  char *VAR_8;
  int VAR_9;

  VAR_8 = FUNC_10(VAR_3->name, VAR_6);
  if (FUNC_7(VAR_8, &VAR_7))
   VAR_9 = FUNC_5("cannot stat '%s'", VAR_8);
  else {
   if (FUNC_9(VAR_3))
    VAR_9 = FUNC_4(VAR_3,
        FUNC_8(&VAR_3->oid),
        ((void*)0), VAR_5);
   else
    VAR_9 = FUNC_3(VAR_8, VAR_6, VAR_0, ((void*)0),
        &VAR_7, VAR_4, VAR_5);
  }
  FUNC_6(VAR_8);
  return VAR_9;
 } else if (FUNC_7(VAR_3->name, &VAR_7)) {
  if (VAR_2 != VAR_1)
   return FUNC_5("cannot stat '%s'", VAR_3->name);
  return 0;
 } else {
  if (FUNC_9(VAR_3))
   return FUNC_4(VAR_3, FUNC_8(&VAR_3->oid),
        ((void*)0), VAR_5);

  return FUNC_3(VAR_3->name, FUNC_0(VAR_3),
       FUNC_1(VAR_3), VAR_3, &VAR_7,
       VAR_4, VAR_5);
 }
}
