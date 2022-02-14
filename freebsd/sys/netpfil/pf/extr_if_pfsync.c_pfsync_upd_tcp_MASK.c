
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfsync_state_peer {scalar_t__ state; int seqlo; } ;
struct TYPE_2__ {scalar_t__ state; int seqlo; } ;
struct pf_state {TYPE_1__ dst; TYPE_1__ src; } ;


 int FUNC_0 (struct pf_state*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pfsync_state_peer*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct pf_state *VAR_2, struct pfsync_state_peer *VAR_3,
    struct pfsync_state_peer *VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(VAR_2);






 if ((VAR_2->src.state > VAR_3->state &&
     (VAR_2->src.state < VAR_0 ||
     VAR_3->state >= VAR_0)) ||

     (VAR_2->src.state == VAR_3->state &&
     FUNC_1(VAR_2->src.seqlo, FUNC_2(VAR_3->seqlo))))
  VAR_5++;
 else
  FUNC_3(VAR_3, &VAR_2->src);

 if ((VAR_2->dst.state > VAR_4->state) ||

     (VAR_2->dst.state >= VAR_1 &&
     FUNC_1(VAR_2->dst.seqlo, FUNC_2(VAR_4->seqlo))))
  VAR_5++;
 else
  FUNC_3(VAR_4, &VAR_2->dst);

 return (VAR_5);
}
