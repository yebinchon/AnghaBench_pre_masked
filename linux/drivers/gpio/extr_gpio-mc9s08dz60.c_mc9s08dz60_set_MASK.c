
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mc9s08dz60 {int client; } ;
typedef int s32 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (unsigned int,int*,int*) ;

__attribute__((used)) static int FUNC_3(struct mc9s08dz60 *VAR_0, unsigned VAR_1, int VAR_2)
{
 u8 VAR_3, VAR_4;
 s32 VAR_5;

 FUNC_2(VAR_1, &VAR_3, &VAR_4);
 VAR_5 = FUNC_0(VAR_0->client, VAR_3);
 if (VAR_5 >= 0) {
  if (VAR_2)
   VAR_5 |= 1 << VAR_4;
  else
   VAR_5 &= ~(1 << VAR_4);

  return FUNC_1(VAR_0->client, VAR_3, VAR_5);
 } else
  return VAR_5;

}
