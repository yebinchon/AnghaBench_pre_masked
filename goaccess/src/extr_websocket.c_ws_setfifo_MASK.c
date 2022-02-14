
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 int FUNC_5 (int ) ;

int
FUNC_6 (const char *VAR_8)
{
  struct stat VAR_9;
  const char *VAR_10 = VAR_8;

  if (FUNC_2 (VAR_10, VAR_0) == 0)
    return 0;

  if (FUNC_3 (VAR_10, VAR_3 | VAR_6 | VAR_1 | VAR_4 | VAR_2 | VAR_5) < 0)
    FUNC_0 ("Unable to set fifo: %s.", FUNC_5 (VAR_7));
  if (FUNC_4 (VAR_10, &VAR_9) < 0)
    FUNC_0 ("Unable to stat fifo: %s.", FUNC_5 (VAR_7));
  if (!FUNC_1 (VAR_9.st_mode))
    FUNC_0 ("pipe is not a fifo: %s.", FUNC_5 (VAR_7));

  return 0;
}
