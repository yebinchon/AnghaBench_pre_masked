
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct resource {int dummy; } ;
struct platform_device_info {char const* name; int id; unsigned int num_res; void const* data; size_t size_data; int dma_mask; struct resource const* res; } ;
struct platform_device {int dummy; } ;


 struct platform_device* FUNC_0 (struct platform_device_info*) ;

__attribute__((used)) static inline struct platform_device *FUNC_1(
  const char *VAR_0, int VAR_1,
  const struct resource *VAR_2, unsigned int VAR_3,
  const void *VAR_4, size_t VAR_5, u64 VAR_6)
{
 struct platform_device_info VAR_7 = {
  .name = VAR_0,
  .id = VAR_1,
  .res = VAR_2,
  .num_res = VAR_3,
  .data = VAR_4,
  .size_data = VAR_5,
  .dma_mask = VAR_6,
 };
 return FUNC_0(&VAR_7);
}
