
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct parent_image_info {int snap_id; int * image_id; int * pool_ns; int pool_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void**,void*,int ,int ) ;
 void* FUNC_3 (void**,void*,int *,int ) ;
 int FUNC_4 (void**,void*,int,char*,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(void **VAR_3, void *VAR_4,
        struct parent_image_info *VAR_5)
{
 u8 VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_3, VAR_4, 1, "ParentImageSpec",
      &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_3, VAR_4, VAR_5->pool_id, VAR_2);
 VAR_5->pool_ns = FUNC_3(VAR_3, VAR_4, ((void*)0), VAR_1);
 if (FUNC_0(VAR_5->pool_ns)) {
  VAR_8 = FUNC_1(VAR_5->pool_ns);
  VAR_5->pool_ns = ((void*)0);
  return VAR_8;
 }
 VAR_5->image_id = FUNC_3(VAR_3, VAR_4, ((void*)0), VAR_1);
 if (FUNC_0(VAR_5->image_id)) {
  VAR_8 = FUNC_1(VAR_5->image_id);
  VAR_5->image_id = ((void*)0);
  return VAR_8;
 }
 FUNC_2(VAR_3, VAR_4, VAR_5->snap_id, VAR_2);
 return 0;

e_inval:
 return -VAR_0;
}
