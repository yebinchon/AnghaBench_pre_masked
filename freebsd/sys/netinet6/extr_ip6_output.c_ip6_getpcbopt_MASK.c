
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {int dummy; } ;
struct ip6_pktopts {int ip6po_tclass; int ip6po_minmtu; int ip6po_flags; int ip6po_prefer_tempaddr; int ip6po_pktinfo; } ;
struct inpcb {struct ip6_pktopts* in6p_outputopts; } ;
struct in6_pktinfo {int ipi6_addr; } ;
typedef int on ;
typedef int null_pktinfo ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct inpcb*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,struct in6_pktinfo*,int) ;
 int FUNC_5 (struct in6_pktinfo*,int) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct sockopt*,void*,int) ;

__attribute__((used)) static int
FUNC_10(struct inpcb *VAR_10, int VAR_11, struct sockopt *VAR_12)
{
 void *VAR_13 = ((void*)0);
 bool VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 struct in6_pktinfo VAR_17;
 int VAR_18 = 0, VAR_19;
 int VAR_20 = VAR_2;
 int VAR_21 = VAR_3;
 struct ip6_pktopts *VAR_22;

 FUNC_2(VAR_10);
 VAR_22 = VAR_10->in6p_outputopts;

 switch (VAR_11) {
 case 133:
  VAR_13 = (void *)&VAR_17;
  if (VAR_22 && VAR_22->ip6po_pktinfo) {
   FUNC_4(VAR_22->ip6po_pktinfo, &VAR_17,
       sizeof(VAR_17));
   FUNC_7(&VAR_17.ipi6_addr);
  } else {

   FUNC_5(&VAR_17, sizeof(VAR_17));
  }
  VAR_15 = sizeof(struct in6_pktinfo);
  break;
 case 129:
  if (VAR_22 && VAR_22->ip6po_tclass >= 0)
   VAR_18 = VAR_22->ip6po_tclass;
  VAR_13 = (void *)&VAR_18;
  VAR_15 = sizeof(int);
  break;
 case 135:
  FUNC_0(VAR_7);
  break;
 case 131:
  FUNC_0(VAR_9);
  break;
 case 130:
  FUNC_0(VAR_5);
  break;
 case 136:
  FUNC_0(VAR_6);
  break;
 case 134:
  FUNC_1(VAR_8);
  break;
 case 128:
  if (VAR_22)
   VAR_20 = VAR_22->ip6po_minmtu;
  VAR_13 = (void *)&VAR_20;
  VAR_15 = sizeof(int);
  break;
 case 137:
  if (VAR_22 && ((VAR_22->ip6po_flags) & VAR_1))
   VAR_19 = 1;
  else
   VAR_19 = 0;
  VAR_13 = (void *)&VAR_19;
  VAR_15 = sizeof(VAR_19);
  break;
 case 132:
  if (VAR_22)
   VAR_21 = VAR_22->ip6po_prefer_tempaddr;
  VAR_13 = (void *)&VAR_21;
  VAR_15 = sizeof(int);
  break;
 default:



  FUNC_3(VAR_10);
  return (VAR_0);
 }
 FUNC_3(VAR_10);

 VAR_16 = FUNC_9(VAR_12, VAR_13, VAR_15);
 if (VAR_14)
  FUNC_6(VAR_13, VAR_4);

 return (VAR_16);
}
