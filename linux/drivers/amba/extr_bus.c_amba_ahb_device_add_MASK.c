
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct amba_device {int dummy; } ;
typedef int resource_size_t ;


 struct amba_device* FUNC_0 (struct device*,char const*,int ,size_t,int,int,void*,unsigned int,unsigned long long,int *) ;
 int VAR_0 ;

struct amba_device *
FUNC_1(struct device *VAR_1, const char *VAR_2,
      resource_size_t VAR_3, size_t VAR_4, int VAR_5, int VAR_6,
      void *VAR_7, unsigned int VAR_8)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_8, ~0ULL, &VAR_0);
}
