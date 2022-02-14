
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;

unsigned long FUNC_1(int VAR_6)
{
        if (VAR_6 >= VAR_2) {
                return (VAR_0 + (VAR_6 - 132) * VAR_1);
        } else if (VAR_6 > VAR_5 || VAR_6 < 0)
                return 0;
        else if (FUNC_0(VAR_6))
                return 0;

        return (VAR_3 + VAR_6 * VAR_4);
}
