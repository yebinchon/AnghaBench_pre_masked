
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ad5791_state {TYPE_1__* data; int spi; } ;
struct TYPE_2__ {int * d8; int d32; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ad5791_state *VAR_2, u8 VAR_3, u32 VAR_4)
{
 VAR_2->data[0].d32 = FUNC_1(VAR_0 |
         FUNC_0(VAR_3) |
         (VAR_4 & VAR_1));

 return FUNC_2(VAR_2->spi, &VAR_2->data[0].d8[1], 3);
}
