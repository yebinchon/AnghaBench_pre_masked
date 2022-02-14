
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int mode_t ;
struct TYPE_3__ {scalar_t__ fd; int fd_is_open; int path_lock; int path_original; int digest; scalar_t__ compute_digest; } ;
typedef TYPE_1__ git_filebuf ;
typedef scalar_t__ git_file ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,char*,int) ;
 int FUNC_9 (int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(git_filebuf *VAR_6, int VAR_7, mode_t VAR_8)
{
 if (FUNC_5(VAR_6->path_lock) == 1) {
  FUNC_0();
  FUNC_1(VAR_2,
   "failed to lock file '%s' for writing", VAR_6->path_lock);
  return VAR_1;
 }


 if (VAR_7 & VAR_4) {

  VAR_6->fd = FUNC_3(VAR_6->path_lock, 0777, VAR_8);
 } else {
  VAR_6->fd = FUNC_2(VAR_6->path_lock, VAR_8);
 }

 if (VAR_6->fd < 0)
  return VAR_6->fd;

 VAR_6->fd_is_open = 1;

 if ((VAR_7 & VAR_3) && FUNC_5(VAR_6->path_original) == 1) {
  git_file VAR_9;
  char VAR_10[VAR_0];
  ssize_t VAR_11;
  int VAR_12 = 0;

  VAR_9 = FUNC_7(VAR_6->path_original, VAR_5);
  if (VAR_9 < 0) {
   FUNC_1(VAR_2,
    "failed to open file '%s' for reading",
    VAR_6->path_original);
   return -1;
  }

  while ((VAR_11 = FUNC_8(VAR_9, VAR_10, sizeof(VAR_10))) > 0) {
   if ((VAR_12 = FUNC_9(VAR_6->fd, VAR_10, VAR_11)) < 0)
    break;
   if (VAR_6->compute_digest)
    FUNC_4(&VAR_6->digest, VAR_10, VAR_11);
  }

  FUNC_6(VAR_9);

  if (VAR_11 < 0) {
   FUNC_1(VAR_2, "failed to read file '%s'", VAR_6->path_original);
   return -1;
  } else if (VAR_12 < 0) {
   FUNC_1(VAR_2, "failed to write file '%s'", VAR_6->path_lock);
   return -1;
  }
 }

 return 0;
}
