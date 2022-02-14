
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int size; scalar_t__ data; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;

long long FUNC_1 (const struct cache_uri *VAR_1) {
  if (VAR_1->size == -1) {
    return -1LL;
  }
  if (VAR_1->size & 0x80000000) {
    return VAR_1->size & 0x7fffffff;
  }
  long long VAR_2 = VAR_1->size & 0xffffff;
  const int VAR_3 = VAR_1->size >> 24;
  int VAR_4, VAR_5 = 24;
  unsigned char *VAR_6 = (unsigned char *) (VAR_1->data + (VAR_0 + FUNC_0 (VAR_1->data + VAR_0) + 1));
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    const long long VAR_7 = *VAR_6++;
    VAR_2 |= VAR_7 << VAR_5;
    VAR_5 += 8;
  }
  return VAR_2;
}
