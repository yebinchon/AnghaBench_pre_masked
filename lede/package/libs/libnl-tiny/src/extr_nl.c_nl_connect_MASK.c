
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_2__ {scalar_t__ nl_family; } ;
struct nl_sock {int s_fd; int s_flags; int s_proto; TYPE_1__ s_local; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (struct nl_sock*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ,int) ;

int FUNC_6(struct nl_sock *VAR_6, int VAR_7)
{
 int VAR_8;
 socklen_t VAR_9;

 VAR_6->s_fd = FUNC_5(VAR_0, VAR_4, VAR_7);
 if (VAR_6->s_fd < 0) {
  VAR_8 = -FUNC_4(VAR_5);
  goto errout;
 }

 if (!(VAR_6->s_flags & VAR_3)) {
  VAR_8 = FUNC_3(VAR_6, 0, 0);
  if (VAR_8 < 0)
   goto errout;
 }

 VAR_8 = FUNC_0(VAR_6->s_fd, (struct sockaddr*) &VAR_6->s_local,
     sizeof(VAR_6->s_local));
 if (VAR_8 < 0) {
  VAR_8 = -FUNC_4(VAR_5);
  goto errout;
 }

 VAR_9 = sizeof(VAR_6->s_local);
 VAR_8 = FUNC_2(VAR_6->s_fd, (struct sockaddr *) &VAR_6->s_local,
     &VAR_9);
 if (VAR_8 < 0) {
  VAR_8 = -FUNC_4(VAR_5);
  goto errout;
 }

 if (VAR_9 != sizeof(VAR_6->s_local)) {
  VAR_8 = -VAR_2;
  goto errout;
 }

 if (VAR_6->s_local.nl_family != VAR_0) {
  VAR_8 = -VAR_1;
  goto errout;
 }

 VAR_6->s_proto = VAR_7;

 return 0;
errout:
 FUNC_1(VAR_6->s_fd);
 VAR_6->s_fd = -1;

 return VAR_8;
}
