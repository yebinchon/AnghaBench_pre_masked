
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occ {int dev; int sbefifo; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int,scalar_t__*,size_t,size_t*) ;
 int FUNC_5 (int ,scalar_t__*,int,scalar_t__*,size_t*) ;

__attribute__((used)) static int FUNC_6(struct occ *VAR_3)
{
 __be32 VAR_4[VAR_1];
 size_t VAR_5, VAR_6;
 int VAR_7;

 FUNC_0(VAR_1 < 7);
 VAR_5 = VAR_1;

 VAR_4[0] = FUNC_2(0x5 + 0x2);
 VAR_4[1] = FUNC_2(VAR_2);
 VAR_4[2] = FUNC_2(0x3);
 VAR_4[3] = FUNC_2(0x0);
 VAR_4[4] = FUNC_2(0x8);
 VAR_4[5] = FUNC_2(0x20010000);
 VAR_4[6] = 0;

 VAR_7 = FUNC_5(VAR_3->sbefifo, VAR_4, 7, VAR_4, &VAR_5);
 if (VAR_7)
  goto error;

 VAR_7 = FUNC_4(VAR_3->sbefifo, VAR_2,
      VAR_4, VAR_5, &VAR_5);
 if (VAR_7)
  goto error;

 if (VAR_5 != 1) {
  FUNC_3(VAR_3->dev, "SRAM attn response length invalid: %zd\n",
   VAR_5);
  VAR_7 = -VAR_0;
 } else {
  VAR_6 = FUNC_1(VAR_4[0]);
  if (VAR_6 != 8) {
   FUNC_3(VAR_3->dev,
    "SRAM attn expected 8 bytes got %zd\n",
    VAR_6);
   VAR_7 = -VAR_0;
  }
 }

 error:

 if (VAR_7 > 0) {
  FUNC_3(VAR_3->dev, "SRAM attn returned failure status: %08x\n",
   VAR_7);
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
