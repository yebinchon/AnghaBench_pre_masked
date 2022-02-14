
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int dummy; } ;
struct page {int dummy; } ;
typedef enum rbd_notify_op { ____Placeholder_rbd_notify_op } rbd_notify_op ;


 int FUNC_0 (struct rbd_device*,int,struct page***,size_t*) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (struct page**,int ) ;

__attribute__((used)) static void FUNC_3(struct rbd_device *VAR_0,
          enum rbd_notify_op VAR_1)
{
 struct page **VAR_2;
 size_t VAR_3;

 FUNC_0(VAR_0, VAR_1, &VAR_2, &VAR_3);
 FUNC_2(VAR_2, FUNC_1(0, VAR_3));
}
