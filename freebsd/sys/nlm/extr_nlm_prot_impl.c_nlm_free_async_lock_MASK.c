
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct nlm_async_lock {scalar_t__ af_vp; int af_granted; scalar_t__ af_rpc; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct nlm_async_lock*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct nlm_async_lock *VAR_2)
{



 if (VAR_2->af_rpc)
  FUNC_0(VAR_2->af_rpc);
 FUNC_3((xdrproc_t) VAR_1, &VAR_2->af_granted);
 if (VAR_2->af_vp)
  FUNC_2(VAR_2->af_vp);
 FUNC_1(VAR_2, VAR_0);
}
