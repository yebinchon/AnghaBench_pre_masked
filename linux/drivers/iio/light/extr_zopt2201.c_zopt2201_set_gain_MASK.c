
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zopt2201_data {int gain; int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct zopt2201_data *VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->client, VAR_0, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1->gain = VAR_2;

 return 0;
}
