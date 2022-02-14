
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vmw_resource {int id; scalar_t__ backup_size; struct vmw_private* dev_priv; } ;
struct vmw_private {int used_memory_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (struct vmw_private*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct vmw_private*,int ) ;
 int FUNC_4 (struct vmw_private*) ;
 int FUNC_5 (struct vmw_resource*) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct vmw_resource *VAR_1)
{
 struct vmw_private *VAR_2 = VAR_1->dev_priv;
 uint32_t VAR_3;
 uint8_t *VAR_4;

 FUNC_0(VAR_1->id == -1);





 VAR_3 = FUNC_7();
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (FUNC_2(!VAR_4))
  return -VAR_0;

 FUNC_6(VAR_1->id, VAR_4);
 FUNC_3(VAR_2, VAR_3);





 VAR_2->used_memory_size -= VAR_1->backup_size;





 FUNC_5(VAR_1);
 FUNC_4(VAR_2);

 return 0;
}
