
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct n2rng {TYPE_1__* data; } ;
struct TYPE_2__ {int chip_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static u64 FUNC_0(struct n2rng *VAR_11, int VAR_12)
{
 u64 VAR_13 = 0;

 if (VAR_11->data->chip_version == 1) {
  VAR_13 = ((2 << VAR_5) |
   (VAR_0 << VAR_7) |
    VAR_4);

  switch (VAR_12) {
  case 0:
   VAR_13 |= (1 << VAR_6) | VAR_1;
   break;
  case 1:
   VAR_13 |= (2 << VAR_6) | VAR_2;
   break;
  case 2:
   VAR_13 |= (3 << VAR_6) | VAR_3;
   break;
  case 3:
   VAR_13 |= VAR_1 | VAR_2 | VAR_3;
   break;
  default:
   break;
  }

 } else {
  VAR_13 = ((2 << VAR_8) |
   (VAR_0 << VAR_10) |
    VAR_4);

  switch (VAR_12) {
  case 0:
   VAR_13 |= (1 << VAR_9) | VAR_1;
   break;
  case 1:
   VAR_13 |= (2 << VAR_9) | VAR_2;
   break;
  case 2:
   VAR_13 |= (3 << VAR_9) | VAR_3;
   break;
  case 3:
   VAR_13 |= VAR_1 | VAR_2 | VAR_3;
   break;
  default:
   break;
  }
 }

 return VAR_13;
}
