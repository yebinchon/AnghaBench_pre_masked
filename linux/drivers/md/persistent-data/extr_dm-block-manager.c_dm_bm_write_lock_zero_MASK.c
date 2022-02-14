
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_buffer {int dummy; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block_manager {int bufio; scalar_t__ read_only; } ;
struct dm_block {int dummy; } ;
struct buffer_aux {int write_locked; struct dm_block_validator* validator; int lock; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dm_block_manager*) ;
 struct buffer_aux* FUNC_4 (int ) ;
 void* FUNC_5 (int ,int ,struct dm_buffer**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int ,int ) ;
 int FUNC_8 (struct dm_block*) ;

int FUNC_9(struct dm_block_manager *VAR_1,
     dm_block_t VAR_2, struct dm_block_validator *VAR_3,
     struct dm_block **VAR_4)
{
 int VAR_5;
 struct buffer_aux *VAR_6;
 void *VAR_7;

 if (VAR_1->read_only)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_1->bufio, VAR_2, (struct dm_buffer **) VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_7(VAR_7, 0, FUNC_3(VAR_1));

 VAR_6 = FUNC_4(FUNC_8(*VAR_4));
 VAR_5 = FUNC_2(&VAR_6->lock);
 if (VAR_5) {
  FUNC_6(FUNC_8(*VAR_4));
  return VAR_5;
 }

 VAR_6->write_locked = 1;
 VAR_6->validator = VAR_3;

 return 0;
}
