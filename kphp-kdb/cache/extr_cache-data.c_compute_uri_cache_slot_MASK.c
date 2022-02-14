
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

inline unsigned FUNC_0 (const char *const VAR_1) {
  unsigned VAR_2 = 0;
  const unsigned char *VAR_3;
  for (VAR_3 = (const unsigned char *) VAR_1; *VAR_3; VAR_3++) {
    VAR_2 = VAR_2 * 239U + (*VAR_3);
  }
  return VAR_2 & VAR_0;
}
