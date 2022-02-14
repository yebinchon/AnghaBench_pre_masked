
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ptn3460_bridge {int client; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ptn3460_bridge *VAR_0, char VAR_1,
  u8 *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0->client, &VAR_1, 1);
 if (VAR_4 <= 0) {
  FUNC_0("Failed to send i2c command, ret=%d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_0->client, VAR_2, VAR_3);
 if (VAR_4 <= 0) {
  FUNC_0("Failed to recv i2c data, ret=%d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
