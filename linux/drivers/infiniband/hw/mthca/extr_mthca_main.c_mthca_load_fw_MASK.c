
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fw_icm; int fw_pages; } ;
struct TYPE_3__ {TYPE_2__ arbel; } ;
struct mthca_dev {TYPE_1__ fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mthca_dev*,int ) ;
 int FUNC_1 (struct mthca_dev*) ;
 int FUNC_2 (struct mthca_dev*) ;
 int FUNC_3 (struct mthca_dev*,int ,int,int ) ;
 int FUNC_4 (struct mthca_dev*,char*,...) ;
 int FUNC_5 (struct mthca_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct mthca_dev *VAR_3)
{
 int VAR_4;



 VAR_3->fw.arbel.fw_icm =
  FUNC_3(VAR_3, VAR_3->fw.arbel.fw_pages,
    VAR_1 | VAR_2, 0);
 if (!VAR_3->fw.arbel.fw_icm) {
  FUNC_4(VAR_3, "Couldn't allocate FW area, aborting.\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_3, VAR_3->fw.arbel.fw_icm);
 if (VAR_4) {
  FUNC_4(VAR_3, "MAP_FA command returned %d, aborting.\n", VAR_4);
  goto err_free;
 }
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_4(VAR_3, "RUN_FW command returned %d, aborting.\n", VAR_4);
  goto err_unmap_fa;
 }

 return 0;

err_unmap_fa:
 FUNC_2(VAR_3);

err_free:
 FUNC_5(VAR_3, VAR_3->fw.arbel.fw_icm, 0);
 return VAR_4;
}
