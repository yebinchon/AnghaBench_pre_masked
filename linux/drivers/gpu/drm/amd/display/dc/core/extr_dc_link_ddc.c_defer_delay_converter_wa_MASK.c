
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ddc_service {struct dc_link* link; } ;
struct TYPE_2__ {scalar_t__ branch_dev_id; int branch_dev_name; } ;
struct dc_link {TYPE_1__ dpcd_caps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static uint32_t FUNC_1(
 struct ddc_service *VAR_3,
 uint32_t VAR_4)
{
 struct dc_link *VAR_5 = VAR_3->link;

 if (VAR_5->dpcd_caps.branch_dev_id == VAR_0 &&
  !FUNC_0(VAR_5->dpcd_caps.branch_dev_name,
   VAR_1,
   sizeof(VAR_5->dpcd_caps.branch_dev_name)))
  return VAR_4 > VAR_2 ?
   VAR_4 : VAR_2;

 return VAR_4;
}
