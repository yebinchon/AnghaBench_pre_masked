
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct TYPE_3__ {int info; } ;
struct ip_fw_args {int flags; int * ifp; TYPE_1__ rule; } ;
struct dn_pkt_tag {int dn_dir; int iphdr_off; int output_time; int * ifp; TYPE_1__ rule; } ;
struct TYPE_4__ {int curr_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 struct m_tag* FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct mbuf*,struct m_tag*) ;

__attribute__((used)) static inline int
FUNC_2(struct mbuf *VAR_8, int VAR_9, struct ip_fw_args *VAR_10)
{
 struct dn_pkt_tag *VAR_11;
 struct m_tag *VAR_12;

 VAR_12 = FUNC_0(VAR_5,
      sizeof(*VAR_11), VAR_3 | VAR_4);
 if (VAR_12 == ((void*)0))
  return 1;
 FUNC_1(VAR_8, VAR_12);
 VAR_11 = (struct dn_pkt_tag *)(VAR_12 + 1);
 VAR_11->rule = VAR_10->rule;
 VAR_11->rule.info &= VAR_2;
 VAR_11->dn_dir = VAR_9;
 VAR_11->ifp = VAR_10->flags & VAR_1 ? VAR_10->ifp : ((void*)0);

 VAR_11->output_time = VAR_7.curr_time;
 VAR_11->iphdr_off = (VAR_9 & VAR_6) ? VAR_0 : 0;
 return 0;
}
