
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct TYPE_8__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_len; scalar_t__ sin_port; TYPE_3__ sin_addr; int sin_zero; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct sdp_sock {scalar_t__ lport; scalar_t__ laddr; TYPE_4__* id; } ;
typedef int null ;
struct TYPE_6__ {int src_addr; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;
struct TYPE_9__ {TYPE_2__ route; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct sdp_sock*) ;
 int FUNC_3 (int *,int) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_4__*,struct sockaddr*) ;
 TYPE_4__* FUNC_5 (int *,int ,struct sdp_sock*,int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct sdp_sock*) ;

__attribute__((used)) static int
FUNC_7(struct sdp_sock *VAR_8, struct sockaddr *VAR_9, struct ucred *VAR_10)
{
 struct sockaddr_in *VAR_11;
 struct sockaddr_in VAR_12;
 int VAR_13;

 FUNC_1(VAR_8);

 if (VAR_8->lport != 0 || VAR_8->laddr != VAR_4)
  return (VAR_1);

 FUNC_2(VAR_8);
 if (VAR_8->id == ((void*)0))
  VAR_8->id = FUNC_5(&VAR_6, VAR_7, VAR_8, VAR_5, VAR_3);
 if (VAR_8->id == ((void*)0)) {
  FUNC_0(VAR_8);
  return (VAR_2);
 }
 if (VAR_9 == ((void*)0)) {
  VAR_12.sin_family = VAR_0;
  VAR_12.sin_len = sizeof(VAR_12);
  VAR_12.sin_addr.s_addr = VAR_4;
  VAR_12.sin_port = 0;
  FUNC_3(&VAR_12.sin_zero, sizeof(VAR_12.sin_zero));
  VAR_9 = (struct sockaddr *)&VAR_12;
 }
 VAR_13 = -FUNC_4(VAR_8->id, VAR_9);
 FUNC_0(VAR_8);
 if (VAR_13 == 0) {
  VAR_11 = (struct sockaddr_in *)&VAR_8->id->route.addr.src_addr;
  VAR_8->laddr = VAR_11->sin_addr.s_addr;
  VAR_8->lport = VAR_11->sin_port;
 } else
  FUNC_6(VAR_8);
 return (VAR_13);
}
