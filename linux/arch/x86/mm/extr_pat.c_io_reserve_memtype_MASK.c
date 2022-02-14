
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ resource_size_t ;
typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,int,int*) ;

int FUNC_6(resource_size_t VAR_1, resource_size_t VAR_2,
   enum page_cache_mode *VAR_3)
{
 resource_size_t VAR_4 = VAR_2 - VAR_1;
 enum page_cache_mode VAR_5 = *VAR_3;
 enum page_cache_mode VAR_6;
 int VAR_7;

 FUNC_0(FUNC_2(VAR_1, VAR_4));

 VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_5, &VAR_6);
 if (VAR_7)
  goto out_err;

 if (!FUNC_3(VAR_1, VAR_4, VAR_5, VAR_6))
  goto out_free;

 if (FUNC_4(VAR_1, VAR_4, VAR_6) < 0)
  goto out_free;

 *VAR_3 = VAR_6;
 return 0;

out_free:
 FUNC_1(VAR_1, VAR_2);
 VAR_7 = -VAR_0;
out_err:
 return VAR_7;
}
