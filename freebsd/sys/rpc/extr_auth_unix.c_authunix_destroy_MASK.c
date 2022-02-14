
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int oa_length; TYPE_4__* oa_base; } ;
struct TYPE_10__ {int oa_length; TYPE_4__* oa_base; } ;
struct audata {TYPE_1__ au_shcred; TYPE_3__ au_origcred; int au_refs; } ;
struct TYPE_9__ {int oa_length; TYPE_4__* oa_base; } ;
struct TYPE_11__ {TYPE_2__ ah_verf; struct TYPE_11__* ah_private; } ;
typedef TYPE_4__ AUTH ;


 struct audata* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(AUTH *VAR_0)
{
 struct audata *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 if (!FUNC_2(&VAR_1->au_refs))
  return;

 FUNC_1(VAR_1->au_origcred.oa_base, VAR_1->au_origcred.oa_length);

 if (VAR_1->au_shcred.oa_base != ((void*)0))
  FUNC_1(VAR_1->au_shcred.oa_base, VAR_1->au_shcred.oa_length);

 FUNC_1(VAR_0->ah_private, sizeof(struct audata));

 if (VAR_0->ah_verf.oa_base != ((void*)0))
  FUNC_1(VAR_0->ah_verf.oa_base, VAR_0->ah_verf.oa_length);

 FUNC_1(VAR_0, sizeof(*VAR_0));
}
