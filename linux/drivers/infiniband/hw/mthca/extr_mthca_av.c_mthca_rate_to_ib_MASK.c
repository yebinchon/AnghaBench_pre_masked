
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int stat_rate_support; } ;
struct mthca_dev {int * rate; TYPE_1__ limits; } ;
typedef enum ib_rate { ____Placeholder_ib_rate } ib_rate ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct mthca_dev*) ;
 int FUNC_2 (int,int ) ;

enum ib_rate FUNC_3(struct mthca_dev *VAR_1, u8 VAR_2, u8 VAR_3)
{
 if (FUNC_1(VAR_1)) {

  if (VAR_1->limits.stat_rate_support == 0x3 && VAR_2)
   return VAR_0;

  return FUNC_0(VAR_2, VAR_1->rate[VAR_3 - 1]);
 } else
  return FUNC_2(VAR_2, VAR_1->rate[VAR_3 - 1]);
}
