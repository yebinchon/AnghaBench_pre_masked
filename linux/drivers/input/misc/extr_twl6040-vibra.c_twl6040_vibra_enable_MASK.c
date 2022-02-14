
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vibra_info {int enabled; struct twl6040* twl6040; int dev; int supplies; } ;
struct twl6040 {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct twl6040*) ;
 int FUNC_4 (struct twl6040*,int) ;
 int FUNC_5 (struct twl6040*,int ,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct vibra_info *VAR_5)
{
 struct twl6040 *VAR_6 = VAR_5->twl6040;
 int VAR_7;

 VAR_7 = FUNC_2(FUNC_0(VAR_5->supplies), VAR_5->supplies);
 if (VAR_7) {
  FUNC_1(VAR_5->dev, "failed to enable regulators %d\n", VAR_7);
  return;
 }

 FUNC_4(VAR_5->twl6040, 1);
 if (FUNC_3(VAR_6) <= VAR_2) {





  FUNC_5(VAR_6, VAR_0,
      VAR_4 | VAR_3);
  FUNC_5(VAR_6, VAR_1,
      VAR_4 | VAR_3);
  FUNC_6(3000, 3500);
 }

 FUNC_5(VAR_6, VAR_0,
     VAR_4);
 FUNC_5(VAR_6, VAR_1,
     VAR_4);

 VAR_5->enabled = 1;
}
