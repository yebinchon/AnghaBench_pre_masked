
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ad5504_state {int * data; int spi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ad5504_state *VAR_2, u8 VAR_3, u16 VAR_4)
{
 VAR_2->data[0] = FUNC_1(VAR_0 | FUNC_0(VAR_3) |
         (VAR_4 & VAR_1));

 return FUNC_2(VAR_2->spi, &VAR_2->data[0], 2);
}
