
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cnt; } ;
struct rsxx_dma {TYPE_1__ sub_page; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct rsxx_dma *VAR_1)
{
 if (VAR_1->sub_page.cnt)
  return VAR_1->sub_page.cnt << 9;
 else
  return VAR_0;
}
