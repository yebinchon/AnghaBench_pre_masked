
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct fd {int real_fd; } ;
typedef int socklen_t ;
typedef int addr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct sockaddr*,int*) ;

__attribute__((used)) static void FUNC_1(struct fd *VAR_4, int *VAR_5) {



    if (*VAR_5 == VAR_2) {
        struct sockaddr VAR_6;
        socklen_t VAR_7 = sizeof(VAR_6);
        if (FUNC_0(VAR_4->real_fd, &VAR_6, &VAR_7) < 0 && VAR_3 == VAR_0) {
            *VAR_5 = VAR_1;
        }
    }
}
