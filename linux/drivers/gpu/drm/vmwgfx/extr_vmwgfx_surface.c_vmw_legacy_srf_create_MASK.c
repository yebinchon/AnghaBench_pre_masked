
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vmw_surface {int dummy; } ;
struct vmw_resource {int id; scalar_t__ backup_size; struct vmw_private* dev_priv; } ;
struct vmw_private {scalar_t__ used_memory_size; scalar_t__ memory_size; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (struct vmw_private*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vmw_private*,int ) ;
 int FUNC_5 (struct vmw_private*) ;
 struct vmw_surface* FUNC_6 (struct vmw_resource*) ;
 int FUNC_7 (struct vmw_resource*) ;
 int FUNC_8 (struct vmw_resource*) ;
 int FUNC_9 (struct vmw_surface*,int *) ;
 int FUNC_10 (struct vmw_surface*) ;

__attribute__((used)) static int FUNC_11(struct vmw_resource *VAR_3)
{
 struct vmw_private *VAR_4 = VAR_3->dev_priv;
 struct vmw_surface *VAR_5;
 uint32_t VAR_6;
 uint8_t *VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_3->id != -1))
  return 0;

 VAR_5 = FUNC_6(VAR_3);
 if (FUNC_3(VAR_4->used_memory_size + VAR_3->backup_size >=
       VAR_4->memory_size))
  return -VAR_0;





 VAR_8 = FUNC_7(VAR_3);
 if (FUNC_3(VAR_8 != 0)) {
  FUNC_0("Failed to allocate a surface id.\n");
  goto out_no_id;
 }

 if (FUNC_3(VAR_3->id >= VAR_2)) {
  VAR_8 = -VAR_0;
  goto out_no_fifo;
 }





 VAR_6 = FUNC_10(VAR_5);
 VAR_7 = FUNC_1(VAR_4, VAR_6);
 if (FUNC_3(!VAR_7)) {
  VAR_8 = -VAR_1;
  goto out_no_fifo;
 }

 FUNC_9(VAR_5, VAR_7);
 FUNC_4(VAR_4, VAR_6);
 FUNC_5(VAR_4);





 VAR_4->used_memory_size += VAR_3->backup_size;
 return 0;

out_no_fifo:
 FUNC_8(VAR_3);
out_no_id:
 return VAR_8;
}
