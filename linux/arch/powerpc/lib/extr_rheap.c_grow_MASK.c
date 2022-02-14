
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int max_blocks; int flags; int empty_slots; int empty_list; TYPE_2__* block; int taken_list; int free_list; } ;
typedef TYPE_1__ rh_info_t ;
struct TYPE_9__ {int list; } ;
typedef TYPE_2__ rh_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,unsigned long,int,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(rh_info_t * VAR_4, int VAR_5)
{
 rh_block_t *VAR_6, *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;
 unsigned long VAR_11, VAR_12;

 if (VAR_5 <= VAR_4->max_blocks)
  return -VAR_0;

 VAR_9 = VAR_5 - VAR_4->max_blocks;

 VAR_6 = FUNC_2(VAR_5, sizeof(rh_block_t), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 if (VAR_4->max_blocks > 0) {


  FUNC_4(VAR_6, VAR_4->block,
         sizeof(rh_block_t) * VAR_4->max_blocks);

  VAR_10 = (char *)VAR_6 - (char *)VAR_4->block;


  VAR_11 = (unsigned long)VAR_4->block;
  VAR_12 = (unsigned long)(VAR_4->block + VAR_4->max_blocks);

  for (VAR_8 = 0, VAR_7 = VAR_6; VAR_8 < VAR_4->max_blocks; VAR_8++, VAR_7++)
   FUNC_0(VAR_11, VAR_12, VAR_10, &VAR_7->list);

  FUNC_0(VAR_11, VAR_12, VAR_10, &VAR_4->empty_list);
  FUNC_0(VAR_11, VAR_12, VAR_10, &VAR_4->free_list);
  FUNC_0(VAR_11, VAR_12, VAR_10, &VAR_4->taken_list);


  if ((VAR_4->flags & VAR_3) == 0)
   FUNC_1(VAR_4->block);
 }

 VAR_4->block = VAR_6;
 VAR_4->empty_slots += VAR_9;
 VAR_4->max_blocks = VAR_5;
 VAR_4->flags &= ~VAR_3;


 VAR_7 = VAR_6 + VAR_4->max_blocks - VAR_9;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++, VAR_7++)
  FUNC_3(&VAR_7->list, &VAR_4->empty_list);

 return 0;
}
