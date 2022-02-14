
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kxsd9_state {int scale; int map; int dev; int regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct kxsd9_state *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_4(FUNC_0(VAR_6->regs), VAR_6->regs);
 if (VAR_7) {
  FUNC_1(VAR_6->dev, "Cannot enable regulators\n");
  return VAR_7;
 }


 VAR_7 = FUNC_3(VAR_6->map,
      VAR_4,
      VAR_0);
 if (VAR_7)
  return VAR_7;





 VAR_7 = FUNC_3(VAR_6->map,
      VAR_5,
      VAR_1 |
      VAR_3 |
      VAR_2 |
      VAR_6->scale);
 if (VAR_7)
  return VAR_7;





 FUNC_2(20);

 return 0;
}
