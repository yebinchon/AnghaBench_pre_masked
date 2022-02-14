
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_blocks; scalar_t__ st_blksize; scalar_t__ STAT_NANOSECONDS_ACCESS_TIME; scalar_t__ st_atime; scalar_t__ st_rdev; scalar_t__ st_gid; scalar_t__ st_uid; scalar_t__ st_nlink; scalar_t__ st_mode; } ;
typedef int HCFILE ;


 scalar_t__ FUNC_0 (int ,struct stat*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 scalar_t__ FUNC_4 (struct stat*,struct stat*,int) ;

bool FUNC_5 (char *VAR_0, char *VAR_1)
{
  if ((VAR_0 != ((void*)0)) && (VAR_1 != ((void*)0)))
  {
    struct stat VAR_2;
    struct stat VAR_3;

    int VAR_4 = 0;

    HCFILE VAR_5;

    if (FUNC_3 (&VAR_5, VAR_0, "r") == 1)
    {
      if (FUNC_0 (FUNC_2 (&VAR_5), &VAR_2))
      {
        FUNC_1 (&VAR_5);

        return 0;
      }

      FUNC_1 (&VAR_5);

      VAR_4++;
    }

    if (FUNC_3 (&VAR_5, VAR_1, "r") == 1)
    {
      if (FUNC_0 (FUNC_2 (&VAR_5), &VAR_3))
      {
        FUNC_1 (&VAR_5);

        return 0;
      }

      FUNC_1 (&VAR_5);

      VAR_4++;
    }

    if (VAR_4 == 2)
    {
      VAR_2 = 0;
      VAR_2 = 0;
      VAR_2 = 0;
      VAR_2 = 0;
      VAR_2 = 0;
      VAR_2 = 0;
      VAR_3 = 0;
      VAR_3 = 0;
      VAR_3 = 0;
      VAR_3 = 0;
      VAR_3 = 0;
      VAR_3 = 0;
      if (FUNC_4 (&VAR_2, &VAR_3, sizeof (struct stat)) == 0)
      {
        return 1;
      }
    }
  }

  return 0;
}
