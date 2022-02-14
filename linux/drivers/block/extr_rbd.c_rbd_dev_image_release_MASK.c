
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_device {TYPE_1__* spec; scalar_t__ image_format; scalar_t__ opts; } ;
struct TYPE_2__ {int * image_id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct rbd_device*) ;

__attribute__((used)) static void FUNC_3(struct rbd_device *VAR_0)
{
 FUNC_1(VAR_0);
 if (VAR_0->opts)
  FUNC_2(VAR_0);
 VAR_0->image_format = 0;
 FUNC_0(VAR_0->spec->image_id);
 VAR_0->spec->image_id = ((void*)0);
}
