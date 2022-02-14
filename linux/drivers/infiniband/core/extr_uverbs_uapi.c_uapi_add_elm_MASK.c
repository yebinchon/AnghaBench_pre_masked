
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uverbs_api {int radix; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *,scalar_t__,void*) ;

__attribute__((used)) static void *FUNC_4(struct uverbs_api *VAR_4, u32 VAR_5, size_t VAR_6)
{
 void *VAR_7;
 int VAR_8;

 if (VAR_5 == VAR_3)
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_2(VAR_6, VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_0);
 VAR_8 = FUNC_3(&VAR_4->radix, VAR_5, VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_7);
  return FUNC_0(VAR_8);
 }

 return VAR_7;
}
