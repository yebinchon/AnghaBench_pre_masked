
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct our_mmsghdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,struct our_mmsghdr*,unsigned int,unsigned int) ;
 scalar_t__ VAR_5 ;

int FUNC_2 (int VAR_6, struct our_mmsghdr *VAR_7, unsigned int VAR_8,
      unsigned int VAR_9) {
  if (VAR_3 > 0) {
    return FUNC_1 (VAR_1, VAR_6, VAR_7, VAR_8, VAR_9);
  } else if (VAR_3 < 0) {
    VAR_2 = VAR_0;
    return -1;
  }
  int VAR_10 = FUNC_1 (VAR_1, VAR_6, VAR_7, VAR_8, VAR_9);
  if (VAR_10 < 0 && VAR_2 == VAR_0) {
    if (VAR_5 > 0) {
      FUNC_0 (VAR_4, "warning: sendmmsg() not supported, falling back to sendmsg()\n");
      VAR_2 = VAR_0;
    }
    VAR_3 = -1;
  } else {
    VAR_3 = 1;
  }
  return VAR_10;
}
