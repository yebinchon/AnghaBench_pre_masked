
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,scalar_t__) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct platform_device*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct platform_device*) ;
 int FUNC_19 (struct platform_device*) ;
 int FUNC_20 (struct platform_device*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_9)
{
 struct resource *VAR_10;
 int VAR_11;


 if (!FUNC_7())
  return -VAR_6;

 VAR_11 = FUNC_8(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_11(VAR_9, VAR_7, 0);
 if (!VAR_10) {
  FUNC_1(&VAR_9->dev, "can't fetch device resource info\n");
  return -VAR_5;
 }
 VAR_8 = VAR_10->start;

 VAR_11 = FUNC_19(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_15(VAR_9);
 if (VAR_11)
  goto err_ebook;

 VAR_11 = FUNC_18(VAR_9);
 if (VAR_11)
  goto err_lid;

 VAR_11 = FUNC_17();
 if (VAR_11)
  goto err_lidevt;

 VAR_11 = FUNC_16();
 if (VAR_11)
  goto err_ecsci;


 FUNC_10(VAR_0 | VAR_1,
  VAR_8 + VAR_2);


 FUNC_10(0xffffffff, VAR_8 + VAR_3);
 FUNC_12(0);


 FUNC_13();
 FUNC_0();
 FUNC_14();

 VAR_11 = FUNC_20(VAR_9);
 if (VAR_11)
  goto err_sci;


 FUNC_9(VAR_4);

 return VAR_11;

err_sci:
 FUNC_3();
err_ecsci:
 FUNC_4();
err_lidevt:
 FUNC_5();
err_lid:
 FUNC_2();
err_ebook:
 FUNC_6();
 return VAR_11;
}
