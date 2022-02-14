
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr_in*,int) ;

__attribute__((used)) static void
FUNC_1(struct sockaddr_in *VAR_2)
{

 FUNC_0(VAR_2, sizeof(*VAR_2));
 VAR_2->sin_len = sizeof(*VAR_2);
 VAR_2->sin_family = VAR_0;
 VAR_2->sin_addr.s_addr = VAR_1;
 VAR_2->sin_port = 0;
}
