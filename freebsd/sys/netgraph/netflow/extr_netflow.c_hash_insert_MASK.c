
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int rti_flags; int rti_addrs; TYPE_2__ sin_addr; struct sockaddr** rti_info; scalar_t__ sin_family; TYPE_1__* rti_ifp; } ;
struct sockaddr_dl {int sdl_len; scalar_t__ sdl_family; } ;
struct sockaddr {int dummy; } ;
struct rt_addrinfo {int sin_len; int rti_flags; int rti_addrs; TYPE_2__ sin_addr; struct sockaddr** rti_info; scalar_t__ sin_family; TYPE_1__* rti_ifp; } ;
struct flow_rec {int fib; } ;
struct flow_hash_entry {int head; int mtx; } ;
struct TYPE_12__ {TYPE_2__ r_src; TYPE_2__ r_dst; } ;
struct TYPE_10__ {int bytes; int packets; int tcp_flags; int dst_mask; int src_mask; TYPE_7__ r; TYPE_2__ next_hop; int fle_o_ifx; int last; int first; int version; } ;
struct flow_entry {TYPE_3__ f; } ;
typedef int sin ;
typedef int rt_gateway ;
typedef TYPE_4__* priv_p ;
typedef int info ;
struct TYPE_11__ {int nfinfo_alloc_failed; int zone; } ;
struct TYPE_8__ {int if_index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,struct flow_entry*,int ) ;
 int FUNC_1 (struct flow_rec*,TYPE_7__*,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct sockaddr_in*,int) ;
 int VAR_13 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct sockaddr_in*) ;
 scalar_t__ FUNC_6 (int ,struct sockaddr*,int ,int ,struct sockaddr_in*) ;
 int VAR_14 ;
 struct flow_entry* FUNC_7 (int ,TYPE_4__*,int ) ;

__attribute__((used)) static int
FUNC_8(priv_p VAR_15, struct flow_hash_entry *VAR_16, struct flow_rec *VAR_17,
 int VAR_18, uint8_t VAR_19, uint8_t VAR_20)
{
 struct flow_entry *VAR_21;
 struct sockaddr_in VAR_22, VAR_23;
 struct sockaddr_dl VAR_24;
 struct rt_addrinfo VAR_25;

 FUNC_4(&VAR_16->mtx, VAR_3);

 VAR_21 = FUNC_7(VAR_15->zone, VAR_15, VAR_4);
 if (VAR_21 == ((void*)0)) {
  VAR_15->nfinfo_alloc_failed++;
  return (VAR_1);
 }





 VAR_21->f.version = VAR_2;
 FUNC_1(VAR_17, &VAR_21->f.r, sizeof(struct flow_rec));
 VAR_21->f.bytes = VAR_18;
 VAR_21->f.packets = 1;
 VAR_21->f.tcp_flags = VAR_20;

 VAR_21->f.first = VAR_21->f.last = VAR_14;





 if ((VAR_19 & VAR_5) == 0) {
  FUNC_3(&VAR_22, sizeof(VAR_22));
  VAR_22.sin_len = sizeof(struct sockaddr_in);
  VAR_22.sin_family = VAR_0;
  VAR_22.sin_addr = VAR_21->f.r.r_dst;

  VAR_24.sdl_len = sizeof(VAR_24);
  VAR_23.sin_len = sizeof(struct sockaddr_in);
  FUNC_3(&VAR_25, sizeof(VAR_25));

  VAR_25.rti_info[VAR_8] = (struct sockaddr *)&VAR_24;
  VAR_25.rti_info[VAR_9] = (struct sockaddr *)&VAR_23;

  if (FUNC_6(VAR_17->fib, (struct sockaddr *)&VAR_22, VAR_7, 0,
      &VAR_25) == 0) {
   VAR_21->f.fle_o_ifx = VAR_25.rti_ifp->if_index;

   if (VAR_25.rti_flags & VAR_11 &&
       VAR_24.sdl_family == VAR_0)
    VAR_21->f.next_hop =
        ((struct sockaddr_in *)&VAR_24)->sin_addr;

   if (VAR_25.rti_addrs & VAR_10)
    VAR_21->f.dst_mask = FUNC_2(VAR_23.sin_addr.s_addr);
   else if (VAR_25.rti_flags & VAR_12)

    VAR_21->f.dst_mask = 32;

   FUNC_5(&VAR_25);
  }
 }


 if ((VAR_19 & VAR_6) == 0) {
  FUNC_3(&VAR_22, sizeof(VAR_22));
  VAR_22.sin_len = sizeof(struct sockaddr_in);
  VAR_22.sin_family = VAR_0;
  VAR_22.sin_addr = VAR_21->f.r.r_src;

  VAR_23.sin_len = sizeof(struct sockaddr_in);
  FUNC_3(&VAR_25, sizeof(VAR_25));

  VAR_25.rti_info[VAR_9] = (struct sockaddr *)&VAR_23;

  if (FUNC_6(VAR_17->fib, (struct sockaddr *)&VAR_22, 0, 0,
      &VAR_25) == 0) {
   if (VAR_25.rti_addrs & VAR_10)
    VAR_21->f.src_mask =
        FUNC_2(VAR_23.sin_addr.s_addr);
   else if (VAR_25.rti_flags & VAR_12)

    VAR_21->f.src_mask = 32;
  }
 }


 FUNC_0(&VAR_16->head, VAR_21, VAR_13);

 return (0);
}
