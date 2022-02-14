
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {scalar_t__ pin_count; struct vmw_buffer_object* backup; struct vmw_private* dev_priv; } ;
struct vmw_private {int reservation_sem; int cmdbuf_mutex; } ;
struct vmw_buffer_object {int base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vmw_buffer_object*,int) ;
 int FUNC_8 (struct vmw_resource*,int,int) ;
 int FUNC_9 (struct vmw_resource*,int,int,int,int *,unsigned long) ;

void FUNC_10(struct vmw_resource *VAR_0)
{
 struct vmw_private *VAR_1 = VAR_0->dev_priv;
 int VAR_2;

 (void) FUNC_5(&VAR_1->reservation_sem, 0);
 FUNC_1(&VAR_1->cmdbuf_mutex);

 VAR_2 = FUNC_8(VAR_0, 0, 1);
 FUNC_0(VAR_2);

 FUNC_0(VAR_0->pin_count == 0);
 if (--VAR_0->pin_count == 0 && VAR_0->backup) {
  struct vmw_buffer_object *VAR_3 = VAR_0->backup;

  (void) FUNC_3(&VAR_3->base, 0, 0, ((void*)0));
  FUNC_7(VAR_3, 0);
  FUNC_4(&VAR_3->base);
 }

 FUNC_9(VAR_0, 0, 0, 0, ((void*)0), 0UL);

 FUNC_2(&VAR_1->cmdbuf_mutex);
 FUNC_6(&VAR_1->reservation_sem);
}
