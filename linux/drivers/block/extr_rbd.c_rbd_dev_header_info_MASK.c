
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int image_format; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct rbd_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rbd_device *VAR_0)
{
 FUNC_0(FUNC_3(VAR_0->image_format));

 if (VAR_0->image_format == 1)
  return FUNC_1(VAR_0);

 return FUNC_2(VAR_0);
}
