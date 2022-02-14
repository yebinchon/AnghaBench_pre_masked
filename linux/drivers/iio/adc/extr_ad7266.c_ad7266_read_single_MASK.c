
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sample; } ;
struct ad7266_state {TYPE_1__ data; int single_msg; int spi; } ;


 int FUNC_0 (struct ad7266_state*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct ad7266_state *VAR_0, int *VAR_1,
 unsigned int VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, VAR_2);

 VAR_3 = FUNC_2(VAR_0->spi, &VAR_0->single_msg);
 *VAR_1 = FUNC_1(VAR_0->data.sample[VAR_2 % 2]);

 return VAR_3;
}
