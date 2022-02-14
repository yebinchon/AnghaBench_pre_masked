
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii9234 {int dev; } ;
typedef enum sii9234_state { ____Placeholder_sii9234_state } sii9234_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sii9234*,int,int) ;
 int FUNC_1 (struct sii9234*,int,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sii9234*,int ,int) ;
 int FUNC_4 (struct sii9234*,int ,int ,int) ;
 scalar_t__ FUNC_5 (struct sii9234*) ;

__attribute__((used)) static enum sii9234_state FUNC_6(struct sii9234 *VAR_7)
{
 FUNC_2(VAR_7->dev, "mhl est interrupt\n");


 FUNC_3(VAR_7, VAR_3, 0x10);

 FUNC_0(VAR_7, 0x07, 0x32);
 FUNC_1(VAR_7, 0x44, ~0, 1 << 1);

 FUNC_4(VAR_7, VAR_1, ~0, 1);
 FUNC_3(VAR_7, VAR_2,
        VAR_4 | VAR_0);

 if (FUNC_5(VAR_7))
  return VAR_5;

 return VAR_6;
}
