
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int off_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;
 int FUNC_2 (int ) ;

off_t
FUNC_3 (const char *VAR_1)
{
  struct stat VAR_2;

  if (FUNC_1 (VAR_1, &VAR_2) == 0)
    return VAR_2.st_size;

  FUNC_0 (("Can't determine size of %s: %s\n", VAR_1, FUNC_2 (VAR_0)));

  return -1;
}
