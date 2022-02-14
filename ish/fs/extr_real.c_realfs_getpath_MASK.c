
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* mount; int real_fd; } ;
struct TYPE_2__ {char* source; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;

int FUNC_4(struct fd *VAR_1, char *VAR_2) {
    int VAR_3 = FUNC_0(VAR_1->real_fd, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;
    if (FUNC_2(VAR_1->mount->source, "/") != 0 || FUNC_2(VAR_2, "/") == 0) {
        size_t VAR_4 = FUNC_3(VAR_1->mount->source);
        FUNC_1(VAR_2, VAR_2 + VAR_4, VAR_0 - VAR_4);
    }
    return 0;
}
