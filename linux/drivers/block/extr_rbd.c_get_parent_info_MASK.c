
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_device {TYPE_1__* spec; } ;
struct parent_image_info {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int snap_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct rbd_device*,struct page*,struct page*,struct parent_image_info*) ;
 int FUNC_2 (struct rbd_device*,struct page*,struct page*,struct parent_image_info*) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (void**,int ) ;
 void* FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct rbd_device *VAR_2,
      struct parent_image_info *VAR_3)
{
 struct page *VAR_4, *VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_3(VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_1);
 if (!VAR_5) {
  FUNC_0(VAR_4);
  return -VAR_0;
 }

 VAR_6 = FUNC_5(VAR_4);
 FUNC_4(&VAR_6, VAR_2->spec->snap_id);
 VAR_7 = FUNC_1(VAR_2, VAR_4, VAR_5, VAR_3);
 if (VAR_7 > 0)
  VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_5,
            VAR_3);

 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 return VAR_7;
}
