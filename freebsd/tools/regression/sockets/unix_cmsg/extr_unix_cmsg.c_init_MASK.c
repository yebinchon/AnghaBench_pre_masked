
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
typedef int gid_t ;
struct TYPE_9__ {int sun_len; int sun_family; int sun_path; } ;
struct TYPE_7__ {int gid_num; int * gid_arr; int egid; int gid; int euid; int uid; } ;
struct TYPE_6__ {int buf_size; char* buf_send; int * buf_recv; } ;
struct TYPE_8__ {char* proc_name; TYPE_4__ serv_addr_sun; TYPE_2__ proc_cred; TYPE_1__ ipc_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int *) ;
 int FUNC_5 () ;
 void* FUNC_6 (int) ;
 int FUNC_7 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_8 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int,char*,char*,char*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 char* VAR_4 ;

__attribute__((used)) static int
FUNC_13(void)
{
 struct sigaction VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_3.proc_name = "SERVER";

 VAR_5.sa_handler = VAR_2;
 VAR_5.sa_flags = 0;
 FUNC_9(&VAR_5.sa_mask);
 if (FUNC_8(VAR_1, &VAR_5, (struct sigaction *)((void*)0)) < 0) {
  FUNC_11("init: sigaction");
  return (-1);
 }

 if (VAR_3.ipc_msg.buf_size == 0)
  VAR_3.ipc_msg.buf_send = VAR_3.ipc_msg.buf_recv = ((void*)0);
 else {
  VAR_3.ipc_msg.buf_send = FUNC_6(VAR_3.ipc_msg.buf_size);
  VAR_3.ipc_msg.buf_recv = FUNC_6(VAR_3.ipc_msg.buf_size);
  if (VAR_3.ipc_msg.buf_send == ((void*)0) || VAR_3.ipc_msg.buf_recv == ((void*)0)) {
   FUNC_11("init: malloc");
   return (-1);
  }
  for (VAR_6 = 0; VAR_6 < VAR_3.ipc_msg.buf_size; ++VAR_6)
   VAR_3.ipc_msg.buf_send[VAR_6] = (char)VAR_6;
 }

 VAR_3.proc_cred.uid = FUNC_5();
 VAR_3.proc_cred.euid = FUNC_2();
 VAR_3.proc_cred.gid = FUNC_3();
 VAR_3.proc_cred.egid = FUNC_1();
 VAR_3.proc_cred.gid_num = FUNC_4(0, (gid_t *)((void*)0));
 if (VAR_3.proc_cred.gid_num < 0) {
  FUNC_11("init: getgroups");
  return (-1);
 }
 VAR_3.proc_cred.gid_arr = FUNC_6(VAR_3.proc_cred.gid_num *
     sizeof(*VAR_3.proc_cred.gid_arr));
 if (VAR_3.proc_cred.gid_arr == ((void*)0)) {
  FUNC_11("init: malloc");
  return (-1);
 }
 if (FUNC_4(VAR_3.proc_cred.gid_num, VAR_3.proc_cred.gid_arr) < 0) {
  FUNC_11("init: getgroups");
  return (-1);
 }

 FUNC_7(&VAR_3.serv_addr_sun, 0, sizeof(VAR_3.serv_addr_sun));
 VAR_7 = FUNC_10(VAR_3.serv_addr_sun.sun_path, sizeof(VAR_3.serv_addr_sun.sun_path),
     "%s/%s", VAR_4, VAR_3.proc_name);
 if (VAR_7 < 0) {
  FUNC_11("init: snprintf");
  return (-1);
 }
 if ((size_t)VAR_7 >= sizeof(VAR_3.serv_addr_sun.sun_path)) {
  FUNC_12("init: not enough space for socket pathname");
  return (-1);
 }
 VAR_3.serv_addr_sun.sun_family = VAR_0;
 VAR_3.serv_addr_sun.sun_len = FUNC_0(&VAR_3.serv_addr_sun);

 return (0);
}
