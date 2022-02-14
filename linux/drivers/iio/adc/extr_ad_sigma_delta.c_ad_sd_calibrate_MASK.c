
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad_sigma_delta {int bus_locked; int keep_cs_asserted; int irq_dis; TYPE_1__* spi; int completion; } ;
struct TYPE_2__ {int master; int irq; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ad_sigma_delta*,unsigned int) ;
 int FUNC_1 (struct ad_sigma_delta*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 unsigned long FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(struct ad_sigma_delta *VAR_3,
 unsigned int VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_0(VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_5(VAR_3->spi->master);
 VAR_3->bus_locked = 1;
 VAR_3->keep_cs_asserted = 1;
 FUNC_4(&VAR_3->completion);

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6 < 0)
  goto out;

 VAR_3->irq_dis = 0;
 FUNC_3(VAR_3->spi->irq);
 VAR_7 = FUNC_7(&VAR_3->completion, 2 * VAR_2);
 if (VAR_7 == 0) {
  VAR_3->irq_dis = 1;
  FUNC_2(VAR_3->spi->irq);
  VAR_6 = -VAR_1;
 } else {
  VAR_6 = 0;
 }
out:
 VAR_3->keep_cs_asserted = 0;
 FUNC_1(VAR_3, VAR_0);
 VAR_3->bus_locked = 0;
 FUNC_6(VAR_3->spi->master);

 return VAR_6;
}
