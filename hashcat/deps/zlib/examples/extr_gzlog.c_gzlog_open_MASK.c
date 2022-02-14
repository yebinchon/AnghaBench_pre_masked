
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log {int fd; struct log* path; struct log* end; struct log* id; } ;
typedef struct log gzlog ;


 char* VAR_0 ;
 int FUNC_0 (struct log*) ;
 scalar_t__ FUNC_1 (struct log*) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (struct log*,char*) ;
 size_t FUNC_4 (char*) ;

gzlog *FUNC_5(char *VAR_1)
{
    size_t VAR_2;
    struct log *VAR_3;


    if (VAR_1 == ((void*)0) || *VAR_1 == 0)
        return ((void*)0);


    VAR_3 = FUNC_2(sizeof(struct log));
    if (VAR_3 == ((void*)0))
        return ((void*)0);
    FUNC_3(VAR_3->id, VAR_0);
    VAR_3->fd = -1;


    VAR_2 = FUNC_4(VAR_1);
    VAR_3->path = FUNC_2(VAR_2 + 9);
    if (VAR_3->path == ((void*)0)) {
        FUNC_0(VAR_3);
        return ((void*)0);
    }
    FUNC_3(VAR_3->path, VAR_1);
    VAR_3->end = VAR_3->path + VAR_2;



    if (FUNC_1(VAR_3)) {
        FUNC_0(VAR_3->path);
        FUNC_0(VAR_3);
        return ((void*)0);
    }


    return VAR_3;
}
