
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*,void const*,void*) ;

void *FUNC_1 (const void *VAR_0, const void *VAR_1, size_t VAR_2, size_t VAR_3, int (*VAR_4) (const void *, const void *, void *), void *VAR_5)
{
  for (size_t VAR_6 = 0, VAR_7 = VAR_2; VAR_7; VAR_7 >>= 1)
  {
    const size_t VAR_8 = VAR_7 >> 1;

    const size_t VAR_9 = VAR_6 + VAR_8;

    const char *VAR_10 = (const char *) VAR_1 + (VAR_9 * VAR_3);

    const int VAR_11 = (*VAR_4) (VAR_0, VAR_10, VAR_5);

    if (VAR_11 > 0)
    {
      VAR_6 += VAR_8 + 1;

      VAR_7--;
    }

    if (VAR_11 == 0) return ((void *) VAR_10);
  }

  return (((void*)0));
}
