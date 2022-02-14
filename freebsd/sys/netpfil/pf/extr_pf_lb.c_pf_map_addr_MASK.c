
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pf_addr {int* addr32; } ;
struct pf_src_node {struct pf_addr raddr; } ;
struct pf_pool {int opts; int tblidx; struct pf_addr counter; struct pf_pooladdr* cur; int list; int key; } ;
struct pf_rule {struct pf_pool rpool; } ;
struct TYPE_7__ {struct pf_addr mask; struct pf_addr addr; } ;
struct TYPE_8__ {TYPE_1__ a; } ;
struct TYPE_10__ {TYPE_3__* dyn; int tbl; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ v; TYPE_4__ p; } ;
struct pf_pooladdr {TYPE_5__ addr; } ;
typedef int sa_family_t ;
struct TYPE_12__ {scalar_t__ debug; } ;
struct TYPE_9__ {int pfid_acnt4; int pfid_acnt6; int pfid_kt; struct pf_addr pfid_mask6; struct pf_addr pfid_addr6; struct pf_addr pfid_mask4; struct pf_addr pfid_addr4; } ;




 int FUNC_0 (struct pf_addr*,struct pf_addr*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct pf_addr*,struct pf_addr*,int) ;
 int FUNC_2 (struct pf_addr*,int) ;
 scalar_t__ FUNC_3 (struct pf_addr*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct pf_addr*,struct pf_addr*,struct pf_addr*,struct pf_addr*,int) ;





 int VAR_4 ;
 int VAR_5 ;
 struct pf_pooladdr* FUNC_5 (int *) ;
 struct pf_pooladdr* FUNC_6 (struct pf_pooladdr*,int ) ;
 TYPE_6__ VAR_6 ;
 int FUNC_7 () ;
 int VAR_7 ;
 void* FUNC_8 (int ) ;
 struct pf_src_node* FUNC_9 (struct pf_addr*,struct pf_rule*,int,int ) ;
 int FUNC_10 (struct pf_addr*,struct pf_addr*,int *,int) ;
 int FUNC_11 (int ,struct pf_addr*,struct pf_addr*,struct pf_addr*,int) ;
 int FUNC_12 (struct pf_addr*,int ,int) ;
 int FUNC_13 (int ,int*,struct pf_addr*,int) ;
 int FUNC_14 (char*) ;

