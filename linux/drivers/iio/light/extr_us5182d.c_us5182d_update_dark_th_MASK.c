
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct us5182d_data {int client; int * us5182d_dark_ths; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct us5182d_data *VAR_1, int VAR_2)
{
 __be16 VAR_3 = FUNC_0(VAR_1->us5182d_dark_ths[VAR_2]);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->client, VAR_0,
     ((u8 *)&VAR_3)[0]);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_1->client, VAR_0 + 1,
     ((u8 *)&VAR_3)[1]);
}
