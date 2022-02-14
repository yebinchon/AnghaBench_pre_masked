
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sii8620 {scalar_t__ error; int devcap_read; int devcap; struct device* dev; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int,int,int,int,int,int) ;
 int FUNC_1 (struct sii8620*) ;
 int FUNC_2 (struct sii8620*,int ,int*,int) ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static void FUNC_4(struct sii8620 *VAR_7)
{
 u8 VAR_8[VAR_5];
 struct device *VAR_9 = VAR_7->dev;

 FUNC_2(VAR_7, VAR_6, VAR_8, VAR_5);
 if (VAR_7->error < 0)
  return;

 FUNC_0(VAR_9, "detected dongle MHL %d.%d, ChipID %02x%02x:%02x%02x\n",
   VAR_8[VAR_4] / 16,
   VAR_8[VAR_4] % 16,
   VAR_8[VAR_0], VAR_8[VAR_1],
   VAR_8[VAR_2], VAR_8[VAR_3]);
 FUNC_3(VAR_7->devcap, VAR_8, VAR_5);
 VAR_7->devcap_read = 1;
 FUNC_1(VAR_7);
}
