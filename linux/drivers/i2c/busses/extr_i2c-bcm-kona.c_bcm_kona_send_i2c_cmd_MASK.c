
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_kona_i2c_dev {int device; scalar_t__ base; int done; } ;
typedef enum bcm_kona_cmd_t { ____Placeholder_bcm_kona_cmd_t } bcm_kona_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bcm_kona_i2c_dev*,int) ;
 int FUNC_1 (struct bcm_kona_i2c_dev*) ;
 int FUNC_2 (int ,char*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct bcm_kona_i2c_dev *VAR_5,
     enum bcm_kona_cmd_t VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = FUNC_3(VAR_2);


 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;


 FUNC_6(VAR_3, VAR_5->base + VAR_4);


 FUNC_4(&VAR_5->done);


 FUNC_0(VAR_5, VAR_6);


 VAR_8 = FUNC_5(&VAR_5->done, VAR_8);


 FUNC_6(0, VAR_5->base + VAR_4);

 if (!VAR_8) {
  FUNC_2(VAR_5->device, "controller timed out\n");
  VAR_7 = -VAR_1;
 }


 FUNC_0(VAR_5, VAR_0);

 return VAR_7;
}
