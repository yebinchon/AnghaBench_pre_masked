
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int result; } ;
typedef struct cache_entry {int ce_flags; int oid; } const cache_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cache_entry const*,int *,int *,struct unpack_trees_options*) ;
 int FUNC_1 (struct cache_entry const*,struct cache_entry const*) ;
 int FUNC_2 (struct cache_entry const*) ;
 int FUNC_3 (struct unpack_trees_options*,struct cache_entry const*,int,int ) ;
 struct cache_entry const* FUNC_4 (struct cache_entry const*,int *) ;
 int FUNC_5 (struct cache_entry const*,struct unpack_trees_options*) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct cache_entry const*,struct cache_entry const*) ;
 scalar_t__ FUNC_8 (struct cache_entry const*) ;
 scalar_t__ FUNC_9 (struct cache_entry const*,int ,struct unpack_trees_options*) ;
 scalar_t__ FUNC_10 (struct cache_entry const*,struct unpack_trees_options*) ;

__attribute__((used)) static int FUNC_11(const struct cache_entry *VAR_7,
   const struct cache_entry *VAR_8,
   struct unpack_trees_options *VAR_9)
{
 int VAR_10 = VAR_5;
 struct cache_entry *VAR_11 = FUNC_4(VAR_7, &VAR_9->result);

 if (!VAR_8) {
  VAR_10 |= VAR_0;
  VAR_11->ce_flags |= VAR_2;

  if (FUNC_9(VAR_11,
      VAR_6, VAR_9)) {
   FUNC_2(VAR_11);
   return -1;
  }
  FUNC_5(VAR_11, VAR_9);

  if (FUNC_8(VAR_7)) {
   int VAR_12 = FUNC_0(VAR_7, ((void*)0),
           FUNC_6(&VAR_7->oid),
           VAR_9);
   if (VAR_12)
    return VAR_12;
  }

 } else if (!(VAR_8->ce_flags & VAR_1)) {







  if (FUNC_7(VAR_8, VAR_11)) {
   FUNC_1(VAR_11, VAR_8);
   VAR_10 = 0;
  } else {
   if (FUNC_10(VAR_8, VAR_9)) {
    FUNC_2(VAR_11);
    return -1;
   }

   VAR_10 |= VAR_8->ce_flags & (VAR_3 | VAR_2);
   FUNC_5(VAR_8, VAR_9);
  }

  if (FUNC_8(VAR_7)) {
   int VAR_13 = FUNC_0(VAR_7, FUNC_6(&VAR_8->oid),
           FUNC_6(&VAR_7->oid),
           VAR_9);
   if (VAR_13)
    return VAR_13;
  }
 } else {




  FUNC_5(VAR_8, VAR_9);
 }

 FUNC_3(VAR_9, VAR_11, VAR_10, VAR_4);
 return 1;
}
