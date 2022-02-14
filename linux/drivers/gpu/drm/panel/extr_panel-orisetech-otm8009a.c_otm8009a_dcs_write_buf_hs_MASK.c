
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otm8009a {int dev; } ;
struct mipi_dsi_device {int mode_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct otm8009a*,void const*,size_t) ;
 struct mipi_dsi_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct otm8009a *VAR_1, const void *VAR_2,
          size_t VAR_3)
{
 struct mipi_dsi_device *VAR_4 = FUNC_1(VAR_1->dev);


 VAR_4->mode_flags &= ~VAR_0;

 FUNC_0(VAR_1, VAR_2, VAR_3);


 VAR_4->mode_flags |= VAR_0;
}
