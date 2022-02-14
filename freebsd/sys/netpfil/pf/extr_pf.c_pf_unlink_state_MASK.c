
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {scalar_t__ state; scalar_t__ seqlo; int seqhi; } ;
struct TYPE_4__ {int ptr; } ;
struct pf_state {scalar_t__ timeout; int refs; int tag; TYPE_3__ src; TYPE_2__** key; TYPE_1__ rule; } ;
struct pf_idhash {int dummy; } ;
struct TYPE_5__ {int * port; int * addr; int af; } ;


 int FUNC_0 (struct pf_state*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pf_idhash*) ;
 int FUNC_2 (struct pf_idhash*) ;
 int FUNC_3 (struct pf_idhash*) ;
 size_t FUNC_4 (struct pf_state*) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct pf_state*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct pf_idhash* VAR_6 ;
 int FUNC_6 (struct pf_state*) ;
 int VAR_7 ;
 int FUNC_7 (struct pf_state*) ;
 int FUNC_8 (struct pf_state*) ;
 int FUNC_9 (int *,int ,int ,int *,int *,int ,int ,int ,scalar_t__,int,int ,int ,int ,int,int ,int *) ;
 int FUNC_10 (struct pf_state*) ;
 int FUNC_11 (int *) ;

int
FUNC_12(struct pf_state *VAR_8, u_int VAR_9)
{
 struct pf_idhash *VAR_10 = &VAR_6[FUNC_4(VAR_8)];

 if ((VAR_9 & VAR_1) == 0)
  FUNC_2(VAR_10);
 else
  FUNC_1(VAR_10);

 if (VAR_8->timeout == VAR_0) {





  FUNC_3(VAR_10);
  return (0);
 }

 if (VAR_8->src.state == VAR_3) {

  FUNC_9(((void*)0), VAR_8->rule.ptr, VAR_8->key[VAR_2]->af,
      &VAR_8->key[VAR_2]->addr[1],
      &VAR_8->key[VAR_2]->addr[0],
      VAR_8->key[VAR_2]->port[1],
      VAR_8->key[VAR_2]->port[0],
      VAR_8->src.seqhi, VAR_8->src.seqlo + 1,
      VAR_5|VAR_4, 0, 0, 0, 1, VAR_8->tag, ((void*)0));
 }

 FUNC_0(VAR_8, VAR_7);
 FUNC_10(VAR_8);

 if (&FUNC_6 != ((void*)0))
  FUNC_6(VAR_8);

 FUNC_5(VAR_8);

 VAR_8->timeout = VAR_0;

 FUNC_3(VAR_10);

 FUNC_7(VAR_8);


 (void)FUNC_11(&VAR_8->refs);

 return (FUNC_8(VAR_8));
}
