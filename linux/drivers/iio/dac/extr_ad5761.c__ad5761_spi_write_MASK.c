
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ad5761_state {TYPE_1__* data; int spi; } ;
struct TYPE_2__ {int * d8; int d32; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ad5761_state *VAR_0, u8 VAR_1, u16 VAR_2)
{
 VAR_0->data[0].d32 = FUNC_1(FUNC_0(VAR_1) | VAR_2);

 return FUNC_2(VAR_0->spi, &VAR_0->data[0].d8[1], 3);
}
