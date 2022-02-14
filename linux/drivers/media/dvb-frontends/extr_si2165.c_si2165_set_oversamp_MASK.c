
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct si2165_state {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct si2165_state*) ;
 int FUNC_3 (struct si2165_state*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct si2165_state *VAR_2, u32 VAR_3)
{
 u64 VAR_4;
 u32 VAR_5;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_2);
 VAR_4 <<= 23;
 FUNC_1(VAR_4, VAR_3);
 VAR_5 = VAR_4 & 0x3fffffff;

 FUNC_0(&VAR_2->client->dev, "Write oversamp=%#x\n", VAR_5);
 return FUNC_3(VAR_2, VAR_1, VAR_5);
}
