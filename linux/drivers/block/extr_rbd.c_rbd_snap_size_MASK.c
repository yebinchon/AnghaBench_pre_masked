
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct TYPE_2__ {scalar_t__ image_size; scalar_t__* snap_sizes; } ;
struct rbd_device {int image_format; TYPE_1__ header; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rbd_device*,scalar_t__,int *,scalar_t__*) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (struct rbd_device*,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rbd_device *VAR_3, u64 VAR_4,
    u64 *VAR_5)
{
 FUNC_1(FUNC_3(VAR_3->image_format));
 if (VAR_4 == VAR_1) {
  *VAR_5 = VAR_3->header.image_size;
 } else if (VAR_3->image_format == 1) {
  u32 VAR_6;

  VAR_6 = FUNC_2(VAR_3, VAR_4);
  if (VAR_6 == VAR_0)
   return -VAR_2;

  *VAR_5 = VAR_3->header.snap_sizes[VAR_6];
 } else {
  u64 VAR_7 = 0;
  int VAR_8;

  VAR_8 = FUNC_0(VAR_3, VAR_4, ((void*)0), &VAR_7);
  if (VAR_8)
   return VAR_8;

  *VAR_5 = VAR_7;
 }
 return 0;
}
