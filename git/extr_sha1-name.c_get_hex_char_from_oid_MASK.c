
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int* hash; } ;



__attribute__((used)) static inline char FUNC_0(const struct object_id *VAR_0,
      unsigned int VAR_1)
{
 static const char VAR_2[] = "0123456789abcdef";

 if ((VAR_1 & 1) == 0)
  return VAR_2[VAR_0->hash[VAR_1 >> 1] >> 4];
 else
  return VAR_2[VAR_0->hash[VAR_1 >> 1] & 0xf];
}
