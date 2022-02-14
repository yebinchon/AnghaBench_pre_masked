
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kxsd9_state {int dev; int regs; int map; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct kxsd9_state *VAR_2)
{
 int VAR_3;







 VAR_3 = FUNC_2(VAR_2->map,
     VAR_1,
     VAR_0,
     0);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_3(FUNC_0(VAR_2->regs), VAR_2->regs);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "Cannot disable regulators\n");
  return VAR_3;
 }

 return 0;
}
