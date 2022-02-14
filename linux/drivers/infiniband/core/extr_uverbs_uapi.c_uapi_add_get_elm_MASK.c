
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uverbs_api {int radix; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int *,int ) ;
 void* FUNC_4 (struct uverbs_api*,int ,size_t) ;

__attribute__((used)) static void *FUNC_5(struct uverbs_api *VAR_2, u32 VAR_3,
         size_t VAR_4, bool *VAR_5)
{
 void *VAR_6;

 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if (!FUNC_1(VAR_6)) {
  *VAR_5 = 0;
  return VAR_6;
 }

 if (VAR_6 != FUNC_0(-VAR_0))
  return VAR_6;

 VAR_6 = FUNC_3(&VAR_2->radix, VAR_3);
 if (FUNC_2(!VAR_6))
  return FUNC_0(-VAR_1);
 *VAR_5 = 1;
 return VAR_6;
}
