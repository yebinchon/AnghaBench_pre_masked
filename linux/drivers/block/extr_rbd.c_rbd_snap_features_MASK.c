
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ features; } ;
struct rbd_device {int image_format; TYPE_1__ header; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rbd_device*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct rbd_device *VAR_1, u64 VAR_2,
   u64 *VAR_3)
{
 FUNC_1(FUNC_2(VAR_1->image_format));
 if (VAR_2 == VAR_0) {
  *VAR_3 = VAR_1->header.features;
 } else if (VAR_1->image_format == 1) {
  *VAR_3 = 0;
 } else {
  u64 VAR_4 = 0;
  int VAR_5;

  VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_4);
  if (VAR_5)
   return VAR_5;

  *VAR_3 = VAR_4;
 }
 return 0;
}
