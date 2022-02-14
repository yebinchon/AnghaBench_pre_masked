
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct tcphdr {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct TYPE_9__ {scalar_t__ ss_family; } ;
struct TYPE_10__ {TYPE_4__ remote_addr; TYPE_3__* dev; } ;
struct c4iw_ep {int emss; int mss; TYPE_5__ com; } ;
struct TYPE_6__ {int* mtus; } ;
struct TYPE_7__ {TYPE_1__ lldi; } ;
struct TYPE_8__ {TYPE_2__ rdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,int,int) ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct c4iw_ep *VAR_2, u16 VAR_3)
{
 VAR_2->emss = VAR_2->com.dev->rdev.lldi.mtus[FUNC_0(VAR_3)] -
     ((VAR_0 == VAR_2->com.remote_addr.ss_family) ?
      sizeof(struct iphdr) : sizeof(struct ipv6hdr)) -
     sizeof(struct tcphdr);
 VAR_2->mss = VAR_2->emss;
 if (FUNC_1(VAR_3))
  VAR_2->emss -= FUNC_3(VAR_1, 4);
 if (VAR_2->emss < 128)
  VAR_2->emss = 128;
 if (VAR_2->emss & 7)
  FUNC_2("Warning: misaligned mtu idx %u mss %u emss=%u\n",
    FUNC_0(VAR_3), VAR_2->mss, VAR_2->emss);
 FUNC_2("mss_idx %u mss %u emss=%u\n", FUNC_0(VAR_3), VAR_2->mss,
   VAR_2->emss);
}
