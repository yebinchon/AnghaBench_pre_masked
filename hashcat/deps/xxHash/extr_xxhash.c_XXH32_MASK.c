
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XXH_endianess ;
typedef int XXH32_state_t ;


 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 (void const*,size_t,unsigned int,scalar_t__,int ) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,void const*,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

unsigned int FUNC_4 (const void* VAR_7, size_t VAR_8, unsigned int VAR_9)
{







    XXH_endianess VAR_10 = (XXH_endianess)VAR_0;

    if (VAR_1) {
        if ((((size_t)VAR_7) & 3) == 0) {
            if ((VAR_10==VAR_5) || VAR_2)
                return FUNC_1(VAR_7, VAR_8, VAR_9, VAR_5, VAR_3);
            else
                return FUNC_1(VAR_7, VAR_8, VAR_9, VAR_4, VAR_3);
    } }

    if ((VAR_10==VAR_5) || VAR_2)
        return FUNC_1(VAR_7, VAR_8, VAR_9, VAR_5, VAR_6);
    else
        return FUNC_1(VAR_7, VAR_8, VAR_9, VAR_4, VAR_6);

}
