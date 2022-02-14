
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sps30_state {int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct sps30_state *VAR_1, u8 *VAR_2,
     int VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6;





 VAR_6 = FUNC_1(VAR_1->client, VAR_2, VAR_3);
 if (VAR_6 != VAR_3)
  return VAR_6 < 0 ? VAR_6 : -VAR_0;

 if (!VAR_4)
  return 0;

 VAR_6 = FUNC_0(VAR_1->client, VAR_4, VAR_5);
 if (VAR_6 != VAR_5)
  return VAR_6 < 0 ? VAR_6 : -VAR_0;

 return 0;
}
