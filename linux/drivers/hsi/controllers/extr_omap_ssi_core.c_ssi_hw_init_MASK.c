
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct omap_ssi_controller {int gdd_gcr; scalar_t__ sys; int fck_rate; scalar_t__ gdd; } ;
struct TYPE_3__ {int parent; } ;
struct hsi_controller {TYPE_1__ device; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 struct omap_ssi_controller* FUNC_3 (struct hsi_controller*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hsi_controller*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct hsi_controller *VAR_4)
{
 struct omap_ssi_controller *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_4->device.parent);
 if (VAR_6 < 0) {
  FUNC_2(&VAR_4->device, "runtime PM failed %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_7(VAR_3, VAR_5->gdd + VAR_2);

 VAR_5->fck_rate = FUNC_0(FUNC_6(VAR_4), 1000);
 FUNC_1(&VAR_4->device, "SSI fck rate %lu kHz\n", VAR_5->fck_rate);

 FUNC_7(VAR_0, VAR_5->sys + VAR_1);
 VAR_5->gdd_gcr = VAR_0;
 FUNC_5(VAR_4->device.parent);

 return 0;
}
