
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dsi_data {int num_lanes_supported; TYPE_2__* lanes; TYPE_1__* data; } ;
struct TYPE_4__ {scalar_t__ function; } ;
struct TYPE_3__ {int quirks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int FUNC_1 (struct dsi_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct dsi_data *VAR_5)
{
 int VAR_6, VAR_7;
 bool VAR_8[VAR_2];
 static const u8 VAR_9[] = { 28, 27, 26 };
 static const u8 VAR_10[] = { 24, 25, 26, 27, 28 };
 const u8 *VAR_11;

 if (VAR_5->data->quirks & VAR_3)
  VAR_11 = VAR_9;
 else
  VAR_11 = VAR_10;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_lanes_supported; ++VAR_7)
  VAR_8[VAR_7] = VAR_5->lanes[VAR_7].function != VAR_1;

 VAR_6 = 100000;
 while (1) {
  u32 VAR_12;
  int VAR_13;

  VAR_12 = FUNC_1(VAR_5, VAR_0);

  VAR_13 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_5->num_lanes_supported; ++VAR_7) {
   if (!VAR_8[VAR_7] || (VAR_12 & (1 << VAR_11[VAR_7])))
    VAR_13++;
  }

  if (VAR_13 == VAR_5->num_lanes_supported)
   break;

  if (--VAR_6 == 0) {
   for (VAR_7 = 0; VAR_7 < VAR_5->num_lanes_supported; ++VAR_7) {
    if (!VAR_8[VAR_7] || (VAR_12 & (1 << VAR_11[VAR_7])))
     continue;

    FUNC_0("CIO TXCLKESC%d domain not coming " "out of reset\n", VAR_7);

   }
   return -VAR_4;
  }
 }

 return 0;
}
