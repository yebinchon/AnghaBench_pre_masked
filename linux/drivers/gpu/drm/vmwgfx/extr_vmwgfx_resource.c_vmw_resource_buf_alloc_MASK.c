
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_resource {struct vmw_buffer_object* backup; TYPE_2__* func; int backup_size; int dev_priv; } ;
struct TYPE_3__ {unsigned long num_pages; } ;
struct vmw_buffer_object {TYPE_1__ base; } ;
struct TYPE_4__ {int backup_placement; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 struct vmw_buffer_object* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct vmw_buffer_object*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int ,struct vmw_buffer_object*,int ,int ,int,int *) ;

__attribute__((used)) static int FUNC_5(struct vmw_resource *VAR_5,
      bool VAR_6)
{
 unsigned long VAR_7 =
  (VAR_5->backup_size + VAR_3 - 1) & VAR_2;
 struct vmw_buffer_object *VAR_8;
 int VAR_9;

 if (FUNC_2(VAR_5->backup)) {
  FUNC_0(VAR_5->backup->base.num_pages * VAR_3 < VAR_7);
  return 0;
 }

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (FUNC_3(!VAR_8))
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_5->dev_priv, VAR_8, VAR_5->backup_size,
         VAR_5->func->backup_placement,
         VAR_6,
         &VAR_4);
 if (FUNC_3(VAR_9 != 0))
  goto out_no_bo;

 VAR_5->backup = VAR_8;

out_no_bo:
 return VAR_9;
}
