
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_device {int init_state; int sc_dev; int sd_type; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct i40iw_device*,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_2(struct i40iw_device *VAR_3)
{
 enum i40iw_status_code VAR_4;

 VAR_3->sd_type = VAR_1;
 VAR_4 = FUNC_0(&VAR_3->sc_dev, VAR_2);
 if (VAR_4)
  goto exit;
 VAR_4 = FUNC_1(VAR_3, 1);
 if (VAR_4)
  goto exit;
 VAR_3->init_state = VAR_0;
exit:
 return VAR_4;
}
