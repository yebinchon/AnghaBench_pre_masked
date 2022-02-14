
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {scalar_t__ data; } ;


 int FUNC_0 (struct cache_uri const*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2 (const struct cache_uri *VAR_1) {
  return (FUNC_1 (VAR_1->data + VAR_0) + FUNC_0 (VAR_1) + 3) & -4;
}
