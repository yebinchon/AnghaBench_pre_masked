
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_wp_data {scalar_t__ phys_base; } ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ VAR_0 ;

phys_addr_t FUNC_0(struct hdmi_wp_data *VAR_1)
{
 return VAR_1->phys_base + VAR_0;
}
