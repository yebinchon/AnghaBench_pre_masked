
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct stat {scalar_t__ st_size; int st_mtime; } ;
struct TYPE_3__ {int path_original; int fd; scalar_t__ fd_is_open; } ;
typedef TYPE_1__ git_filebuf ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ,struct stat*) ;

int FUNC_3(time_t *VAR_1, size_t *VAR_2, git_filebuf *VAR_3)
{
 int VAR_4;
 struct stat VAR_5;

 if (VAR_3->fd_is_open)
  VAR_4 = FUNC_1(VAR_3->fd, &VAR_5);
 else
  VAR_4 = FUNC_2(VAR_3->path_original, &VAR_5);

 if (VAR_4 < 0) {
  FUNC_0(VAR_0, "could not get stat info for '%s'",
   VAR_3->path_original);
  return VAR_4;
 }

 if (VAR_1)
  *VAR_1 = VAR_5.st_mtime;
 if (VAR_2)
  *VAR_2 = (size_t)VAR_5.st_size;

 return 0;
}
