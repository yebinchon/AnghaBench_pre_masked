
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rbd_obj_request {int num_img_extents; int img_extents; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static u64 FUNC_1(struct rbd_obj_request *VAR_0)
{
 return FUNC_0(VAR_0->img_extents,
           VAR_0->num_img_extents);
}
