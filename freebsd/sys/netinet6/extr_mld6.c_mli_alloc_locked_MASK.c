
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mld_ifsoftc {int mli_gq; int mli_uri; int mli_qri; int mli_qi; int mli_rv; scalar_t__ mli_flags; int mli_version; struct ifnet* mli_ifp; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (int ,char*,struct ifnet*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct mld_ifsoftc*,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct ifnet*) ;
 struct mld_ifsoftc* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *,int ) ;
 int VAR_11 ;

__attribute__((used)) static struct mld_ifsoftc *
FUNC_6( struct ifnet *VAR_12)
{
 struct mld_ifsoftc *VAR_13;

 FUNC_2();

 VAR_13 = FUNC_4(sizeof(struct mld_ifsoftc), VAR_7, VAR_8|VAR_9);
 if (VAR_13 == ((void*)0))
  goto out;

 VAR_13->mli_ifp = VAR_12;
 VAR_13->mli_version = VAR_6;
 VAR_13->mli_flags = 0;
 VAR_13->mli_rv = VAR_4;
 VAR_13->mli_qi = VAR_2;
 VAR_13->mli_qri = VAR_3;
 VAR_13->mli_uri = VAR_5;
 FUNC_5(&VAR_13->mli_gq, VAR_1);

 FUNC_1(&VAR_10, VAR_13, VAR_11);

 FUNC_0(VAR_0, "allocate mld_ifsoftc for ifp %p(%s)",
      VAR_12, FUNC_3(VAR_12));

out:
 return (VAR_13);
}
