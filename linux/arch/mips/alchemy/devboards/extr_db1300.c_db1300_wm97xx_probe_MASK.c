
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm97xx {int pen_irq; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct wm97xx* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct wm97xx*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct wm97xx*,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_11)
{
 struct wm97xx *VAR_12 = FUNC_0(VAR_11);


 FUNC_1(VAR_12, VAR_1, VAR_3,
      VAR_7, VAR_8,
      VAR_9);


 FUNC_1(VAR_12, VAR_2, VAR_6,
      VAR_7, VAR_4,
      VAR_5);

 VAR_12->pen_irq = VAR_0;

 return FUNC_2(VAR_12, &VAR_10);
}
