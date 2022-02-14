
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct tcphdr {int th_flags; } ;
struct pf_state_peer {scalar_t__ state; scalar_t__ seqlo; } ;
struct pf_state {int timeout; int expire; int * src_node; } ;
struct TYPE_2__ {struct tcphdr* tcp; } ;
struct pf_pdesc {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (struct pf_state**) ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_2(struct pf_state_peer *VAR_18, struct pf_state_peer *VAR_19,
 struct pf_state **VAR_20, struct pf_pdesc *VAR_21, u_short *VAR_22)
{
 struct tcphdr *VAR_23 = VAR_21->hdr.tcp;

 if (VAR_23->th_flags & VAR_16)
  if (VAR_18->state < VAR_11)
   VAR_18->state = VAR_11;
 if (VAR_23->th_flags & VAR_14)
  if (VAR_18->state < VAR_8)
   VAR_18->state = VAR_8;
 if (VAR_23->th_flags & VAR_13) {
  if (VAR_19->state == VAR_11) {
   VAR_19->state = VAR_9;
   if (VAR_18->state == VAR_9 &&
       (*VAR_20)->src_node != ((void*)0) &&
       FUNC_1(VAR_20)) {
    FUNC_0(VAR_22, VAR_0);
    return (VAR_6);
   }
  } else if (VAR_19->state == VAR_8) {
   VAR_19->state = VAR_10;
  } else if (VAR_18->state == VAR_11 &&
      VAR_19->state < VAR_11) {






   VAR_19->state = VAR_18->state = VAR_9;
   if ((*VAR_20)->src_node != ((void*)0) &&
       FUNC_1(VAR_20)) {
    FUNC_0(VAR_22, VAR_0);
    return (VAR_6);
   }
  } else if (VAR_18->state == VAR_8 &&
      VAR_19->state == VAR_9 &&
      VAR_19->seqlo == 0) {





   VAR_19->state = VAR_8;
  }
 }
 if (VAR_23->th_flags & VAR_15)
  VAR_18->state = VAR_19->state = VAR_12;


 (*VAR_20)->expire = VAR_17;
 if (VAR_18->state >= VAR_10 &&
     VAR_19->state >= VAR_10)
  (*VAR_20)->timeout = VAR_1;
 else if (VAR_18->state >= VAR_8 &&
     VAR_19->state >= VAR_8)
  (*VAR_20)->timeout = VAR_4;
 else if (VAR_18->state < VAR_9 ||
     VAR_19->state < VAR_9)
  (*VAR_20)->timeout = VAR_5;
 else if (VAR_18->state >= VAR_8 ||
     VAR_19->state >= VAR_8)
  (*VAR_20)->timeout = VAR_2;
 else
  (*VAR_20)->timeout = VAR_3;

 return (VAR_7);
}
