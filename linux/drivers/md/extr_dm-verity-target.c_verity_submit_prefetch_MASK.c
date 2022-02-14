
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_verity_prefetch_work {int work; int n_blocks; int block; struct dm_verity* v; } ;
struct dm_verity_io {int n_blocks; int block; } ;
struct dm_verity {int verify_wq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dm_verity_prefetch_work* FUNC_1 (int,int) ;
 int FUNC_2 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct dm_verity *VAR_5, struct dm_verity_io *VAR_6)
{
 struct dm_verity_prefetch_work *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct dm_verity_prefetch_work),
  VAR_0 | VAR_2 | VAR_1 | VAR_3);

 if (!VAR_7)
  return;

 FUNC_0(&VAR_7->work, VAR_4);
 VAR_7->v = VAR_5;
 VAR_7->block = VAR_6->block;
 VAR_7->n_blocks = VAR_6->n_blocks;
 FUNC_2(VAR_5->verify_wq, &VAR_7->work);
}
