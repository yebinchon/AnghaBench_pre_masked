
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct kmx61_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(struct kmx61_data *VAR_5, u8 *VAR_6, u8 VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5->client, VAR_4);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_5->client->dev, "Error reading reg_stby\n");
  return VAR_8;
 }
 *VAR_6 = 0;

 if (VAR_7 & VAR_0) {
  if (VAR_8 & VAR_1)
   *VAR_6 |= VAR_1;
  else
   *VAR_6 &= ~VAR_1;
 }

 if (VAR_7 & VAR_2) {
  if (VAR_8 & VAR_3)
   *VAR_6 |= VAR_3;
  else
   *VAR_6 &= ~VAR_3;
 }

 return 0;
}
