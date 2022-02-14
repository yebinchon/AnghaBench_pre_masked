
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_4__ {scalar_t__ read_final_eot_; scalar_t__ write_final_eot_; } ;
typedef TYPE_1__ oxnas_dma_device_settings_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static u32 FUNC_0(oxnas_dma_device_settings_t* VAR_2,
    oxnas_dma_device_settings_t* VAR_3,
    unsigned long VAR_4)
{

 unsigned long VAR_5 = VAR_4;
 if (VAR_3->write_final_eot_) {
  VAR_5 |= VAR_1;
 } else {
  VAR_5 &= ~VAR_1;
 }
 if (VAR_2->read_final_eot_) {
  VAR_5 |= VAR_0;
 } else {
  VAR_5 &= ~VAR_0;
 }






 return VAR_5;
}
