
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct veml6070_data {int config; int lock; int client1; int client2; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct veml6070_data *VAR_1)
{
 int VAR_2;
 u8 VAR_3, VAR_4;

 FUNC_3(&VAR_1->lock);


 VAR_2 = FUNC_1(VAR_1->client1,
     VAR_1->config & ~VAR_0);
 if (VAR_2 < 0)
  goto out;

 FUNC_2(125 + 10);

 VAR_2 = FUNC_0(VAR_1->client2);
 if (VAR_2 < 0)
  goto out;
 VAR_3 = VAR_2;

 VAR_2 = FUNC_0(VAR_1->client1);
 if (VAR_2 < 0)
  goto out;
 VAR_4 = VAR_2;


 VAR_2 = FUNC_1(VAR_1->client1, VAR_1->config);
 if (VAR_2 < 0)
  goto out;

 VAR_2 = (VAR_3 << 8) | VAR_4;

out:
 FUNC_4(&VAR_1->lock);
 return VAR_2;
}
