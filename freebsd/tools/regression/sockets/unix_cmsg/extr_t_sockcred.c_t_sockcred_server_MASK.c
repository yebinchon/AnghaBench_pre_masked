
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int val ;
typedef int u_int ;
struct msghdr {int dummy; } ;
struct iovec {int dummy; } ;
struct cmsghdr {int dummy; } ;
struct TYPE_5__ {int msg_num; } ;
struct TYPE_4__ {int gid_num; } ;
struct TYPE_6__ {scalar_t__ sock_type; TYPE_2__ ipc_msg; TYPE_1__ proc_cred; } ;


 struct cmsghdr* FUNC_0 (struct msghdr*) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (int,int ,int ,int*,int) ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_6 (struct msghdr*,int) ;
 scalar_t__ FUNC_7 (struct cmsghdr*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int,struct msghdr*) ;
 int FUNC_11 (struct msghdr*,struct iovec*,void*,size_t) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 () ;

__attribute__((used)) static int
FUNC_15(int VAR_3, int VAR_4)
{
 struct msghdr VAR_5;
 struct iovec VAR_6[1];
 struct cmsghdr *VAR_7;
 void *VAR_8;
 size_t VAR_9;
 u_int VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_11 = -1;
 VAR_12 = -2;

 VAR_9 = FUNC_1(FUNC_2(VAR_2.proc_cred.gid_num));
 VAR_8 = FUNC_4(VAR_9);
 if (VAR_8 == ((void*)0)) {
  FUNC_9("malloc");
  goto done;
 }

 if (VAR_3 == 1) {
  FUNC_8("setting LOCAL_CREDS");
  VAR_13 = 1;
  if (FUNC_5(VAR_4, 0, VAR_0, &VAR_13, sizeof(VAR_13)) < 0) {
   FUNC_9("setsockopt(LOCAL_CREDS)");
   goto done;
  }
 }

 if (FUNC_14() < 0)
  goto done;

 if (VAR_2.sock_type == VAR_1) {
  VAR_11 = FUNC_12(VAR_4);
  if (VAR_11 < 0)
   goto done;
 } else
  VAR_11 = VAR_4;

 if (VAR_3 == 2) {
  FUNC_8("setting LOCAL_CREDS");
  VAR_13 = 1;
  if (FUNC_5(VAR_11, 0, VAR_0, &VAR_13, sizeof(VAR_13)) < 0) {
   FUNC_9("setsockopt(LOCAL_CREDS)");
   goto done;
  }
  if (FUNC_14() < 0)
   goto done;
 }

 VAR_12 = -1;
 for (VAR_10 = 1; VAR_10 <= VAR_2.ipc_msg.msg_num; ++VAR_10) {
  FUNC_8("message #%u", VAR_10);

  FUNC_11(&VAR_5, VAR_6, VAR_8, VAR_9);
  if (FUNC_10(VAR_11, &VAR_5) < 0) {
   VAR_12 = -2;
   break;
  }

  if (VAR_10 > 1 && VAR_2.sock_type == VAR_1) {
   if (FUNC_6(&VAR_5, 0) < 0)
    break;
  } else {
   if (FUNC_6(&VAR_5, sizeof(*VAR_7)) < 0)
    break;

   VAR_7 = FUNC_0(&VAR_5);
   if (FUNC_7(VAR_7) < 0)
    break;
  }
 }
 if (VAR_10 > VAR_2.ipc_msg.msg_num)
  VAR_12 = 0;
done:
 FUNC_3(VAR_8);
 if (VAR_2.sock_type == VAR_1 && VAR_11 >= 0)
  if (FUNC_13(VAR_11) < 0)
   VAR_12 = -2;
 return (VAR_12);
}
