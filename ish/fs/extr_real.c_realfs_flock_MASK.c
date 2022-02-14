
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int real_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;

int FUNC_1(struct fd *VAR_8, int VAR_9) {
    int VAR_10 = 0;
    if (VAR_9 & VAR_5) VAR_10 |= VAR_4;
    if (VAR_9 & VAR_1) VAR_10 |= VAR_0;
    if (VAR_9 & VAR_7) VAR_10 |= VAR_6;
    if (VAR_9 & VAR_3) VAR_10 |= VAR_2;
    return FUNC_0(VAR_8->real_fd, VAR_10);
}
