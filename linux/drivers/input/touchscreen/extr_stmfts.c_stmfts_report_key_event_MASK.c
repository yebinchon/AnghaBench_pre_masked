
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stmfts_data {int input; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,char*,int const) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct stmfts_data *VAR_2, const u8 VAR_3[])
{
 switch (VAR_3[2]) {
 case 0:
  FUNC_1(VAR_2->input, VAR_0, 0);
  FUNC_1(VAR_2->input, VAR_1, 0);
  break;

 case 129:
  FUNC_1(VAR_2->input, VAR_0, 1);
  break;

 case 128:
  FUNC_1(VAR_2->input, VAR_1, 1);
  break;

 default:
  FUNC_0(&VAR_2->client->dev,
    "unknown key event: %#02x\n", VAR_3[2]);
  break;
 }

 FUNC_2(VAR_2->input);
}
