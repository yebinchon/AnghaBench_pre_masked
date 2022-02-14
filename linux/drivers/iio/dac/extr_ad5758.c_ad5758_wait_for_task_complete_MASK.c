
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad5758_state {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ad5758_state*,unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct ad5758_state *VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_4 = 10;
 do {
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;

  if (!(VAR_5 & VAR_3))
   return 0;

  FUNC_2(100, 1000);
 } while (--VAR_4);

 FUNC_1(&VAR_1->spi->dev,
  "Error reading bit 0x%x in 0x%x register\n", VAR_3, VAR_2);

 return -VAR_0;
}
