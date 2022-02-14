
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad5758_state {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ad5758_state*,int ,int ) ;
 int FUNC_1 (struct ad5758_state*,int ,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(struct ad5758_state *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2,
       VAR_3);
 if (VAR_5 < 0) {
  FUNC_2(&VAR_4->spi->dev,
   "Failed to initiate a calibration memory refresh\n");
  return VAR_5;
 }


 return FUNC_1(VAR_4, VAR_1,
          VAR_0);
}
