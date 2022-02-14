
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct socket {TYPE_1__* sk; TYPE_3__* ops; } ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; TYPE_2__ sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;
struct TYPE_6__ {int (* getname ) (struct socket*,struct sockaddr*,int ) ;} ;
struct TYPE_4__ {int sk_protocol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct socket*,struct sockaddr*,int ) ;

int FUNC_3(struct socket *VAR_2, int *VAR_3,
     uint32_t *VAR_4, uint16_t *VAR_5)
{
 int VAR_6;
 struct sockaddr_in VAR_7;

 VAR_6 = VAR_2->ops->getname(VAR_2,
    (struct sockaddr *)&VAR_7,
    0);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_7.sin_family != VAR_0)
  return -VAR_1;

 if (VAR_3)
  *VAR_3 = VAR_2->sk->sk_protocol;
 if (VAR_5)
  *VAR_5 = FUNC_1(((struct sockaddr_in *)&VAR_7)->sin_port);
 if (VAR_4)
  *VAR_4 = FUNC_0(((struct sockaddr_in *)
     &VAR_7)->sin_addr.s_addr);

 return 0;
}
