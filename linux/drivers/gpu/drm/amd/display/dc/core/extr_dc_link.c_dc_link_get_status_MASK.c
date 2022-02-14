
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_link_status {int dummy; } ;
struct dc_link {struct dc_link_status const link_status; } ;



const struct dc_link_status *FUNC_0(const struct dc_link *VAR_0)
{
 return &VAR_0->link_status;
}
