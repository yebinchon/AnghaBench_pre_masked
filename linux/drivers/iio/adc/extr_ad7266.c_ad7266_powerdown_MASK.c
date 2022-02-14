
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sample; } ;
struct ad7266_state {TYPE_1__ data; int spi; } ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct ad7266_state *VAR_0)
{

 return FUNC_0(VAR_0->spi, &VAR_0->data.sample[0], 1);
}
