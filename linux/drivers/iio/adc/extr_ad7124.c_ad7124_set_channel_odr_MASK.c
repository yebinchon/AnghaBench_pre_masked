
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7124_state {TYPE_1__* channel_config; int mclk; } ;
struct TYPE_2__ {void* odr; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 void* FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct ad7124_state*,int ,int ,int ,int) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ad7124_state *VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_1->mclk);







 VAR_5 = FUNC_2(VAR_4, VAR_3 * 32);
 if (VAR_5 < 1)
  VAR_5 = 1;
 else if (VAR_5 > 2047)
  VAR_5 = 2047;

 VAR_6 = FUNC_3(VAR_1, FUNC_0(VAR_2),
        VAR_0,
        FUNC_1(VAR_5), 3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_1->channel_config[VAR_2].odr =
  FUNC_2(VAR_4, VAR_5 * 32);

 return 0;
}
