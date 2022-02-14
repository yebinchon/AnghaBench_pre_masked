
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max1363_state {int (* send ) (int ,int *,int) ;int client; int configbyte; int setupbyte; } ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct max1363_state *VAR_0)
{
 u8 VAR_1[2] = { VAR_0->setupbyte, VAR_0->configbyte };

 return VAR_0->send(VAR_0->client, VAR_1, 2);
}
