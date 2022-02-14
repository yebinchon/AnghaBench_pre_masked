
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,scalar_t__,int ) ;
 int FUNC_1 (int,void*,size_t) ;

ssize_t FUNC_2(int VAR_2, void *VAR_3, size_t VAR_4, off_t VAR_5)
{
        off_t VAR_6;
        ssize_t VAR_7;

        VAR_6 = FUNC_0(VAR_2, 0, VAR_0);

        if (FUNC_0(VAR_2, VAR_5, VAR_1) < 0)
                return -1;

        VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4);

        if (VAR_6 != FUNC_0(VAR_2, VAR_6, VAR_1))
                return -1;
        return VAR_7;
}
