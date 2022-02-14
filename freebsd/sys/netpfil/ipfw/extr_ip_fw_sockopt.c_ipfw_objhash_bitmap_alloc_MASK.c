
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (size_t,int ,int ) ;
 int FUNC_2 (int *,int,size_t) ;

void
FUNC_3(uint32_t VAR_4, void **VAR_5, int *VAR_6)
{
 size_t VAR_7;
 int VAR_8;
 u_long *VAR_9;

 FUNC_0((VAR_4 % VAR_0) == 0,
    ("bitmask size needs to power of 2 and greater or equal to %zu",
     VAR_0));

 VAR_8 = VAR_4 / VAR_0;
 VAR_7 = VAR_4 / 8;
 VAR_9 = FUNC_1(VAR_7 * VAR_1, VAR_2, VAR_3);

 FUNC_2(VAR_9, 0xFF, VAR_7 * VAR_1);
 *VAR_9 &= ~(u_long)1;

 *VAR_5 = VAR_9;
 *VAR_6 = VAR_8;
}
