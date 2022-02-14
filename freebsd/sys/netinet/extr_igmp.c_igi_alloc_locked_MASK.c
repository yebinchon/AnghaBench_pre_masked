
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igmp_ifsoftc {int igi_gq; int igi_uri; int igi_qri; int igi_qi; int igi_rv; scalar_t__ igi_flags; int igi_version; struct ifnet* igi_ifp; } ;
struct ifnet {int if_xname; } ;


 int FUNC_0 (int ,char*,struct ifnet*,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,struct igmp_ifsoftc*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct igmp_ifsoftc* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static struct igmp_ifsoftc *
FUNC_5( struct ifnet *VAR_12)
{
 struct igmp_ifsoftc *VAR_13;

 FUNC_1();

 VAR_13 = FUNC_3(sizeof(struct igmp_ifsoftc), VAR_6, VAR_7|VAR_8);
 if (VAR_13 == ((void*)0))
  goto out;

 VAR_13->igi_ifp = VAR_12;
 VAR_13->igi_version = VAR_10;
 VAR_13->igi_flags = 0;
 VAR_13->igi_rv = VAR_3;
 VAR_13->igi_qi = VAR_1;
 VAR_13->igi_qri = VAR_2;
 VAR_13->igi_uri = VAR_4;
 FUNC_4(&VAR_13->igi_gq, VAR_0);

 FUNC_2(&VAR_9, VAR_13, VAR_11);

 FUNC_0(VAR_5, "allocate igmp_ifsoftc for ifp %p(%s)",
      VAR_12, VAR_12->if_xname);

out:
 return (VAR_13);
}
