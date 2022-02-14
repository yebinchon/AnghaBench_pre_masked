
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_local_copy_server {unsigned int* bitset; } ;


 int VAR_0 ;
 struct cache_local_copy_server* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1 (int VAR_1, int VAR_2, int VAR_3) {
  struct cache_local_copy_server *VAR_4 = FUNC_0 (VAR_1 * (VAR_0 + 1) + VAR_2, 0);
  if (VAR_4 == ((void*)0)) {
    return 1;
  }
  return (VAR_4->bitset[VAR_3 >> 5] & (1U << (VAR_3 & 31))) ? 0 : 1;
}
