
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfr_ktable {TYPE_1__* pfrkt_root; } ;
struct TYPE_2__ {int pfrkt_flags; int * pfrkt_refcnt; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,struct pfr_ktable*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(struct pfr_ktable *VAR_5)
{

 FUNC_0();

 FUNC_1(VAR_4, &VAR_3, VAR_5);
 VAR_2++;
 if (VAR_5->pfrkt_root != ((void*)0))
  if (!VAR_5->pfrkt_root->pfrkt_refcnt[VAR_0]++)
   FUNC_2(VAR_5->pfrkt_root,
       VAR_5->pfrkt_root->pfrkt_flags|VAR_1);
}
