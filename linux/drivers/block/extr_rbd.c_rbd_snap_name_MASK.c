
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rbd_device {int image_format; } ;


 scalar_t__ VAR_0 ;
 char const* VAR_1 ;
 int FUNC_0 (int ) ;
 char const* FUNC_1 (struct rbd_device*,scalar_t__) ;
 char const* FUNC_2 (struct rbd_device*,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static const char *FUNC_4(struct rbd_device *VAR_2, u64 VAR_3)
{
 if (VAR_3 == VAR_0)
  return VAR_1;

 FUNC_0(FUNC_3(VAR_2->image_format));
 if (VAR_2->image_format == 1)
  return FUNC_1(VAR_2, VAR_3);

 return FUNC_2(VAR_2, VAR_3);
}
