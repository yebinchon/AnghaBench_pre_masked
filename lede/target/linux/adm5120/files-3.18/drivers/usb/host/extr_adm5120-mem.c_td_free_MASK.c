
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td {int hwINFO; int flags; int td_dma; struct td* td_hash; } ;
struct admhcd {int td_cache; struct td** td_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct admhcd*,char*,struct td*) ;
 int FUNC_2 (struct admhcd*,int ) ;
 int FUNC_3 (int ,struct td*,int ) ;

__attribute__((used)) static void FUNC_4(struct admhcd *VAR_2, struct td *VAR_3)
{
 struct td **VAR_4 = &VAR_2->td_hash[FUNC_0(VAR_3->td_dma)];

 while (*VAR_4 && *VAR_4 != VAR_3)
  VAR_4 = &(*VAR_4)->td_hash;
 if (*VAR_4)
  *VAR_4 = VAR_3->td_hash;





 else if ((VAR_3->flags & VAR_1) != 0)
  FUNC_1(VAR_2, "no hash for td %p\n", VAR_3);

 FUNC_3(VAR_2->td_cache, VAR_3, VAR_3->td_dma);
}
