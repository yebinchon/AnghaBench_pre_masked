
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otm8009a {int panel; } ;
struct mipi_dsi_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 struct otm8009a* FUNC_2 (struct mipi_dsi_device*) ;

__attribute__((used)) static int FUNC_3(struct mipi_dsi_device *VAR_0)
{
 struct otm8009a *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0);
 FUNC_0(&VAR_1->panel);

 return 0;
}
