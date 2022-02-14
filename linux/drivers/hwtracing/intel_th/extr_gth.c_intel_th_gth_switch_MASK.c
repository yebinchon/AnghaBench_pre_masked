
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_th_output {int dummy; } ;
struct intel_th_device {int dev; } ;
struct gth_device {scalar_t__ base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 struct gth_device* FUNC_3 (int *) ;
 int FUNC_4 (struct gth_device*,struct intel_th_output*) ;
 int FUNC_5 (struct gth_device*,struct intel_th_output*,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct intel_th_device *VAR_4,
    struct intel_th_output *VAR_5)
{
 struct gth_device *VAR_6 = FUNC_3(&VAR_4->dev);
 unsigned long VAR_7;
 u32 VAR_8;


 FUNC_7(0, VAR_6->base + VAR_2);
 FUNC_7(VAR_0, VAR_6->base + VAR_2);

 for (VAR_8 = 0, VAR_7 = VAR_1;
      VAR_7 && !(VAR_8 & FUNC_0(4)); VAR_7--) {
  VAR_8 = FUNC_6(VAR_6->base + VAR_3);
  FUNC_1();
 }
 if (!VAR_7)
  FUNC_2(&VAR_4->dev, "timeout waiting for CTS Trigger\n");


 FUNC_7(0, VAR_6->base + VAR_2);

 FUNC_5(VAR_6, VAR_5, 0);
 FUNC_4(VAR_6, VAR_5);
}
