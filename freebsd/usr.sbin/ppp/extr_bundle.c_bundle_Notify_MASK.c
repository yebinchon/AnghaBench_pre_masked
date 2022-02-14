
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct bundle {TYPE_1__ notify; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,char*,int) ;

void
FUNC_4(struct bundle *VAR_5, char VAR_6)
{
  if (VAR_5->notify.fd != -1) {
    int VAR_7;

    VAR_7 = FUNC_3(VAR_5->notify.fd, &VAR_6, 1);
    if (VAR_6 != VAR_2 && VAR_6 != VAR_1) {
      if (VAR_7 == 1)
        FUNC_2(VAR_3, "Parent notified of %s\n",
                   VAR_6 == VAR_0 ? "success" : "failure");
      else
        FUNC_2(VAR_4, "Failed to notify parent of success\n");
      FUNC_0(VAR_5->notify.fd);
      VAR_5->notify.fd = -1;
    } else if (VAR_7 == 1)
      FUNC_2(VAR_3, "Parent notified of %s\n", FUNC_1(VAR_6));
    else
      FUNC_2(VAR_4, "Failed to notify parent of %s\n", FUNC_1(VAR_6));
  }
}
