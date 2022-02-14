
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct si2165_state {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int const,int) ;
 int FUNC_1 (struct si2165_state*,int const,int*,int) ;

__attribute__((used)) static int FUNC_2(struct si2165_state *VAR_0,
       const u16 VAR_1, u16 *VAR_2)
{
 u8 VAR_3[2];

 int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3, 2);
 *VAR_2 = VAR_3[0] | VAR_3[1] << 8;
 FUNC_0(&VAR_0->client->dev, "reg read: R(0x%04x)=0x%04x\n", VAR_1, *VAR_2);
 return VAR_4;
}
