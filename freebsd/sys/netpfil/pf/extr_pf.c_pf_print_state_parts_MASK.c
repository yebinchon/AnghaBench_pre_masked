
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct pf_state_key {int proto; int af; int * port; int * addr; } ;
struct TYPE_4__ {int wscale; int seqlo; int seqhi; int max_win; int seqdiff; int state; } ;
struct TYPE_3__ {int seqlo; int seqhi; int max_win; int seqdiff; int wscale; int state; } ;
struct pf_state {int direction; TYPE_2__ dst; TYPE_1__ src; struct pf_state_key** key; } ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct pf_state *VAR_3,
    struct pf_state_key *VAR_4, struct pf_state_key *VAR_5)
{
 struct pf_state_key *VAR_6, *VAR_7;
 u_int8_t VAR_8, VAR_9;


 VAR_6 = VAR_4 ? VAR_4 : (VAR_3 ? VAR_3->key[VAR_1] : ((void*)0));
 VAR_7 = VAR_5 ? VAR_5 : (VAR_3 ? VAR_3->key[VAR_0] : ((void*)0));
 VAR_8 = VAR_6 ? VAR_6->proto : (VAR_7 ? VAR_7->proto : 0);
 VAR_9 = VAR_3 ? VAR_3->direction : 0;

 switch (VAR_8) {
 case 133:
  FUNC_1("IPv4");
  break;
 case 132:
  FUNC_1("IPv6");
  break;
 case 131:
  FUNC_1("TCP");
  break;
 case 130:
  FUNC_1("UDP");
  break;
 case 135:
  FUNC_1("ICMP");
  break;
 case 134:
  FUNC_1("ICMPv6");
  break;
 default:
  FUNC_1("%u", VAR_8);
  break;
 }
 switch (VAR_9) {
 case 129:
  FUNC_1(" in");
  break;
 case 128:
  FUNC_1(" out");
  break;
 }
 if (VAR_6) {
  FUNC_1(" wire: ");
  FUNC_0(&VAR_6->addr[0], VAR_6->port[0], VAR_6->af);
  FUNC_1(" ");
  FUNC_0(&VAR_6->addr[1], VAR_6->port[1], VAR_6->af);
 }
 if (VAR_7) {
  FUNC_1(" stack: ");
  if (VAR_7 != VAR_6) {
   FUNC_0(&VAR_7->addr[0], VAR_7->port[0], VAR_7->af);
   FUNC_1(" ");
   FUNC_0(&VAR_7->addr[1], VAR_7->port[1], VAR_7->af);
  } else
   FUNC_1("-");
 }
 if (VAR_3) {
  if (VAR_8 == 131) {
   FUNC_1(" [lo=%u high=%u win=%u modulator=%u",
       VAR_3->src.seqlo, VAR_3->src.seqhi,
       VAR_3->src.max_win, VAR_3->src.seqdiff);
   if (VAR_3->src.wscale && VAR_3->dst.wscale)
    FUNC_1(" wscale=%u",
        VAR_3->src.wscale & VAR_2);
   FUNC_1("]");
   FUNC_1(" [lo=%u high=%u win=%u modulator=%u",
       VAR_3->dst.seqlo, VAR_3->dst.seqhi,
       VAR_3->dst.max_win, VAR_3->dst.seqdiff);
   if (VAR_3->src.wscale && VAR_3->dst.wscale)
    FUNC_1(" wscale=%u",
    VAR_3->dst.wscale & VAR_2);
   FUNC_1("]");
  }
  FUNC_1(" %u:%u", VAR_3->src.state, VAR_3->dst.state);
 }
}
