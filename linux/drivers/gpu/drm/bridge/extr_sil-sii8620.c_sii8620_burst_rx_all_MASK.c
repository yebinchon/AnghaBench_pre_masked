
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int rx_count; int r_size; int * rx_buf; } ;
struct sii8620 {TYPE_1__ burst; } ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sii8620 *VAR_0)
{
 u8 *VAR_1 = VAR_0->burst.rx_buf;
 int VAR_2 = VAR_0->burst.rx_count;

 while (VAR_2-- > 0) {
  int VAR_3 = *VAR_1++;
  int VAR_4 = FUNC_0(&VAR_1[0]);

  switch (VAR_4) {
  case 128:
   VAR_0->burst.r_size = FUNC_1(&VAR_1[2]);
   break;
  default:
   break;
  }
  VAR_2 -= VAR_3;
  VAR_1 += VAR_3;
 }
 VAR_0->burst.rx_count = 0;
}
