
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xunpgen {scalar_t__ xug_gen; int xug_len; } ;
struct TYPE_4__ {scalar_t__ sun_family; } ;
struct TYPE_3__ {scalar_t__ xso_so; } ;
struct xunpcb {int xu_len; scalar_t__ unp_conn; TYPE_2__ xu_addr; int xu_unpp; TYPE_1__ xu_socket; } ;
struct sockaddr_storage {int dummy; } ;
struct sock {int proto; char const* protoname; struct sock* next; scalar_t__ socket; struct addr* faddr; struct addr* laddr; scalar_t__ family; int pcb; } ;
struct addr {int * next; struct sockaddr_storage address; } ;
typedef scalar_t__ kvaddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 uintptr_t VAR_2 ;



 int FUNC_0 () ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_4 (void*,size_t) ;
 struct sock** VAR_7 ;
 scalar_t__ FUNC_5 (char const*,void*,size_t*,int *,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(int VAR_8)
{
 struct xunpgen *VAR_9, *VAR_10;
 struct xunpcb *VAR_11;
 struct sock *VAR_12;
 struct addr *VAR_13, *VAR_14;
 const char *VAR_15, *VAR_16;
 size_t VAR_17, VAR_18;
 void *VAR_19;
 int VAR_20, VAR_21;

 switch (VAR_8) {
 case 128:
  VAR_15 = "net.local.stream.pcblist";
  VAR_16 = "stream";
  break;
 case 130:
  VAR_15 = "net.local.dgram.pcblist";
  VAR_16 = "dgram";
  break;
 case 129:
  VAR_15 = "net.local.seqpacket.pcblist";
  VAR_16 = "seqpac";
  break;
 default:
  FUNC_0();
 }
 VAR_19 = ((void*)0);
 VAR_18 = 8192;
 VAR_21 = 5;
 do {
  for (;;) {
   if ((VAR_19 = FUNC_4(VAR_19, VAR_18)) == ((void*)0))
    FUNC_2(1, "realloc()");
   VAR_17 = VAR_18;
   if (FUNC_5(VAR_15, VAR_19, &VAR_17, ((void*)0), 0) == 0)
    break;
   if (VAR_3 != VAR_1 || VAR_17 != VAR_18)
    FUNC_2(1, "sysctlbyname()");
   VAR_18 *= 2;
  }
  VAR_9 = (struct xunpgen *)VAR_19;
  VAR_10 = (struct xunpgen *)(void *)
      ((char *)VAR_19 + VAR_17 - sizeof(*VAR_10));
  if (VAR_9->xug_len != sizeof(*VAR_9) ||
      VAR_10->xug_len != sizeof(*VAR_10)) {
   FUNC_6("struct xinpgen size mismatch");
   goto out;
  }
 } while (VAR_9->xug_gen != VAR_10->xug_gen && VAR_21--);

 if (VAR_9->xug_gen != VAR_10->xug_gen && VAR_6)
  FUNC_6("warning: data may be inconsistent");

 for (;;) {
  VAR_9 = (struct xunpgen *)(void *)((char *)VAR_9 + VAR_9->xug_len);
  if (VAR_9 >= VAR_10)
   break;
  VAR_11 = (struct xunpcb *)VAR_9;
  if (VAR_11->xu_len != sizeof(*VAR_11)) {
   FUNC_6("struct xunpcb size mismatch");
   goto out;
  }
  if ((VAR_11->unp_conn == 0 && !VAR_5) ||
      (VAR_11->unp_conn != 0 && !VAR_4))
   continue;
  if ((VAR_12 = FUNC_1(1, sizeof(*VAR_12))) == ((void*)0))
   FUNC_2(1, "malloc()");
  if ((VAR_13 = FUNC_1(1, sizeof *VAR_13)) == ((void*)0))
   FUNC_2(1, "malloc()");
  if ((VAR_14 = FUNC_1(1, sizeof *VAR_14)) == ((void*)0))
   FUNC_2(1, "malloc()");
  VAR_12->socket = VAR_11->xu_socket.xso_so;
  VAR_12->pcb = VAR_11->xu_unpp;
  VAR_12->proto = VAR_8;
  VAR_12->family = VAR_0;
  VAR_12->protoname = VAR_16;
  if (VAR_11->xu_addr.sun_family == VAR_0)
   VAR_13->address =
       *(struct sockaddr_storage *)(void *)&VAR_11->xu_addr;
  else if (VAR_11->unp_conn != 0)
   *(kvaddr_t*)&(VAR_14->address) = VAR_11->unp_conn;
  VAR_13->next = ((void*)0);
  VAR_14->next = ((void*)0);
  VAR_12->laddr = VAR_13;
  VAR_12->faddr = VAR_14;
  VAR_20 = (int)((uintptr_t)VAR_12->socket % VAR_2);
  VAR_12->next = VAR_7[VAR_20];
  VAR_7[VAR_20] = VAR_12;
 }
out:
 FUNC_3(VAR_19);
}
