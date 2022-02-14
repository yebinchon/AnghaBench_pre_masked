
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_ifinfo {int initialized; int flags; int retrans; int basereachable; int reachable; int chlim; } ;
struct ifnet {scalar_t__ if_type; int if_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 struct nd_ifinfo* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct ifnet*,struct nd_ifinfo*) ;

struct nd_ifinfo *
FUNC_3(struct ifnet *VAR_15)
{
 struct nd_ifinfo *VAR_16;

 VAR_16 = FUNC_1(sizeof(*VAR_16), VAR_3, VAR_4 | VAR_5);
 VAR_16->initialized = 1;

 VAR_16->chlim = VAR_2;
 VAR_16->basereachable = VAR_10;
 VAR_16->reachable = FUNC_0(VAR_16->basereachable);
 VAR_16->retrans = VAR_11;

 VAR_16->flags = VAR_9;






 if ((VAR_13 && VAR_15->if_type != VAR_1) ||
     (VAR_15->if_flags & VAR_0))
  VAR_16->flags |= VAR_7;







 if (VAR_12 &&
     !(VAR_15->if_flags & VAR_0) &&
     (VAR_15->if_type != VAR_1))
   VAR_16->flags |= VAR_6;
 if (VAR_14 && !(VAR_15->if_flags & VAR_0))
  VAR_16->flags |= VAR_8;


 FUNC_2(VAR_15, VAR_16);

 return VAR_16;
}
