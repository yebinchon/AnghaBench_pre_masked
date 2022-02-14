
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* s_addr; } ;
struct TYPE_3__ {void* s_addr; } ;
struct ip_mreq {TYPE_2__ imr_interface; TYPE_1__ imr_multiaddr; } ;


 char* VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int,char*,struct ip_mreq,int ) ;
 int FUNC_2 (int,char*,struct ip_mreq,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, int VAR_3, int VAR_4)
{
 struct ip_mreq VAR_5;


 VAR_5.imr_multiaddr.s_addr = FUNC_0(VAR_0);


 VAR_5.imr_interface.s_addr = FUNC_0("127.0.0.1");

 FUNC_1(VAR_2, "raw_sock", VAR_5, 0);
 FUNC_2(VAR_2, "raw_sock", VAR_5, 0);

 FUNC_1(VAR_3, "raw_sock", VAR_5, VAR_1);
 FUNC_2(VAR_3, "raw_sock", VAR_5, VAR_1);

 FUNC_1(VAR_4, "raw_sock", VAR_5, 0);
 FUNC_2(VAR_4, "raw_sock", VAR_5, 0);
}
