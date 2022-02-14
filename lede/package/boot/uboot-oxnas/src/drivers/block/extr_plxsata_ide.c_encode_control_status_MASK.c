
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long oxnas_dma_transfer_direction_t ;
struct TYPE_4__ {unsigned long dreq_; scalar_t__ bus_; scalar_t__ transfer_mode_; scalar_t__ address_mode_; unsigned long width_; scalar_t__ address_really_fixed_; } ;
typedef TYPE_1__ oxnas_dma_device_settings_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;

__attribute__((used)) static unsigned long FUNC_0(
 oxnas_dma_device_settings_t* VAR_23,
 oxnas_dma_device_settings_t* VAR_24)
{
 unsigned long VAR_25;
 oxnas_dma_transfer_direction_t VAR_26;

 VAR_25 = VAR_7;
 VAR_25 |= VAR_5;
 VAR_25 |= (VAR_23->dreq_ << VAR_11);
 VAR_25 |= (VAR_24->dreq_ << VAR_2);
 VAR_25 &= ~VAR_8;


 VAR_25 |= VAR_6;


 if (VAR_23->bus_ == VAR_21) {

  if (VAR_23->transfer_mode_
   == VAR_22) {
   VAR_25 |= VAR_14;
  } else {
   VAR_25 &= ~VAR_14;
  }

  if (VAR_24->bus_ == VAR_21) {
   VAR_26 = VAR_16;
  } else {
   VAR_26 = VAR_17;


   if (VAR_24->transfer_mode_
    == VAR_22) {
    VAR_25 |= VAR_15;
   } else {
    VAR_25 &= ~VAR_15;
   }
  }
 } else {

  if (VAR_23->transfer_mode_
   == VAR_22) {
   VAR_25 |= VAR_15;
  } else {
   VAR_25 &= ~VAR_15;
  }

  if (VAR_24->bus_ == VAR_21) {
   VAR_26 = VAR_18;


   if (VAR_24->transfer_mode_
    == VAR_22) {
    VAR_25 |= VAR_14;
   } else {
    VAR_25 &= ~VAR_14;
   }
  } else {
   VAR_26 = VAR_19;
  }
 }
 VAR_25 |= (VAR_26 << VAR_4);


 if (VAR_23->address_mode_ == VAR_20) {

  VAR_25 &= ~(VAR_10);


  if (VAR_23->address_really_fixed_) {
   VAR_25 |= VAR_9;
  } else {
   VAR_25 &= ~VAR_9;
  }
 } else {

  VAR_25 |= VAR_10;
  VAR_25 &= ~VAR_9;
 }


 if (VAR_24->address_mode_ == VAR_20) {

  VAR_25 &= ~(VAR_1);


  if (VAR_24->address_really_fixed_) {
   VAR_25 |=
    VAR_0;
  } else {
   VAR_25 &=
    ~VAR_0;
  }
 } else {

  VAR_25 |= VAR_1;
  VAR_25 &= ~VAR_0;
 }


 VAR_25 |=
  (VAR_23->width_ << VAR_12);
 VAR_25 |=
  (VAR_24->width_ << VAR_3);


 VAR_25 &= ~VAR_13;

 return VAR_25;
}
