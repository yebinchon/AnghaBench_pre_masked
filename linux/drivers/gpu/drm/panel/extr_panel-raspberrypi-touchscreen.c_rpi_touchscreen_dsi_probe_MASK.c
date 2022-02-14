
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int mode_flags; int lanes; int dev; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct mipi_dsi_device*) ;

__attribute__((used)) static int FUNC_2(struct mipi_dsi_device *VAR_4)
{
 int VAR_5;

 VAR_4->mode_flags = (VAR_2 |
      VAR_3 |
      VAR_1);
 VAR_4->format = VAR_0;
 VAR_4->lanes = 1;

 VAR_5 = FUNC_1(VAR_4);

 if (VAR_5)
  FUNC_0(&VAR_4->dev, "failed to attach dsi to host: %d\n", VAR_5);

 return VAR_5;
}
