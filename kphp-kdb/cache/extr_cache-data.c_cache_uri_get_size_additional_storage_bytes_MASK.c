
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int size; } ;



__attribute__((used)) static int FUNC_0 (const struct cache_uri *VAR_0) {
  if (VAR_0->size & 0x80000000) {
    return 0;
  }
  return (VAR_0->size >> 24);
}
