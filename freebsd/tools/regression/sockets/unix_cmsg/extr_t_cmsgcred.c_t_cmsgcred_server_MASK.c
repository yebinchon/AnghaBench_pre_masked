
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct msghdr {int dummy; } ;
struct iovec {int dummy; } ;
struct cmsghdr {int dummy; } ;
struct cmsgcred {int dummy; } ;
struct TYPE_3__ {int msg_num; } ;
struct TYPE_4__ {scalar_t__ sock_type; TYPE_1__ ipc_msg; } ;


 struct cmsghdr* FUNC_0 (struct msghdr*) ;
 size_t FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (size_t) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_4 (struct msghdr*,int) ;
 scalar_t__ FUNC_5 (struct cmsghdr*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int,struct msghdr*) ;
 int FUNC_9 (struct msghdr*,struct iovec*,void*,size_t) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(int VAR_2)
{
 struct msghdr VAR_3;
 struct iovec VAR_4[1];
 struct cmsghdr *VAR_5;
 void *VAR_6;
 size_t VAR_7;
 u_int VAR_8;
 int VAR_9, VAR_10;

 if (FUNC_12() < 0)
  return (-2);

 VAR_9 = -1;
 VAR_10 = -2;

 VAR_7 = FUNC_1(sizeof(struct cmsgcred));
 VAR_6 = FUNC_3(VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_7("malloc");
  goto done;
 }

 if (VAR_1.sock_type == VAR_0) {
  VAR_9 = FUNC_10(VAR_2);
  if (VAR_9 < 0)
   goto done;
 } else
  VAR_9 = VAR_2;

 VAR_10 = -1;
 for (VAR_8 = 1; VAR_8 <= VAR_1.ipc_msg.msg_num; ++VAR_8) {
  FUNC_6("message #%u", VAR_8);

  FUNC_9(&VAR_3, VAR_4, VAR_6, VAR_7);
  if (FUNC_8(VAR_9, &VAR_3) < 0) {
   VAR_10 = -2;
   break;
  }

  if (FUNC_4(&VAR_3, sizeof(*VAR_5)) < 0)
   break;

  VAR_5 = FUNC_0(&VAR_3);
  if (FUNC_5(VAR_5) < 0)
   break;
 }
 if (VAR_8 > VAR_1.ipc_msg.msg_num)
  VAR_10 = 0;
done:
 FUNC_2(VAR_6);
 if (VAR_1.sock_type == VAR_0 && VAR_9 >= 0)
  if (FUNC_11(VAR_9) < 0)
   VAR_10 = -2;
 return (VAR_10);
}
