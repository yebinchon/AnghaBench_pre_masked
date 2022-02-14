
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm90_data {int config; int flags; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct lm90_data*,int) ;

__attribute__((used)) static int FUNC_2(struct lm90_data *VAR_2, int VAR_3)
{
 u8 VAR_4 = VAR_2->config;
 int VAR_5;


 if (VAR_2->flags & VAR_0) {
  VAR_5 = FUNC_1(VAR_2, VAR_4 | 0x40);
  if (VAR_5 < 0)
   return VAR_5;
 }


 VAR_5 = FUNC_0(VAR_2->client, VAR_1, VAR_3);


 FUNC_1(VAR_2, VAR_4);

 return VAR_5;
}
