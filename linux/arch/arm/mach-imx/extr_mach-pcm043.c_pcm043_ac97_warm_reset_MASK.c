
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;
typedef int iomux_v3_cfg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct snd_ac97 *VAR_3)
{
 iomux_v3_cfg_t VAR_4 = VAR_2;
 iomux_v3_cfg_t VAR_5 = VAR_1;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_0, "SSI");
 if (VAR_6) {
  FUNC_5("failed to get GPIO_TXFS: %d\n", VAR_6);
  return;
 }

 FUNC_4(VAR_4);


 FUNC_0(VAR_0, 1);
 FUNC_6(2);
 FUNC_3(VAR_0, 0);

 FUNC_1(VAR_0);
 FUNC_4(VAR_5);
}
