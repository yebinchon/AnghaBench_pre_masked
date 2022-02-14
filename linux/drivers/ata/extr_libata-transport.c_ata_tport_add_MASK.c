
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int release; struct device* parent; int * type; } ;
struct ata_port {int host; int link; int print_id; struct device tdev; } ;


 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;

int FUNC_18(struct device *VAR_2,
    struct ata_port *VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = &VAR_3->tdev;

 FUNC_8(VAR_5);
 VAR_5->type = &VAR_0;

 VAR_5->parent = VAR_2;
 FUNC_1(VAR_3->host);
 VAR_5->release = VAR_1;
 FUNC_4(VAR_5, "ata%d", VAR_3->print_id);
 FUNC_17(VAR_5);
 FUNC_0(VAR_3);
 VAR_4 = FUNC_5(VAR_5);
 if (VAR_4) {
  goto tport_err;
 }

 FUNC_7(VAR_5);
 FUNC_11(VAR_5);
 FUNC_9(VAR_5);
 FUNC_10(VAR_5);

 FUNC_13(VAR_5);
 FUNC_14(VAR_5);

 VAR_4 = FUNC_3(&VAR_3->link);
 if (VAR_4) {
  goto tport_link_err;
 }
 return 0;

 tport_link_err:
 FUNC_16(VAR_5);
 FUNC_6(VAR_5);

 tport_err:
 FUNC_15(VAR_5);
 FUNC_12(VAR_5);
 FUNC_2(VAR_3->host);
 return VAR_4;
}
