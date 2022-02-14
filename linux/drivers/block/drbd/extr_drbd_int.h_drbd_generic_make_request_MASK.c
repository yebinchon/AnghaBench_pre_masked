
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int dummy; } ;
struct bio {int bi_status; int bi_disk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct drbd_device*,char*) ;
 scalar_t__ FUNC_4 (struct drbd_device*,int) ;
 int FUNC_5 (struct bio*) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_6(struct drbd_device *VAR_2,
          int VAR_3, struct bio *VAR_4)
{
 FUNC_0(VAR_1);
 if (!VAR_4->bi_disk) {
  FUNC_3(VAR_2, "drbd_generic_make_request: bio->bi_disk == NULL\n");
  VAR_4->bi_status = VAR_0;
  FUNC_1(VAR_4);
  return;
 }

 if (FUNC_4(VAR_2, VAR_3))
  FUNC_2(VAR_4);
 else
  FUNC_5(VAR_4);
}
