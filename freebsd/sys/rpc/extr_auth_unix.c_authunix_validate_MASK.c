
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct opaque_auth {scalar_t__ oa_flavor; int oa_length; int oa_base; } ;
struct mbuf {int dummy; } ;
struct TYPE_11__ {int * oa_base; int oa_length; } ;
struct audata {TYPE_5__ au_origcred; TYPE_5__ au_shcred; } ;
typedef int bool_t ;
struct TYPE_9__ {int x_op; } ;
typedef TYPE_1__ XDR ;
struct TYPE_10__ {TYPE_5__ ah_cred; } ;
typedef TYPE_2__ AUTH ;


 struct audata* FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static bool_t
FUNC_5(AUTH *VAR_4, uint32_t VAR_5, struct opaque_auth *VAR_6,
    struct mbuf **VAR_7)
{
 struct audata *VAR_8;
 XDR VAR_9;

 if (!VAR_6)
  return (VAR_1);

 if (VAR_6->oa_flavor == VAR_0) {
  VAR_8 = FUNC_0(VAR_4);
  FUNC_4(&VAR_9, VAR_6->oa_base, VAR_6->oa_length,
      VAR_2);

  if (VAR_8->au_shcred.oa_base != ((void*)0)) {
   FUNC_2(VAR_8->au_shcred.oa_base,
       VAR_8->au_shcred.oa_length);
   VAR_8->au_shcred.oa_base = ((void*)0);
  }
  if (FUNC_3(&VAR_9, &VAR_8->au_shcred)) {
   VAR_4->ah_cred = VAR_8->au_shcred;
  } else {
   VAR_9.x_op = VAR_3;
   (void)FUNC_3(&VAR_9, &VAR_8->au_shcred);
   VAR_8->au_shcred.oa_base = ((void*)0);
   VAR_4->ah_cred = VAR_8->au_origcred;
  }
  FUNC_1(VAR_4);
 }

 return (VAR_1);
}
