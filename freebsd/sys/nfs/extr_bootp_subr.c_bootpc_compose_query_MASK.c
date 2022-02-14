
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vendor_client ;
typedef int uint8_t ;
typedef unsigned char uint32_t ;
struct thread {int dummy; } ;
struct TYPE_5__ {int htype; unsigned char* vend; int flags; scalar_t__ secs; int chaddr; int xid; scalar_t__ hops; int hlen; int op; } ;
struct TYPE_4__ {unsigned char yiaddr; } ;
struct bootpc_ifcontext {int state; unsigned char dhcpserver; TYPE_2__ call; int gotdhcpserver; TYPE_1__ reply; void* dhcpquerytype; TYPE_3__* sdl; int xid; scalar_t__ gotrootpath; } ;
struct bootp_packet {int dummy; } ;
typedef int caddr_t ;
struct TYPE_6__ {int sdl_alen; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;


 int FUNC_0 (TYPE_3__*) ;
 char* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (struct bootpc_ifcontext*) ;
 int FUNC_3 (int ,int) ;
 unsigned char FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 char* VAR_12 ;
 char* VAR_13 ;
 int FUNC_7 (unsigned char*,int,char*,char*,char*,char*) ;
 int FUNC_8 (unsigned char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct bootpc_ifcontext *VAR_14, struct thread *VAR_15)
{
 unsigned char *VAR_16;
 unsigned char VAR_17[64];
 uint32_t VAR_18;
 uint8_t VAR_19;

 VAR_14->gotrootpath = 0;

 FUNC_3((caddr_t) &VAR_14->call, sizeof(VAR_14->call));


 VAR_14->call.op = VAR_0;
 VAR_14->call.htype = 1;
 VAR_14->call.hlen = VAR_14->sdl->sdl_alen;
 VAR_14->call.hops = 0;
 if (FUNC_2(VAR_14) != 0)
  VAR_14->xid++;
 VAR_14->call.xid = FUNC_9(VAR_14->xid);
 FUNC_1(FUNC_0(VAR_14->sdl), &VAR_14->call.chaddr, VAR_14->sdl->sdl_alen);

 VAR_16 = VAR_14->call.vend;
 *VAR_16++ = 99;
 *VAR_16++ = 130;
 *VAR_16++ = 83;
 *VAR_16++ = 99;
 *VAR_16++ = VAR_10;
 *VAR_16++ = 2;
 *VAR_16++ = (sizeof(struct bootp_packet) >> 8) & 255;
 *VAR_16++ = sizeof(struct bootp_packet) & 255;

 FUNC_7(VAR_17, sizeof(VAR_17), "%s:%s:%s",
  VAR_13, VAR_4, VAR_12);
 VAR_19 = FUNC_8(VAR_17);
 *VAR_16++ = VAR_11;
 *VAR_16++ = VAR_19;
 FUNC_6(VAR_16, VAR_17, VAR_19);
 VAR_16 += VAR_19;
 VAR_14->dhcpquerytype = VAR_2;
 switch (VAR_14->state) {
 case 128:
  *VAR_16++ = VAR_6;
  *VAR_16++ = 1;
  *VAR_16++ = VAR_1;
  VAR_14->dhcpquerytype = VAR_1;
  VAR_14->gotdhcpserver = 0;
  break;
 case 129:
  *VAR_16++ = VAR_6;
  *VAR_16++ = 1;
  *VAR_16++ = VAR_3;
  VAR_14->dhcpquerytype = VAR_3;
  *VAR_16++ = VAR_7;
  *VAR_16++ = 4;
  FUNC_6(VAR_16, &VAR_14->reply.yiaddr, 4);
  VAR_16 += 4;
  if (VAR_14->gotdhcpserver != 0) {
   *VAR_16++ = VAR_8;
   *VAR_16++ = 4;
   FUNC_6(VAR_16, &VAR_14->dhcpserver, 4);
   VAR_16 += 4;
  }
  *VAR_16++ = VAR_5;
  *VAR_16++ = 4;
  VAR_18 = FUNC_4(300);
  FUNC_6(VAR_16, &VAR_18, 4);
  VAR_16 += 4;
  break;
 default:
  break;
 }
 *VAR_16 = VAR_9;

 VAR_14->call.secs = 0;
 VAR_14->call.flags = FUNC_5(0x8000);
}
