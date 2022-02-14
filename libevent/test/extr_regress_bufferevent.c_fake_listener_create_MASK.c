
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_family; TYPE_1__ sin_addr; scalar_t__ sin_port; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ evutil_socket_t ;
typedef int ev_socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static evutil_socket_t
FUNC_6(struct sockaddr_in *VAR_2)
{
 struct sockaddr *VAR_3 = (struct sockaddr *)VAR_2;
 evutil_socket_t VAR_4 = -1;
 ev_socklen_t VAR_5 = sizeof(*VAR_2);

 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->sin_port = 0;
 VAR_2->sin_addr.s_addr = FUNC_2(0x7f000001L);
 VAR_2->sin_family = VAR_0;



 VAR_4 = FUNC_4(VAR_2->sin_family, VAR_1, 0);
 FUNC_5(VAR_4 >= 0);
 FUNC_5(FUNC_0(VAR_4, VAR_3, VAR_5) == 0);
 FUNC_5(FUNC_1(VAR_4, VAR_3, &VAR_5) == 0);

 return VAR_4;

end:
 return -1;
}
