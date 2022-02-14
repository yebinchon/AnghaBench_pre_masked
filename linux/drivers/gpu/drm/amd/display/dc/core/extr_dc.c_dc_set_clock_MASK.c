
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* set_clock ) (struct dc*,int,int ,int ) ;} ;
struct dc {TYPE_1__ hwss; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
typedef enum dc_clock_type { ____Placeholder_dc_clock_type } dc_clock_type ;


 int VAR_0 ;
 int FUNC_0 (struct dc*,int,int ,int ) ;

enum dc_status FUNC_1(struct dc *VAR_1, enum dc_clock_type VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 if (VAR_1->hwss.set_clock)
  return VAR_1->hwss.set_clock(VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_0;
}
