
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct si2165_state {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int const,scalar_t__) ;
 int FUNC_1 (int ,int const,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct si2165_state *VAR_0,
      const u16 VAR_1, u8 *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = FUNC_1(VAR_0->regmap, VAR_1, &VAR_3);
 *VAR_2 = (u8)VAR_3;
 FUNC_0(&VAR_0->client->dev, "reg read: R(0x%04x)=0x%02x\n", VAR_1, *VAR_2);
 return VAR_4;
}
