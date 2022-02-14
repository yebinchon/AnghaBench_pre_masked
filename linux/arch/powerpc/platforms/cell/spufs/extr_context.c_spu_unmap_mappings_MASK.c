
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {int mapping_lock; scalar_t__ psmap; scalar_t__ mss; scalar_t__ signal2; scalar_t__ signal1; scalar_t__ cntl; scalar_t__ mfc; scalar_t__ local_store; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ,int ,int) ;

void FUNC_3(struct spu_context *VAR_6)
{
 FUNC_0(&VAR_6->mapping_lock);
 if (VAR_6->local_store)
  FUNC_2(VAR_6->local_store, 0, VAR_0, 1);
 if (VAR_6->mfc)
  FUNC_2(VAR_6->mfc, 0, VAR_2, 1);
 if (VAR_6->cntl)
  FUNC_2(VAR_6->cntl, 0, VAR_1, 1);
 if (VAR_6->signal1)
  FUNC_2(VAR_6->signal1, 0, VAR_5, 1);
 if (VAR_6->signal2)
  FUNC_2(VAR_6->signal2, 0, VAR_5, 1);
 if (VAR_6->mss)
  FUNC_2(VAR_6->mss, 0, VAR_3, 1);
 if (VAR_6->psmap)
  FUNC_2(VAR_6->psmap, 0, VAR_4, 1);
 FUNC_1(&VAR_6->mapping_lock);
}
