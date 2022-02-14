
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_api_object {int dummy; } ;
struct ib_uverbs_file {int idr; } ;
struct ib_uobject {int ref; } ;
typedef scalar_t__ s64 ;
typedef enum rdma_lookup_mode { ____Placeholder_rdma_lookup_mode } rdma_lookup_mode ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_uobject* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct ib_uobject* FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static struct ib_uobject *
FUNC_5(const struct uverbs_api_object *VAR_3,
         struct ib_uverbs_file *VAR_4, s64 VAR_5,
         enum rdma_lookup_mode VAR_6)
{
 struct ib_uobject *VAR_7;

 if (VAR_5 < 0 || VAR_5 > VAR_2)
  return FUNC_0(-VAR_0);

 FUNC_2();






 VAR_7 = FUNC_4(&VAR_4->idr, VAR_5);
 if (!VAR_7 || !FUNC_1(&VAR_7->ref))
  VAR_7 = FUNC_0(-VAR_1);
 FUNC_3();
 return VAR_7;
}
