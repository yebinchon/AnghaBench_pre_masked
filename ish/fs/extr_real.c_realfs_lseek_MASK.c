
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int real_fd; int * dir; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (struct fd*,scalar_t__) ;

off_t FUNC_3(struct fd *VAR_7, off_t VAR_8, int VAR_9) {
    if (VAR_7->dir != ((void*)0) && VAR_9 == VAR_2) {
        FUNC_2(VAR_7, VAR_8);
        return VAR_8;
    }

    if (VAR_9 == VAR_2)
        VAR_9 = VAR_5;
    else if (VAR_9 == VAR_0)
        VAR_9 = VAR_3;
    else if (VAR_9 == VAR_1)
        VAR_9 = VAR_4;
    else
        return VAR_6;
    off_t VAR_10 = FUNC_1(VAR_7->real_fd, VAR_8, VAR_9);
    if (VAR_10 < 0)
        return FUNC_0();
    return VAR_10;
}
