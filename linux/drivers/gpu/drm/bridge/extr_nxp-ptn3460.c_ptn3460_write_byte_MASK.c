
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptn3460_bridge {int client; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct ptn3460_bridge *VAR_0, char VAR_1,
  char VAR_2)
{
 int VAR_3;
 char VAR_4[2];

 VAR_4[0] = VAR_1;
 VAR_4[1] = VAR_2;

 VAR_3 = FUNC_2(VAR_0->client, VAR_4, FUNC_0(VAR_4));
 if (VAR_3 <= 0) {
  FUNC_1("Failed to send i2c command, ret=%d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
