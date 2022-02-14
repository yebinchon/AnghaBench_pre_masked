
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mtime; } ;


 int FUNC_0 (char const* const,struct stat*) ;

__attribute__((used)) static int FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const char* const *VAR_2 = (const char* const *) VAR_0;
  const char* const *VAR_3 = (const char* const *) VAR_1;

  struct stat VAR_4;
  struct stat VAR_5;

  const int VAR_6 = FUNC_0 (*VAR_2, &VAR_4);
  const int VAR_7 = FUNC_0 (*VAR_3, &VAR_5);

  if (VAR_6 < VAR_7) return 1;
  if (VAR_6 > VAR_7) return -1;

  if (VAR_4 < VAR_5) return 1;
  if (VAR_4 > VAR_5) return -1;

  return 0;
}
