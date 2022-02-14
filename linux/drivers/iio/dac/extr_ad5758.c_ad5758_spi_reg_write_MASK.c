
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5758_state {int * d32; int spi; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ad5758_state *VAR_0,
    unsigned int VAR_1,
    unsigned int VAR_2)
{
 VAR_0->d32[0] = FUNC_1((FUNC_0(VAR_1) << 24) |
     ((VAR_2 & 0xFFFF) << 8));

 return FUNC_2(VAR_0->spi, &VAR_0->d32[0], sizeof(VAR_0->d32[0]));
}
