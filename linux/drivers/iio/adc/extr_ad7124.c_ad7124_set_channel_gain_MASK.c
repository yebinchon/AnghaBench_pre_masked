
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7124_state {TYPE_1__* channel_config; } ;
struct TYPE_2__ {unsigned int pga_bits; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ,int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_4 (struct ad7124_state*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ad7124_state *VAR_2,
       unsigned int VAR_3,
       unsigned int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_1,
     FUNC_2(VAR_1), VAR_4);
 VAR_6 = FUNC_4(VAR_2, FUNC_0(VAR_3),
        VAR_0,
        FUNC_1(VAR_5), 2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_2->channel_config[VAR_3].pga_bits = VAR_5;

 return 0;
}
