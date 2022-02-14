
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct subpage_prot_table {int dummy; } ;
struct TYPE_11__ {scalar_t__ id; TYPE_4__* hash_context; } ;
struct mm_struct {TYPE_3__ context; } ;
struct hash_mm_context {int dummy; } ;
struct TYPE_14__ {TYPE_2__* mm; } ;
struct TYPE_13__ {scalar_t__ spt; } ;
struct TYPE_12__ {struct TYPE_12__* spt; } ;
struct TYPE_9__ {TYPE_6__* hash_context; } ;
struct TYPE_10__ {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*,int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct mm_struct*) ;

__attribute__((used)) static int FUNC_7(struct mm_struct *VAR_3)
{
 int VAR_4;

 VAR_3->context.hash_context = FUNC_1(sizeof(struct hash_mm_context),
        VAR_1);
 if (!VAR_3->context.hash_context)
  return -VAR_0;
 if (VAR_3->context.id == 0) {
  FUNC_3(VAR_3->context.hash_context, 0, sizeof(struct hash_mm_context));
  FUNC_6(VAR_3);
 } else {

  FUNC_2(VAR_3->context.hash_context, VAR_2->mm->context.hash_context, sizeof(struct hash_mm_context));
 }

 VAR_4 = FUNC_5(&VAR_3->context);
 if (VAR_4 < 0) {



  FUNC_0(VAR_3->context.hash_context);
  return VAR_4;
 }

 FUNC_4(VAR_3);
 return VAR_4;
}
