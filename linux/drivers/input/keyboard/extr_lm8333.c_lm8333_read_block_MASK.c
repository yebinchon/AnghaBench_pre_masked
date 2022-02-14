
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm8333 {int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;

int FUNC_1(struct lm8333 *VAR_1, u8 VAR_2, u8 VAR_3, u8 *VAR_4)
{
 int VAR_5 = 0, VAR_6;

 do {
  VAR_6 = FUNC_0(VAR_1->client,
          VAR_2, VAR_3, VAR_4);
 } while (VAR_6 < 0 && VAR_5++ < VAR_0);

 return VAR_6;
}
