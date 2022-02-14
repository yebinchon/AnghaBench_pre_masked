
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5758_state {int * d32; int spi; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ad5758_state *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = (FUNC_0(VAR_0) << 24) | 0x5C3A;
 VAR_1->d32[0] = FUNC_1(VAR_2);

 return FUNC_2(VAR_1->spi, &VAR_1->d32[0], 4);
}
