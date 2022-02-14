
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stmfts_data {int* data; TYPE_1__* client; int cmd_done; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int,int,int,int,int,int) ;
 int FUNC_3 (struct stmfts_data*,int*) ;
 int FUNC_4 (struct stmfts_data*,int*) ;
 int FUNC_5 (struct stmfts_data*,int*) ;
 int FUNC_6 (struct stmfts_data*,int*) ;

__attribute__((used)) static void FUNC_7(struct stmfts_data *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  u8 *VAR_5 = &VAR_3->data[VAR_4 * VAR_0];

  switch (VAR_5[0]) {

  case 140:
  case 129:
  case 128:
   FUNC_0(&VAR_3->cmd_done);


  case 130:
  case 139:
   return;
  }

  switch (VAR_5[0] & VAR_1) {

  case 133:
  case 131:
   FUNC_3(VAR_3, VAR_5);
   break;

  case 132:
   FUNC_4(VAR_3, VAR_5);
   break;

  case 137:
  case 136:
  case 135:
   FUNC_5(VAR_3, VAR_5);
   break;

  case 134:
   FUNC_6(VAR_3, VAR_5);
   break;

  case 138:
   FUNC_2(&VAR_3->client->dev,
     "error code: 0x%x%x%x%x%x%x",
     VAR_5[6], VAR_5[5], VAR_5[4],
     VAR_5[3], VAR_5[2], VAR_5[1]);
   break;

  default:
   FUNC_1(&VAR_3->client->dev,
    "unknown event %#02x\n", VAR_5[0]);
  }
 }
}
