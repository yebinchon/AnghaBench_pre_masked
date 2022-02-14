
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char u_char ;
struct state {scalar_t__ listen_sock; char* path; scalar_t__ data_file; TYPE_1__* hts; int utsname; } ;
struct sockaddr_in {int sin_len; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int sin ;
typedef scalar_t__ pid_t ;
struct TYPE_4__ {scalar_t__ hts_fd; scalar_t__ hts_pid; int hts_thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_2 (struct sockaddr_in*,int) ;
 int FUNC_3 (int,char*,...) ;
 int VAR_12 ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (char*,char,int) ;
 scalar_t__ FUNC_13 (char*,int,int ) ;
 scalar_t__ FUNC_14 (char*) ;
 char* FUNC_15 (int *,int,int,int ,int,int ) ;
 scalar_t__ FUNC_16 (char*,int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_17 (int *,int *,int (*) (TYPE_1__*),TYPE_1__*) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (int,int ) ;
 int FUNC_20 (char*,int,char*) ;
 scalar_t__ FUNC_21 (int ,int ,int ) ;
 struct state* VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_22 (int *) ;
 int FUNC_23 (char*) ;
 int FUNC_24 () ;
 scalar_t__ FUNC_25 (scalar_t__,int *,int ) ;
 int FUNC_26 (scalar_t__,char*,int) ;

int
FUNC_27(int VAR_16, char *VAR_17[])
{
 u_char VAR_18[VAR_1];
 char VAR_19[VAR_6];
 struct sockaddr_in VAR_20;
 int VAR_21, VAR_22, VAR_23;
 char *VAR_24;
 ssize_t VAR_25;
 pid_t VAR_26;


 while ((VAR_21 = FUNC_6(VAR_16, VAR_17, "t")) != -1) {
  switch (VAR_21) {
  case 't':
   VAR_15 = 1;
   break;

  default:
   FUNC_24();
  }
 }
 VAR_16 -= VAR_13;
 VAR_17 += VAR_13;

 if (VAR_16 != 1 && VAR_16 != 2)
  FUNC_24();

 VAR_25 = FUNC_19(sizeof(struct state), FUNC_7());
 VAR_24 = FUNC_15(((void*)0), VAR_25, VAR_8 | VAR_9, VAR_3, -1, 0);
 if (VAR_24 == VAR_4)
  FUNC_3(-1, "mmap");
 if (FUNC_13(VAR_24, VAR_25, VAR_2) < 0)
  FUNC_3(-1, "minherit");
 VAR_14 = (struct state *)VAR_24;

 if (FUNC_22(&VAR_14->utsname) < 0)
  FUNC_3(-1, "utsname");

 VAR_14->listen_sock = FUNC_21(VAR_7, VAR_10, 0);
 if (VAR_14->listen_sock < 0)
  FUNC_3(-1, "socket(PF_INET, SOCK_STREAM)");

 FUNC_2(&VAR_20, sizeof(VAR_20));
 VAR_20.sin_len = sizeof(VAR_20);
 VAR_20.sin_family = VAR_0;
 VAR_20.sin_port = FUNC_8(FUNC_0(VAR_17[0]));





 VAR_14->path = VAR_17[1];
 if (VAR_14->path != ((void*)0)) {
  VAR_14->data_file = FUNC_16(VAR_14->path, VAR_5);
  if (VAR_14->data_file < 0)
   FUNC_3(-1, "open: %s", VAR_14->path);
  for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++)
   VAR_14->hts[VAR_23].hts_fd = VAR_14->data_file;
 } else {
  FUNC_12(VAR_18, 'A', VAR_1 - 1);
  VAR_18[VAR_1 - 1] = '\n';
  for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++) {
   FUNC_20(VAR_19, VAR_6, "/tmp/httpd.XXXXXXXXXXX");
   VAR_14->hts[VAR_23].hts_fd = FUNC_14(VAR_19);
   if (VAR_14->hts[VAR_23].hts_fd < 0)
    FUNC_3(-1, "mkstemp");
   (void)FUNC_23(VAR_19);
   VAR_25 = FUNC_26(VAR_14->hts[VAR_23].hts_fd, VAR_18,
       VAR_1);
   if (VAR_25 < 0)
    FUNC_3(-1, "write");
   if (VAR_25 < VAR_1)
    FUNC_4(-1, "write: short");
  }
 }

 if (FUNC_1(VAR_14->listen_sock, (struct sockaddr *)&VAR_20,
     sizeof(VAR_20)) < 0)
  FUNC_3(-1, "bind");

 if (FUNC_11(VAR_14->listen_sock, -1) < 0)
  FUNC_3(-1, "listen");

 for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++) {
  if (VAR_15) {
   if (FUNC_17(&VAR_14->hts[VAR_23].hts_thread, ((void*)0),
       FUNC_9, &VAR_14->hts[VAR_23]) != 0)
    FUNC_3(-1, "pthread_create");
  } else {
   VAR_26 = FUNC_5();
   if (VAR_26 < 0) {
    VAR_22 = VAR_12;
    FUNC_10();
    VAR_12 = VAR_22;
    FUNC_3(-1, "fork");
   }
   if (VAR_26 == 0)
    FUNC_9(&VAR_14->hts[VAR_23]);
   VAR_14->hts[VAR_23].hts_pid = VAR_26;
  }
 }

 for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++) {
  if (VAR_15) {
   if (FUNC_18(VAR_14->hts[VAR_23].hts_thread, ((void*)0))
       != 0)
    FUNC_3(-1, "pthread_join");
  } else {
   VAR_26 = FUNC_25(VAR_14->hts[VAR_23].hts_pid, ((void*)0), 0);
   if (VAR_26 == VAR_14->hts[VAR_23].hts_pid)
    VAR_14->hts[VAR_23].hts_pid = 0;
  }
 }
 if (!VAR_15)
  FUNC_10();
 return (0);
}
