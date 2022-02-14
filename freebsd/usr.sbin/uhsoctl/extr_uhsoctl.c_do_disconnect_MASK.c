
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int s_addr; } ;
struct ctx {int flags; int resolv_path; int ifnam; TYPE_2__ ip; int fd; int pdp_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ctx*,int *,int *,int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct sockaddr*,struct sockaddr*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (struct ctx*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct ctx *VAR_2)
{
 struct sockaddr_in VAR_3, VAR_4;


 FUNC_0(VAR_2, ((void*)0), ((void*)0), ((void*)0), "AT_OWANCALL=%d,0,0\r\n",
     VAR_2->pdp_ctx);
 FUNC_1(VAR_2->fd);


 if (VAR_2->flags & VAR_1) {
  VAR_3.sin_len = VAR_4.sin_len = sizeof(struct sockaddr_in);
  FUNC_5(&VAR_4.sin_addr.s_addr, 0xff,
      sizeof(VAR_4.sin_addr.s_addr));
  VAR_3.sin_family = VAR_4.sin_family = VAR_0;
  FUNC_4(&VAR_3.sin_addr.s_addr, &VAR_2->ip.s_addr,
      sizeof(VAR_3.sin_addr.s_addr));
  FUNC_3(VAR_2->ifnam, (struct sockaddr *)&VAR_3,
      (struct sockaddr *)&VAR_4);

  FUNC_2(VAR_2->ifnam);
  VAR_2->flags &= ~VAR_1;
 }


 FUNC_6(VAR_2, VAR_2->resolv_path, 0);
}
