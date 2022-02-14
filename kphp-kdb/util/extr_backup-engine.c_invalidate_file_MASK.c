
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int fd; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct file_info*) ;

__attribute__((used)) static int FUNC_2 (struct file_info *VAR_1) {
  FUNC_1 (VAR_1);
  if (VAR_1->fd >= 0) {
    FUNC_0 (VAR_1->fd);
    VAR_1->fd = -1;
  }
  VAR_1->flags |= VAR_0;
  return -1;
}
