
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {scalar_t__ msg_controllen; char* msg_control; } ;
struct cmsghdr {int cmsg_level; int cmsg_type; scalar_t__ cmsg_len; } ;
typedef scalar_t__ socklen_t ;
typedef int pid_t ;
typedef int FILE ;


 struct cmsghdr* FUNC_0 (struct msghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*,struct cmsghdr*) ;

 char* FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,uintptr_t,char*,scalar_t__) ;
 int FUNC_7 (int *,struct cmsghdr*) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int *,uintptr_t) ;
 int FUNC_10 (int *,int,struct cmsghdr*) ;
 char* FUNC_11 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_12(FILE *VAR_1, pid_t VAR_2, bool VAR_3, struct msghdr *VAR_4)
{
 struct cmsghdr *VAR_5;
 char *VAR_6;
 const char *VAR_7;
 socklen_t VAR_8;
 int VAR_9, VAR_10;
 bool VAR_11;

 VAR_8 = VAR_4->msg_controllen;
 if (VAR_8 == 0) {
  FUNC_4("{}", VAR_1);
  return;
 }
 VAR_6 = FUNC_2(1, VAR_8);
 if (FUNC_6(VAR_2, (uintptr_t)VAR_4->msg_control, VAR_6, VAR_8) == -1) {
  FUNC_9(VAR_1, (uintptr_t)VAR_4->msg_control);
  FUNC_5(VAR_6);
  return;
 }
 VAR_4->msg_control = VAR_6;
 VAR_11 = 1;
 FUNC_4("{", VAR_1);
 for (VAR_5 = FUNC_0(VAR_4);
    VAR_5 != ((void*)0);
    VAR_5 = FUNC_1(VAR_4, VAR_5)) {
  VAR_9 = VAR_5->cmsg_level;
  VAR_10 = VAR_5->cmsg_type;
  VAR_8 = VAR_5->cmsg_len;
  FUNC_3(VAR_1, "%s{level=", VAR_11 ? "" : ",");
  FUNC_8(VAR_0, VAR_1, VAR_9);
  FUNC_4(",type=", VAR_1);
  VAR_7 = FUNC_11(VAR_9, VAR_10);
  if (VAR_7) {
   FUNC_4(VAR_7, VAR_1);
  } else {
   FUNC_3(VAR_1, "%d", VAR_10);
  }
  FUNC_4(",data=", VAR_1);
  switch (VAR_9) {
  case 128:
   FUNC_10(VAR_1, VAR_3, VAR_5);
   break;
  default:
   FUNC_7(VAR_1, VAR_5);
   break;
  }
  FUNC_4("}", VAR_1);
  VAR_11 = 0;
 }
 FUNC_4("}", VAR_1);
 FUNC_5(VAR_6);
}