int
FUNC_15(sa_family_t VAR_8, struct pf_rule *VAR_9, struct pf_addr *VAR_10,
    struct pf_addr *VAR_11, struct pf_addr *VAR_12, struct pf_src_node **VAR_13)
{
 struct pf_pool *VAR_14 = &VAR_9->rpool;
 struct pf_addr *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);



 if (*VAR_13 == ((void*)0) && VAR_9->rpool.opts & VAR_4 &&
     (VAR_9->rpool.opts & VAR_5) != 131)
  *VAR_13 = FUNC_9(VAR_10, VAR_9, VAR_8, 0);





 if (*VAR_13 != ((void*)0) && !FUNC_3(&(*VAR_13)->raddr, VAR_8)) {



  if (FUNC_1(VAR_11, &(*VAR_13)->raddr, VAR_8))
   return (1);

  FUNC_0(VAR_11, &(*VAR_13)->raddr, VAR_8);
  if (VAR_6.debug >= VAR_3) {
   FUNC_14("pf_map_addr: src tracking maps ");
   FUNC_12(VAR_10, 0, VAR_8);
   FUNC_14(" to ");
   FUNC_12(VAR_11, 0, VAR_8);
   FUNC_14("\n");
  }
  return (0);
 }



 if (VAR_14->cur->addr.type == VAR_1)
  return (1);
 if (VAR_14->cur->addr.type == VAR_0) {
  switch (VAR_8) {
  }
 } else if (VAR_14->cur->addr.type == VAR_2) {
  if ((VAR_14->opts & VAR_5) != 129)
   return (1);
 } else {
  VAR_15 = &VAR_14->cur->addr.v.a.addr;
  VAR_16 = &VAR_14->cur->addr.v.a.mask;
 }

 switch (VAR_14->opts & VAR_5) {
 case 131:
  FUNC_0(VAR_11, VAR_15, VAR_8);
  break;
 case 132:
  FUNC_4(VAR_11, VAR_15, VAR_16, VAR_10, VAR_8);
  break;
 case 130:
  if (VAR_12 != ((void*)0) && FUNC_3(VAR_12, VAR_8)) {
   switch (VAR_8) {
   }
   FUNC_4(VAR_11, VAR_15, VAR_16, &VAR_14->counter, VAR_8);
   FUNC_0(VAR_12, VAR_11, VAR_8);

  } else {
   FUNC_2(&VAR_14->counter, VAR_8);
   FUNC_4(VAR_11, VAR_15, VAR_16, &VAR_14->counter, VAR_8);
  }
  break;
 case 128:
     {
  unsigned char VAR_17[16];

  FUNC_10(VAR_10, (struct pf_addr *)&VAR_17, &VAR_14->key, VAR_8);
  FUNC_4(VAR_11, VAR_15, VAR_16, (struct pf_addr *)&VAR_17, VAR_8);
  break;
     }
 case 129:
     {
  struct pf_pooladdr *VAR_18 = VAR_14->cur;
  if (VAR_14->cur->addr.type == VAR_2) {
   if (!FUNC_13(VAR_14->cur->addr.p.tbl,
       &VAR_14->tblidx, &VAR_14->counter, VAR_8))
    goto get_addr;
  } else if (VAR_14->cur->addr.type == VAR_0) {
   if (!FUNC_13(VAR_14->cur->addr.p.dyn->pfid_kt,
       &VAR_14->tblidx, &VAR_14->counter, VAR_8))
    goto get_addr;
  } else if (FUNC_11(0, VAR_15, VAR_16, &VAR_14->counter, VAR_8))
   goto get_addr;

 try_next:
  if (FUNC_6(VAR_14->cur, VAR_7) == ((void*)0))
   VAR_14->cur = FUNC_5(&VAR_14->list);
  else
   VAR_14->cur = FUNC_6(VAR_14->cur, VAR_7);
  if (VAR_14->cur->addr.type == VAR_2) {
   VAR_14->tblidx = -1;
   if (FUNC_13(VAR_14->cur->addr.p.tbl,
       &VAR_14->tblidx, &VAR_14->counter, VAR_8)) {

    if (VAR_14->cur != VAR_18)
     goto try_next;
    return (1);
   }
  } else if (VAR_14->cur->addr.type == VAR_0) {
   VAR_14->tblidx = -1;
   if (FUNC_13(VAR_14->cur->addr.p.dyn->pfid_kt,
       &VAR_14->tblidx, &VAR_14->counter, VAR_8)) {

    if (VAR_14->cur != VAR_18)
     goto try_next;
    return (1);
   }
  } else {
   VAR_15 = &VAR_14->cur->addr.v.a.addr;
   VAR_16 = &VAR_14->cur->addr.v.a.mask;
   FUNC_0(&VAR_14->counter, VAR_15, VAR_8);
  }

 get_addr:
  FUNC_0(VAR_11, &VAR_14->counter, VAR_8);
  if (VAR_12 != ((void*)0) && FUNC_3(VAR_12, VAR_8))
   FUNC_0(VAR_12, VAR_11, VAR_8);
  FUNC_2(&VAR_14->counter, VAR_8);
  break;
     }
 }
 if (*VAR_13 != ((void*)0))
  FUNC_0(&(*VAR_13)->raddr, VAR_11, VAR_8);

 if (VAR_6.debug >= VAR_3 &&
     (VAR_14->opts & VAR_5) != 131) {
  FUNC_14("pf_map_addr: selected address ");
  FUNC_12(VAR_11, 0, VAR_8);
  FUNC_14("\n");
 }

 return (0);
}
