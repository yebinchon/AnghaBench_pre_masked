
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct us5182d_data {int opmode; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct us5182d_data *VAR_6, u8 VAR_7)
{
 int VAR_8;

 if (VAR_7 == VAR_6->opmode)
  return 0;

 VAR_8 = FUNC_0(VAR_6->client, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = VAR_8 & ~VAR_0;
 VAR_8 = VAR_8 | (VAR_7 << VAR_1);






 VAR_8 = FUNC_1(VAR_6->client, VAR_3, VAR_8);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_6->client, VAR_4,
     VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->opmode = VAR_7;
 FUNC_2(VAR_2);

 return 0;
}
