
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm8333 {int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

int FUNC_1(struct lm8333 *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4 = 0, VAR_5;

 do {
  VAR_5 = FUNC_0(VAR_1->client, VAR_2, VAR_3);
 } while (VAR_5 < 0 && VAR_4++ < VAR_0);

 return VAR_5;
}
