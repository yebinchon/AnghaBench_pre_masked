
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int reservation_sem; } ;
struct vmw_buffer_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmw_buffer_object* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct vmw_private*,struct vmw_buffer_object*,size_t,int *,int,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct vmw_private *VAR_4,
       size_t VAR_5, struct vmw_buffer_object **VAR_6)
{
 struct vmw_buffer_object *VAR_7;
 int VAR_8;

 (void) FUNC_1(&VAR_4->reservation_sem, 0);

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto err_unlock;
 }

 VAR_8 = FUNC_4(VAR_4, VAR_7, VAR_5,
         &VAR_3,
         0,
         &VAR_2);
 if (FUNC_3(VAR_8 != 0))
  goto err_unlock;

 *VAR_6 = VAR_7;
 FUNC_2(&VAR_4->reservation_sem);

 return 0;

err_unlock:
 FUNC_2(&VAR_4->reservation_sem);
 return VAR_8;
}
