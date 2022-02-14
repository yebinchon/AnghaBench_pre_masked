
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_hdmi {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zx_hdmi* FUNC_0 (struct device*) ;
 int FUNC_1 (struct zx_hdmi*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, void *VAR_3,
          bool VAR_4)
{
 struct zx_hdmi *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4)
  FUNC_1(VAR_5, VAR_0, VAR_1,
     VAR_1);
 else
  FUNC_1(VAR_5, VAR_0, VAR_1, 0);

 return 0;
}
