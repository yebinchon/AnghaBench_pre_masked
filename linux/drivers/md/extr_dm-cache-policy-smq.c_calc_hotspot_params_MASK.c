
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sector_t ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(sector_t VAR_0,
    sector_t VAR_1,
    unsigned VAR_2,
    sector_t *VAR_3,
    unsigned *VAR_4)
{
 *VAR_3 = VAR_1 * 16u;
 *VAR_4 = FUNC_0(VAR_2 / 4u, 1024u);

 while ((*VAR_3 > VAR_1) &&
        FUNC_1(VAR_0, *VAR_3, *VAR_4))
  *VAR_3 /= 2u;
}
