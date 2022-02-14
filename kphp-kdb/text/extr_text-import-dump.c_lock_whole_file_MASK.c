
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_type; scalar_t__ l_len; scalar_t__ l_start; int l_whence; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,struct flock*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;

int FUNC_2 (int VAR_3, int VAR_4) {
  static struct flock VAR_5;
  VAR_5.l_type = VAR_4;
  VAR_5.l_whence = VAR_1;
  VAR_5.l_start = 0;
  VAR_5.l_len = 0;
  if (FUNC_0 (VAR_3, VAR_0, &VAR_5) < 0) {
    FUNC_1 (VAR_2, "cannot lock file %d: %m\n", VAR_3);
    return -1;
  }
  return 1;
}
