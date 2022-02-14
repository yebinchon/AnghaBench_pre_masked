
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = 0;

 FUNC_3(500);


 while ((VAR_4 < 20000) && (FUNC_2(VAR_3)
     & VAR_0)) {
  FUNC_3(100);
  VAR_4++;
 }
 if (VAR_4 == 20000)
  FUNC_0("MIPI: HS CMD FIFO was never cleared!\n");
}
