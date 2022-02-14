
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 int FUNC_0 (int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_14 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int,char*,void*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_15,
    irq_handler_t VAR_16, void *VAR_17)
{
 int VAR_18;

 VAR_13 = FUNC_0(VAR_3);
 VAR_14 = FUNC_0(VAR_4);

 FUNC_5(VAR_7,
     VAR_2 | VAR_12 | VAR_11);
 FUNC_5(VAR_8,
     VAR_2 | VAR_12 | VAR_11);
 FUNC_5(VAR_9,
     VAR_2 | VAR_12 | VAR_11);
 FUNC_5(VAR_10,
     VAR_2 | VAR_12 | VAR_11);
 FUNC_5(VAR_6,
     VAR_2 | VAR_12 | VAR_11);
 FUNC_5(VAR_5, VAR_2);

 VAR_18 = FUNC_3(VAR_13, "MMC detect");
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_3(VAR_14, "MMC w/p");
 if (VAR_18)
  goto exit_free_det;

 FUNC_1(VAR_13);
 FUNC_1(VAR_14);

 VAR_18 = FUNC_6(FUNC_4(FUNC_0(VAR_3)),
     VAR_16,
     VAR_1 | VAR_0,
     "MMC detect", VAR_17);
 if (VAR_18)
  goto exit_free_wp;

 return 0;

exit_free_wp:
 FUNC_2(VAR_14);

exit_free_det:
 FUNC_2(VAR_13);

 return VAR_18;
}
