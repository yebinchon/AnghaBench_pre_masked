
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rbd_device {int image_format; } ;


 int FUNC_0 (struct rbd_device*,char const*) ;
 int FUNC_1 (struct rbd_device*,char const*) ;

__attribute__((used)) static u64 FUNC_2(struct rbd_device *VAR_0, const char *VAR_1)
{
 if (VAR_0->image_format == 1)
  return FUNC_0(VAR_0, VAR_1);

 return FUNC_1(VAR_0, VAR_1);
}
