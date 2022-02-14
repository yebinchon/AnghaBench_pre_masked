
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct safe_buffer {int dummy; } ;
struct TYPE_2__ {int dmabounce; } ;
struct device {TYPE_1__ archdata; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct device*,char*,char const*) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 struct safe_buffer* FUNC_2 (int ,int ) ;

__attribute__((used)) static struct safe_buffer *FUNC_3(struct device *VAR_0,
  dma_addr_t VAR_1, const char *VAR_2)
{
 if (!VAR_0 || !VAR_0->archdata.dmabounce)
  return ((void*)0);
 if (FUNC_1(VAR_0, VAR_1)) {
  FUNC_0(VAR_0, "Trying to %s invalid mapping\n", VAR_2);
  return ((void*)0);
 }
 return FUNC_2(VAR_0->archdata.dmabounce, VAR_1);
}
