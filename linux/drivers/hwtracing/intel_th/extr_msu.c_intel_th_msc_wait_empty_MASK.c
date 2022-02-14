
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msc {scalar_t__ reg_base; } ;
struct intel_th_device {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 struct msc* FUNC_3 (int *) ;
 int FUNC_4 (struct msc*) ;

__attribute__((used)) static void FUNC_5(struct intel_th_device *VAR_3)
{
 struct msc *VAR_4 = FUNC_3(&VAR_3->dev);
 unsigned long VAR_5;
 u32 VAR_6;

 for (VAR_6 = 0, VAR_5 = VAR_1;
      VAR_5 && !(VAR_6 & VAR_0); VAR_5--) {
  VAR_6 = FUNC_0(VAR_4->reg_base + VAR_2);
  FUNC_1();
 }

 if (!VAR_5)
  FUNC_2(FUNC_4(VAR_4), "timeout waiting for MSC0 PLE\n");
}
