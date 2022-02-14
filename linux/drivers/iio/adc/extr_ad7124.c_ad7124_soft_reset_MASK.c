
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* spi; } ;
struct ad7124_state {TYPE_2__ sd; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int,unsigned int*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct ad7124_state *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(&VAR_3->sd, 64);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = 100;
 do {
  VAR_6 = FUNC_0(&VAR_3->sd, VAR_0, 1, &VAR_4);
  if (VAR_6 < 0)
   return VAR_6;

  if (!(VAR_4 & VAR_1))
   return 0;


  FUNC_3(100, 2000);
 } while (--VAR_5);

 FUNC_2(&VAR_3->sd.spi->dev, "Soft reset failed\n");

 return -VAR_2;
}
