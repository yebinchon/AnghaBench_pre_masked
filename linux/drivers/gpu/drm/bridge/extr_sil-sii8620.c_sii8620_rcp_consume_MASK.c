
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sii8620 {int rc_dev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct sii8620 *VAR_3, u8 VAR_4)
{
 bool VAR_5 = !(VAR_4 & VAR_1);

 VAR_4 &= VAR_0;

 if (!VAR_3->rc_dev) {
  FUNC_0(VAR_3->dev, "RCP input device not initialized\n");
  return 0;
 }

 if (VAR_5)
  FUNC_1(VAR_3->rc_dev, VAR_2, VAR_4, 0);
 else
  FUNC_2(VAR_3->rc_dev);

 return 1;
}
