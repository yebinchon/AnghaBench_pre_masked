
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_space_map {int dummy; } ;
struct sm_disk {struct dm_space_map sm; int ll; scalar_t__ nr_allocated_this_transaction; scalar_t__ begin; } ;
struct dm_transaction_manager {int dummy; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 struct dm_space_map* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct sm_disk*) ;
 struct sm_disk* FUNC_2 (int,int ) ;
 int FUNC_3 (struct dm_space_map*,int *,int) ;
 int VAR_2 ;
 int FUNC_4 (struct dm_space_map*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct dm_transaction_manager*) ;

struct dm_space_map *FUNC_7(struct dm_transaction_manager *VAR_3,
           dm_block_t VAR_4)
{
 int VAR_5;
 struct sm_disk *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->begin = 0;
 VAR_6->nr_allocated_this_transaction = 0;
 FUNC_3(&VAR_6->sm, &VAR_2, sizeof(VAR_6->sm));

 VAR_5 = FUNC_6(&VAR_6->ll, VAR_3);
 if (VAR_5)
  goto bad;

 VAR_5 = FUNC_5(&VAR_6->ll, VAR_4);
 if (VAR_5)
  goto bad;

 VAR_5 = FUNC_4(&VAR_6->sm);
 if (VAR_5)
  goto bad;

 return &VAR_6->sm;

bad:
 FUNC_1(VAR_6);
 return FUNC_0(VAR_5);
}
