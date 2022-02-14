
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(
 const char *VAR_0, size_t VAR_1, int VAR_2,
 const char *VAR_3, size_t VAR_4, int VAR_5,
 int (*VAR_6)(const char *, const char *, size_t))
{
 unsigned char VAR_7, VAR_8;
 size_t VAR_9 = VAR_1 < VAR_4 ? VAR_1 : VAR_4;
 int VAR_10;

 VAR_10 = VAR_6(VAR_0, VAR_3, VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_7 = VAR_0[VAR_9];
 VAR_8 = VAR_3[VAR_9];

 if (VAR_7 == '\0' && VAR_2)
  VAR_7 = '/';

 if (VAR_8 == '\0' && VAR_5)
  VAR_8 = '/';

 return (VAR_7 < VAR_8) ? -1 : (VAR_7 > VAR_8) ? 1 : 0;
}
