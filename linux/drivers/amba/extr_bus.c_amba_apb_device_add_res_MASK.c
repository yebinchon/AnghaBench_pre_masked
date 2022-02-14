
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct amba_device {int dummy; } ;
typedef int resource_size_t ;


 struct amba_device* FUNC_0 (struct device*,char const*,int ,size_t,int,int,void*,unsigned int,int ,struct resource*) ;

struct amba_device *
FUNC_1(struct device *VAR_0, const char *VAR_1,
   resource_size_t VAR_2, size_t VAR_3, int VAR_4,
   int VAR_5, void *VAR_6, unsigned int VAR_7,
   struct resource *VAR_8)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7, 0, VAR_8);
}
