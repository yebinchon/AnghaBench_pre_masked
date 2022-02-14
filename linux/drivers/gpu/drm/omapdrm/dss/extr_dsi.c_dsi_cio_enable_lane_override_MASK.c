
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dsi_data {int num_lanes_supported; TYPE_1__* lanes; } ;
struct TYPE_2__ {unsigned int polarity; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsi_data*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct dsi_data *VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 u8 VAR_6 = VAR_1->num_lanes_supported == 3 ? 22 : 26;

 VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_lanes_supported; ++VAR_4) {
  unsigned int VAR_7 = VAR_1->lanes[VAR_4].polarity;

  if (VAR_2 & (1 << VAR_4))
   VAR_5 |= 1 << (VAR_4 * 2 + (VAR_7 ? 0 : 1));

  if (VAR_3 & (1 << VAR_4))
   VAR_5 |= 1 << (VAR_4 * 2 + (VAR_7 ? 1 : 0));
 }
 FUNC_0(VAR_1, VAR_0, VAR_5, VAR_6, 17);




 FUNC_0(VAR_1, VAR_0, 1, 27, 27);
}
