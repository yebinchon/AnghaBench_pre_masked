
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct frame {unsigned int level; TYPE_2__* n; scalar_t__ current_child; void* nr_children; int b; } ;
struct del_stack {int top; int info; int tm; struct frame* spine; } ;
typedef int dm_block_t ;
struct TYPE_3__ {int flags; int nr_entries; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (int ,int ,int*) ;
 scalar_t__ FUNC_5 (int ,struct frame*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct del_stack*,struct frame*) ;

__attribute__((used)) static int FUNC_8(struct del_stack *VAR_4, dm_block_t VAR_5, unsigned VAR_6)
{
 int VAR_7;
 uint32_t VAR_8;

 if (VAR_4->top >= VAR_2 - 1) {
  FUNC_0("btree deletion stack out of memory");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_4->tm, VAR_5, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 > 1)




  FUNC_2(VAR_4->tm, VAR_5);

 else {
  uint32_t VAR_9;
  struct frame *VAR_10 = VAR_4->spine + ++VAR_4->top;

  VAR_7 = FUNC_3(VAR_4->tm, VAR_5, &VAR_3, &VAR_10->b);
  if (VAR_7) {
   VAR_4->top--;
   return VAR_7;
  }

  VAR_10->n = FUNC_1(VAR_10->b);
  VAR_10->level = VAR_6;
  VAR_10->nr_children = FUNC_6(VAR_10->n->header.nr_entries);
  VAR_10->current_child = 0;

  VAR_9 = FUNC_6(VAR_10->n->header.flags);
  if (VAR_9 & VAR_1 || FUNC_5(VAR_4->info, VAR_10))
   FUNC_7(VAR_4, VAR_10);
 }

 return 0;
}
