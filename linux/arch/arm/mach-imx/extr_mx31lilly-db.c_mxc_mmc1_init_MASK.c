
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,char*,void*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_12,
    irq_handler_t VAR_13, void *VAR_14)
{
 int VAR_15;

 VAR_10 = FUNC_0(VAR_2);
 VAR_11 = FUNC_0(VAR_3);

 FUNC_5(VAR_6, VAR_1);
 FUNC_5(VAR_7, VAR_1);
 FUNC_5(VAR_8, VAR_1);
 FUNC_5(VAR_9, VAR_1);
 FUNC_5(VAR_4, VAR_1);
 FUNC_5(VAR_5, VAR_1);

 VAR_15 = FUNC_3(VAR_10, "MMC detect");
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_3(VAR_11, "MMC w/p");
 if (VAR_15)
  goto exit_free_det;

 FUNC_1(VAR_10);
 FUNC_1(VAR_11);

 VAR_15 = FUNC_6(FUNC_4(FUNC_0(VAR_2)),
     VAR_13, VAR_0,
     "MMC detect", VAR_14);
 if (VAR_15)
  goto exit_free_wp;

 return 0;

exit_free_wp:
 FUNC_2(VAR_11);

exit_free_det:
 FUNC_2(VAR_10);

 return VAR_15;
}
