
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,void const*,size_t) ;

ssize_t FUNC_2(int VAR_1, const void *VAR_2, size_t VAR_3) {
    ssize_t VAR_4;

    VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
    if (VAR_4 == -1)
        FUNC_0(VAR_0, "Failed to write %d", VAR_1);
    else
        return VAR_4;
}
