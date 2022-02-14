
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct opt3001 {int dev; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,char,char,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct opt3001 *VAR_2)
{
 char VAR_3[2];
 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2->client, VAR_1);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2->dev, "failed to read register %02x\n",
    VAR_1);
  return VAR_5;
 }

 VAR_3[0] = VAR_5 >> 8;
 VAR_3[1] = VAR_5 & 0xff;

 VAR_5 = FUNC_2(VAR_2->client, VAR_0);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2->dev, "failed to read register %02x\n",
    VAR_0);
  return VAR_5;
 }

 VAR_4 = VAR_5;

 FUNC_1(VAR_2->dev, "Found %c%c OPT%04x\n", VAR_3[0],
   VAR_3[1], VAR_4);

 return 0;
}
