
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;
struct TYPE_8__ {scalar_t__ ipv6mr_interface; int ipv6mr_multiaddr; } ;
struct TYPE_7__ {int integer; int name; } ;
struct TYPE_6__ {int name; int * string; } ;
struct TYPE_5__ {scalar_t__* string; scalar_t__ integer; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct sockaddr*,int,int ) ;
 TYPE_4__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int *,int *,int) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

void FUNC_5(void)
{
 struct sockaddr_in6 VAR_6;

 if(!*VAR_4->string || !FUNC_2(VAR_4->string, (struct sockaddr *) &VAR_6, sizeof(VAR_6), VAR_0))
 {
  FUNC_0("WARNING: NET_JoinMulticast6: Incorrect multicast address given, "
      "please set cvar %s to a sane value.\n", VAR_4->name);

  FUNC_1(VAR_3->name, VAR_3->integer | VAR_1);

  return;
 }

 FUNC_4(&VAR_2.ipv6mr_multiaddr, &VAR_6.sin6_addr, sizeof(VAR_2.ipv6mr_multiaddr));

 if(*VAR_5->string)
 {



  VAR_2.ipv6mr_interface = FUNC_3(VAR_5->string);

 }
 else
  VAR_2.ipv6mr_interface = 0;
}
