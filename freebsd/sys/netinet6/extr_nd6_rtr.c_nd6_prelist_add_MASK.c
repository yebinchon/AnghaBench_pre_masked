
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin6_addr; } ;
struct nd_prefixctl {int ndpr_ifp; int ndpr_plen; TYPE_1__ ndpr_prefix; int ndpr_flags; int ndpr_pltime; int ndpr_vltime; } ;
struct nd_prefix {scalar_t__ ndpr_raf_onlink; int ndpr_mask; TYPE_1__ ndpr_prefix; int ndpr_plen; int ndpr_advrtrs; int ndpr_lastupdate; int ndpr_flags; int ndpr_pltime; int ndpr_vltime; int ndpr_ifp; int ndpr_refcnt; } ;
struct nd_defrouter {int dummy; } ;
struct epoch_tracker {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct nd_prefix*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct epoch_tracker) ;
 int FUNC_8 (struct epoch_tracker) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct nd_prefix*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct nd_prefix*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (char*,int *) ;
 struct nd_prefix* FUNC_14 (int,int ,int) ;
 int FUNC_15 (struct nd_prefix*) ;
 int FUNC_16 (int ) ;
 int VAR_8 ;
 int FUNC_17 (struct nd_prefix*,struct nd_defrouter*) ;
 int FUNC_18 (int *,int) ;
 int VAR_9 ;

int
FUNC_19(struct nd_prefixctl *VAR_10, struct nd_defrouter *VAR_11,
    struct nd_prefix **VAR_12)
{
 struct nd_prefix *VAR_13;
 char VAR_14[VAR_1];
 int VAR_15;

 VAR_13 = FUNC_14(sizeof(*VAR_13), VAR_3, VAR_4 | VAR_5);
 if (VAR_13 == ((void*)0))
  return (VAR_0);
 FUNC_18(&VAR_13->ndpr_refcnt, VAR_12 != ((void*)0) ? 2 : 1);
 VAR_13->ndpr_ifp = VAR_10->ndpr_ifp;
 VAR_13->ndpr_prefix = VAR_10->ndpr_prefix;
 VAR_13->ndpr_plen = VAR_10->ndpr_plen;
 VAR_13->ndpr_vltime = VAR_10->ndpr_vltime;
 VAR_13->ndpr_pltime = VAR_10->ndpr_pltime;
 VAR_13->ndpr_flags = VAR_10->ndpr_flags;
 if ((VAR_15 = FUNC_11(VAR_13)) != 0) {
  FUNC_9(VAR_13, VAR_3);
  return (VAR_15);
 }
 VAR_13->ndpr_lastupdate = VAR_9;


 FUNC_1(&VAR_13->ndpr_advrtrs);
 FUNC_12(&VAR_13->ndpr_mask, VAR_13->ndpr_plen);

 FUNC_0(&VAR_13->ndpr_prefix.sin6_addr, &VAR_13->ndpr_mask);

 FUNC_5();
 FUNC_2(&VAR_7, VAR_13, VAR_8);
 VAR_6++;
 FUNC_6();


 if (VAR_13->ndpr_raf_onlink) {
  struct epoch_tracker VAR_16;

  FUNC_3();
  FUNC_7(VAR_16);
  if ((VAR_15 = FUNC_15(VAR_13)) != 0) {
   FUNC_16((VAR_2, "nd6_prelist_add: failed to make "
       "the prefix %s/%d on-link on %s (errno=%d)\n",
       FUNC_13(VAR_14, &VAR_10->ndpr_prefix.sin6_addr),
       VAR_10->ndpr_plen, FUNC_10(VAR_10->ndpr_ifp), VAR_15));

  }
  FUNC_8(VAR_16);
  FUNC_4();
 }

 if (VAR_11 != ((void*)0))
  FUNC_17(VAR_13, VAR_11);
 if (VAR_12 != ((void*)0))
  *VAR_12 = VAR_13;
 return (0);
}
