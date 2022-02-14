
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct uverbs_api_object {int dummy; } ;
struct uverbs_api {int radix; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct uverbs_api_object const* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 struct uverbs_api_object* FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline const struct uverbs_api_object *
FUNC_3(struct uverbs_api *VAR_3, u16 VAR_4)
{
 const struct uverbs_api_object *VAR_5;

 if (VAR_4 == VAR_2)
  return FUNC_0(-VAR_1);

 VAR_5 = FUNC_1(&VAR_3->radix, FUNC_2(VAR_4));
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 return VAR_5;
}
