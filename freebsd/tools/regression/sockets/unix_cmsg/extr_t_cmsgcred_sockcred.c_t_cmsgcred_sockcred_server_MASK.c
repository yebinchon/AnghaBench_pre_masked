
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
struct cmsgcred {int dummy; } ;
struct TYPE_5__ {int msg_num; } ;
struct TYPE_4__ {int gid_num; } ;
struct TYPE_6__ {scalar_t__ sock_type; TYPE_2__ ipc_msg; TYPE_1__ proc_cred; } ;


 struct cmsghdr* FUNC_0 (struct msghdr*) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (int,int ,int ,int*,int) ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_6 (struct msghdr*,int) ;
 scalar_t__ FUNC_7 (struct cmsghdr*) ;
 scalar_t__ FUNC_8 (struct cmsghdr*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int,struct msghdr*) ;
 int FUNC_12 (struct msghdr*,struct iovec*,void*,size_t) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 () ;

__attribute__((used)) static int
FUNC_16(int VAR_4)
{
 struct msghdr VAR_5;
 struct iovec VAR_6[1];
 struct cmsghdr *VAR_7;
 void *VAR_8, *VAR_9, *VAR_10;
 size_t VAR_11, VAR_12, VAR_13;
 u_int VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_15 = -1;
 VAR_16 = -2;

 VAR_12 = FUNC_1(FUNC_2(VAR_3.proc_cred.gid_num));
 VAR_13 = FUNC_1(sizeof(struct cmsgcred));
 VAR_9 = FUNC_4(VAR_12);
 VAR_10 = FUNC_4(VAR_13);
 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0)) {
  FUNC_10("malloc");
  goto done;
 }

 FUNC_9("setting LOCAL_CREDS");
 VAR_17 = 1;
 if (FUNC_5(VAR_4, 0, VAR_0, &VAR_17, sizeof(VAR_17)) < 0) {
  FUNC_10("setsockopt(LOCAL_CREDS)");
  goto done;
 }

 if (FUNC_15() < 0)
  goto done;

 if (VAR_3.sock_type == VAR_2) {
  VAR_15 = FUNC_13(VAR_4);
  if (VAR_15 < 0)
   goto done;
 } else
  VAR_15 = VAR_4;

 VAR_8 = VAR_9;
 VAR_11 = VAR_12;
 VAR_16 = -1;
 for (VAR_14 = 1; VAR_14 <= VAR_3.ipc_msg.msg_num; ++VAR_14) {
  FUNC_9("message #%u", VAR_14);

  FUNC_12(&VAR_5, VAR_6, VAR_8, VAR_11);
  if (FUNC_11(VAR_15, &VAR_5) < 0) {
   VAR_16 = -2;
   break;
  }

  if (FUNC_6(&VAR_5, sizeof(*VAR_7)) < 0)
   break;

  VAR_7 = FUNC_0(&VAR_5);
  if (VAR_14 == 1 || VAR_3.sock_type == VAR_1) {
   if (FUNC_8(VAR_7) < 0)
    break;
  } else {
   if (FUNC_7(VAR_7) < 0)
    break;
  }

  VAR_8 = VAR_10;
  VAR_11 = VAR_13;
 }
 if (VAR_14 > VAR_3.ipc_msg.msg_num)
  VAR_16 = 0;
done:
 FUNC_3(VAR_9);
 FUNC_3(VAR_10);
 if (VAR_3.sock_type == VAR_2 && VAR_15 >= 0)
  if (FUNC_14(VAR_15) < 0)
   VAR_16 = -2;
 return (VAR_16);
}
