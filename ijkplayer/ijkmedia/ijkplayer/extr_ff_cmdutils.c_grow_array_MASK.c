
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 void* FUNC_1 (void*,int,int) ;
 int FUNC_2 (void*,int ,int) ;

void *FUNC_3(void *VAR_2, int VAR_3, int *VAR_4, int VAR_5)
{
    if (VAR_5 >= VAR_1 / VAR_3) {
        FUNC_0(((void*)0), VAR_0, "Array too big.\n");
        return ((void*)0);
    }
    if (*VAR_4 < VAR_5) {
        uint8_t *VAR_6 = FUNC_1(VAR_2, VAR_5, VAR_3);
        if (!VAR_6) {
            FUNC_0(((void*)0), VAR_0, "Could not alloc buffer.\n");
            return ((void*)0);
        }
        FUNC_2(VAR_6 + *VAR_4*VAR_3, 0, (VAR_5-*VAR_4) * VAR_3);
        *VAR_4 = VAR_5;
        return VAR_6;
    }
    return VAR_2;
}
