
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct kmx61_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(struct kmx61_data *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;
 u8 VAR_4 = VAR_1 + VAR_2 * 2;

 VAR_3 = FUNC_1(VAR_0->client, VAR_4);
 if (VAR_3 < 0)
  FUNC_0(&VAR_0->client->dev, "failed to read reg at %x\n", VAR_4);

 return VAR_3;
}
