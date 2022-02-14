
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40iw_sc_cqp {int sdbuf; TYPE_1__* dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int hw; scalar_t__ is_pf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_4(struct i40iw_sc_cqp *VAR_9)
{
 u32 VAR_10 = 0, VAR_11 = 1;
 enum i40iw_status_code VAR_12 = 0;
 u32 VAR_13;

 if (VAR_9->dev->is_pf) {
  FUNC_2(VAR_9->dev->hw, VAR_0, 0);
  FUNC_2(VAR_9->dev->hw, VAR_1, 0);
  VAR_13 = VAR_2;
 } else {
  FUNC_2(VAR_9->dev->hw, VAR_3, 0);
  FUNC_2(VAR_9->dev->hw, VAR_4, 0);
  VAR_13 = VAR_5;
 }
 do {
  if (VAR_10++ > VAR_6) {
   VAR_12 = VAR_7;
   break;
  }
  FUNC_3(VAR_8);
  VAR_11 = FUNC_1(VAR_9->dev->hw, VAR_13);
 } while (VAR_11);

 FUNC_0(VAR_9->dev->hw, &VAR_9->sdbuf);
 return VAR_12;
}
