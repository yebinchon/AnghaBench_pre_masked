
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmfts_data {int cmd_done; int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct stmfts_data *VAR_1, const u8 VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_1->cmd_done);

 VAR_3 = FUNC_0(VAR_1->client, VAR_2);
 if (VAR_3)
  return VAR_3;

 if (!FUNC_3(&VAR_1->cmd_done,
      FUNC_1(1000)))
  return -VAR_0;

 return 0;
}
