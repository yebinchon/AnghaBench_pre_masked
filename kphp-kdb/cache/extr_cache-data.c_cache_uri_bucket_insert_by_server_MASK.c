
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int dummy; } ;
struct cache_local_copy {int flags; int packed_location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int const VAR_3 ;
 int FUNC_1 (scalar_t__,struct cache_uri*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_3 (struct cache_uri *VAR_5, struct cache_local_copy *VAR_6, int VAR_7) {
  const int VAR_8 = (VAR_1 | VAR_0);
  FUNC_0 ((VAR_3 & VAR_8) == VAR_8);
  int VAR_9 = 0;
  if (VAR_7 == 1 && (VAR_6[0].flags & VAR_2)) {
    VAR_9 = FUNC_2 (VAR_6[0].packed_location);
  }
  FUNC_1 (VAR_4 + VAR_9, VAR_5);
}
