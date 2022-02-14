
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bop_ring_buffer {int end; unsigned int begin; struct block_op* bops; } ;
struct block_op {int type; int block; } ;
typedef enum block_op_type { ____Placeholder_block_op_type } block_op_type ;
typedef int dm_block_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct bop_ring_buffer*,int) ;

__attribute__((used)) static int FUNC_1(struct bop_ring_buffer *VAR_1,
      enum block_op_type VAR_2, dm_block_t VAR_3)
{
 struct block_op *VAR_4;
 unsigned VAR_5 = FUNC_0(VAR_1, VAR_1->end);





 if (VAR_5 == VAR_1->begin)
  return -VAR_0;

 VAR_4 = VAR_1->bops + VAR_1->end;
 VAR_4->type = VAR_2;
 VAR_4->block = VAR_3;

 VAR_1->end = VAR_5;

 return 0;
}
