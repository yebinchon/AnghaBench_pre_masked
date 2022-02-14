
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_plane_state {scalar_t__ format; } ;
struct dc_caps {int dummy; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

enum dc_status FUNC_0(const struct dc_plane_state *VAR_3, struct dc_caps *VAR_4)
{

 if (VAR_3->format < VAR_2)
  return VAR_1;

 return VAR_0;
}
