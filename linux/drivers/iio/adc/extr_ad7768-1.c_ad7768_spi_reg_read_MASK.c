
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d32; int * d8; } ;
struct ad7768_state {TYPE_1__ data; int spi; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct ad7768_state *VAR_0, unsigned int VAR_1,
          unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_3 = 32 - (8 * VAR_2);
 VAR_0->data.d8[0] = FUNC_0(VAR_1);

 VAR_4 = FUNC_2(VAR_0->spi, VAR_0->data.d8, 1,
      &VAR_0->data.d32, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 return (FUNC_1(VAR_0->data.d32) >> VAR_3);
}
