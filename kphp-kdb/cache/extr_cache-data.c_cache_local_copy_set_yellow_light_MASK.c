
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_local_copy {int flags; int yellow_light_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static void FUNC_1 (struct cache_local_copy *VAR_2, int VAR_3) {
  FUNC_0 (4, "cache_local_copy_set_yellow_light (duration: %d)\n", VAR_3);
  VAR_2->flags &= ~VAR_0;
  VAR_2->flags |= VAR_3;
  VAR_2->yellow_light_start = VAR_1;
}
