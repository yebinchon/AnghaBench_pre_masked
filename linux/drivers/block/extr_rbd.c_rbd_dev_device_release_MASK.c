
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int name; int major; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rbd_device*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rbd_device *VAR_2)
{
 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_1(VAR_2);
 if (!VAR_1)
  FUNC_2(VAR_2->major, VAR_2->name);
}
