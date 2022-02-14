
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int bandwidth; } ;
struct dn_schk {TYPE_1__ link; struct dn_profile* profile; } ;
struct dn_profile {int samples_no; int loss_level; scalar_t__* samples; } ;
struct dn_pkt_tag {int dn_dir; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 struct dn_pkt_tag* FUNC_1 (struct mbuf*) ;
 int FUNC_2 () ;

__attribute__((used)) static uint64_t
FUNC_3(struct mbuf *VAR_1, struct dn_schk *VAR_2)
{
 int VAR_3;
 uint64_t VAR_4;
 struct dn_profile *VAR_5 = VAR_2->profile;

 if (!VAR_5 || VAR_5->samples_no == 0)
  return 0;
 VAR_3 = FUNC_2() % VAR_5->samples_no;
 VAR_4 = FUNC_0((uint64_t)VAR_5->samples[VAR_3] * VAR_2->link.bandwidth, 1000);
 if (VAR_3 >= VAR_5->loss_level) {
  struct dn_pkt_tag *VAR_6 = FUNC_1(VAR_1);
  if (VAR_6)
   VAR_6->dn_dir = VAR_0;
 }
 return VAR_4;
}
