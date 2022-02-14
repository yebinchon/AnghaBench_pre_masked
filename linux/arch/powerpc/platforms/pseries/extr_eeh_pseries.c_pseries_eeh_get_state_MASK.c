
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeh_pe {int config_addr; int addr; TYPE_1__* phb; } ;
struct TYPE_2__ {int buid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (scalar_t__,int,int,int*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct eeh_pe *VAR_9, int *VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13[4];
 int VAR_14;


 VAR_11 = VAR_9->config_addr;
 if (VAR_9->addr)
  VAR_11 = VAR_9->addr;

 if (VAR_8 != VAR_6) {
  VAR_12 = FUNC_2(VAR_8, 3, 4, VAR_13,
    VAR_11, FUNC_0(VAR_9->phb->buid),
    FUNC_1(VAR_9->phb->buid));
 } else if (VAR_7 != VAR_6) {

  VAR_13[2] = 0;
  VAR_12 = FUNC_2(VAR_7, 3, 3, VAR_13,
    VAR_11, FUNC_0(VAR_9->phb->buid),
    FUNC_1(VAR_9->phb->buid));
 } else {
  return VAR_3;
 }

 if (VAR_12)
  return VAR_12;


 if (!VAR_13[1])
  return VAR_3;

 switch(VAR_13[0]) {
 case 0:
  VAR_14 = VAR_1 |
    VAR_0;
  break;
 case 1:
  VAR_14 = VAR_4 |
    VAR_1 |
    VAR_0;
  break;
 case 2:
  VAR_14 = 0;
  break;
 case 4:
  VAR_14 = VAR_2;
  break;
 case 5:
  if (VAR_13[2]) {
   if (VAR_10)
    *VAR_10 = VAR_13[2];
   VAR_14 = VAR_5;
  } else {
   VAR_14 = VAR_3;
  }
  break;
 default:
  VAR_14 = VAR_3;
 }

 return VAR_14;
}
