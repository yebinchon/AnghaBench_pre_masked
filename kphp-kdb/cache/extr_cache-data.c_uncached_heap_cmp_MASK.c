
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {scalar_t__ data; } ;


 float FUNC_0 (struct cache_uri const*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2 (const void *VAR_1, const void *VAR_2) {
  const struct cache_uri *VAR_3 = (const struct cache_uri *) VAR_1, *VAR_4 = (const struct cache_uri *) VAR_2;
  const float VAR_5 = FUNC_0 (VAR_3), VAR_6 = FUNC_0 (VAR_4);
  if (VAR_5 > VAR_6) {
    return -1;
  } else if (VAR_5 < VAR_6) {
    return 1;
  } else {
    return FUNC_1 (VAR_3->data + VAR_0, VAR_4->data + VAR_0);
  }
}
