
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int * local_copy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,struct cache_uri*) ;
 int FUNC_1 (struct cache_uri*) ;
 scalar_t__ FUNC_2 (struct cache_uri*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_3 (struct cache_uri *VAR_5) {
  if (VAR_2 & VAR_1) {
    if (VAR_5->local_copy == ((void*)0)) {
      FUNC_1 (VAR_5);
      FUNC_0 (VAR_4 + FUNC_2 (VAR_5), VAR_5);
    } else if (!(VAR_2 & VAR_0)) {
      FUNC_1 (VAR_5);
      FUNC_0 (VAR_3 + FUNC_2 (VAR_5), VAR_5);
    }
  }
}
