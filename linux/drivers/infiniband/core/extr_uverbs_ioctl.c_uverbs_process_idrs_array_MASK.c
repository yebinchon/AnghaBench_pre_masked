
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct uverbs_objs_arr_attr {size_t len; int ** uobjects; } ;
struct TYPE_5__ {size_t min_len; size_t max_len; int access; int obj_type; } ;
struct TYPE_6__ {TYPE_2__ objs_arr; } ;
struct uverbs_attr_spec {TYPE_3__ u2; } ;
struct uverbs_api_attr {struct uverbs_attr_spec spec; } ;
struct TYPE_4__ {scalar_t__ reserved; } ;
struct ib_uverbs_attr {int len; int data; TYPE_1__ attr_data; } ;
struct bundle_priv {int spec_finalize; int bundle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (size_t,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct bundle_priv *VAR_2,
         const struct uverbs_api_attr *VAR_3,
         struct uverbs_objs_arr_attr *VAR_4,
         struct ib_uverbs_attr *VAR_5,
         u32 VAR_6)
{
 const struct uverbs_attr_spec *VAR_7 = &VAR_3->spec;
 size_t VAR_8;
 u32 *VAR_9;
 int VAR_10 = 0;
 size_t VAR_11;

 if (VAR_5->attr_data.reserved)
  return -VAR_1;

 if (VAR_5->len % sizeof(u32))
  return -VAR_1;

 VAR_8 = VAR_5->len / sizeof(u32);
 if (VAR_8 < VAR_7->u2.objs_arr.min_len ||
     VAR_8 > VAR_7->u2.objs_arr.max_len)
  return -VAR_1;

 VAR_4->uobjects =
  FUNC_7(&VAR_2->bundle,
        FUNC_3(VAR_8, sizeof(*VAR_4->uobjects)));
 if (FUNC_0(*VAR_4->uobjects))
  return FUNC_1(*VAR_4->uobjects);







 VAR_9 = (u32 *)(VAR_4->uobjects + VAR_8) - VAR_8;

 if (VAR_5->len > sizeof(VAR_5->data)) {
  VAR_10 = FUNC_4(VAR_9, FUNC_6(VAR_5->data),
         VAR_5->len);
  if (VAR_10)
   return -VAR_0;
 } else {
  FUNC_5(VAR_9, &VAR_5->data, VAR_5->len);
 }

 for (VAR_11 = 0; VAR_11 != VAR_8; VAR_11++) {
  VAR_4->uobjects[VAR_11] = FUNC_8(
   VAR_7->u2.objs_arr.obj_type, VAR_7->u2.objs_arr.access,
   VAR_9[VAR_11], &VAR_2->bundle);
  if (FUNC_0(VAR_4->uobjects[VAR_11])) {
   VAR_10 = FUNC_1(VAR_4->uobjects[VAR_11]);
   break;
  }
 }

 VAR_4->len = VAR_11;
 FUNC_2(VAR_6, VAR_2->spec_finalize);
 return VAR_10;
}
