
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* d8; } ;
struct ad7768_state {TYPE_1__ data; int spi; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_2(struct ad7768_state *VAR_0,
    unsigned int VAR_1,
    unsigned int VAR_2)
{
 VAR_0->data.d8[0] = FUNC_0(VAR_1);
 VAR_0->data.d8[1] = VAR_2 & 0xFF;

 return FUNC_1(VAR_0->spi, VAR_0->data.d8, 2);
}
