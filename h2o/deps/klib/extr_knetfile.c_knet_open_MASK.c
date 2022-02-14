
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int fd; int ctrl_fd; int type; } ;
typedef TYPE_1__ knetFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (char const*,char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (char const*,char const*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char const*,int) ;
 int FUNC_9 (char*) ;
 int VAR_3 ;
 char const* FUNC_10 (char const*,char*) ;

knetFile *FUNC_11(const char *VAR_4, const char *VAR_5)
{
 knetFile *VAR_6 = 0;
 if (VAR_5[0] != 'r') {
  FUNC_1(VAR_3, "[kftp_open] only mode \"r\" is supported.\n");
  return 0;
 }
 if (FUNC_10(VAR_4, "ftp://") == VAR_4) {
  VAR_6 = FUNC_4(VAR_4, VAR_5);
  if (VAR_6 == 0) return 0;
  if (FUNC_2(VAR_6) == -1) {
   FUNC_7(VAR_6);
   return 0;
  }
  FUNC_3(VAR_6);
 } else if (FUNC_10(VAR_4, "http://") == VAR_4) {
  VAR_6 = FUNC_6(VAR_4, VAR_5);
  if (VAR_6 == 0) return 0;
  FUNC_5(VAR_6);
 } else {






  int VAR_7 = FUNC_8(VAR_4, VAR_2);

  if (VAR_7 == -1) {
   FUNC_9("open");
   return 0;
  }
  VAR_6 = (knetFile*)FUNC_0(1, sizeof(knetFile));
  VAR_6->type = VAR_0;
  VAR_6->fd = VAR_7;
  VAR_6->ctrl_fd = -1;
 }
 if (VAR_6 && VAR_6->fd == -1) {
  FUNC_7(VAR_6);
  return 0;
 }
 return VAR_6;
}
