
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; int revents; } ;
struct child_process {char const** member_0; int out; int err; int git_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct child_process*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (struct pollfd*,int,int) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct child_process*) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (int) ;
 int VAR_4 ;
 int FUNC_12 (int ) ;

int FUNC_13(int VAR_5, const char **VAR_6, const char *VAR_7)
{
 struct child_process VAR_8 = { VAR_6 };

 if (VAR_5 == 2 && !FUNC_10(VAR_6[1], "-h"))
  FUNC_12(VAR_4);
 VAR_6[0] = "upload-archive--writer";
 VAR_8.out = VAR_8.err = -1;
 VAR_8.git_cmd = 1;
 if (FUNC_9(&VAR_8)) {
  int VAR_9 = VAR_3;
  FUNC_5(1, "NACK unable to spawn subprocess\n");
  FUNC_0("upload-archive: %s", FUNC_11(VAR_9));
 }

 FUNC_5(1, "ACK\n");
 FUNC_4(1);

 while (1) {
  struct pollfd VAR_10[2];

  VAR_10[0].fd = VAR_8.out;
  VAR_10[0].events = VAR_1;
  VAR_10[1].fd = VAR_8.err;
  VAR_10[1].events = VAR_1;
  if (FUNC_6(VAR_10, 2, -1) < 0) {
   if (VAR_3 != VAR_0) {
    FUNC_2("poll failed resuming");
    FUNC_8(1);
   }
   continue;
  }
  if (VAR_10[1].revents & VAR_1)

   if (FUNC_7(VAR_10[1].fd, 2))
    continue;
  if (VAR_10[0].revents & VAR_1)

   if (FUNC_7(VAR_10[0].fd, 1))
    continue;

  if (FUNC_3(&VAR_8))
   FUNC_1("%s", VAR_2);
  FUNC_4(1);
  break;
 }
 return 0;
}
