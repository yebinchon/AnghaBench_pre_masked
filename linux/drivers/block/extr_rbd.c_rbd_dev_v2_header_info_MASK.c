
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * object_prefix; } ;
struct rbd_device {TYPE_1__ header; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct rbd_device*) ;
 int FUNC_3 (struct rbd_device*) ;

__attribute__((used)) static int FUNC_4(struct rbd_device *VAR_0)
{
 bool VAR_1 = VAR_0->header.object_prefix == ((void*)0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;

 if (VAR_1) {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 && VAR_1) {
  FUNC_0(VAR_0->header.object_prefix);
  VAR_0->header.object_prefix = ((void*)0);
 }

 return VAR_2;
}
