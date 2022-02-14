
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** ttys; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(int VAR_3) {
    if (VAR_3 < 0 || VAR_3 > VAR_0)
        return 0;
    FUNC_0(&VAR_2);
    bool VAR_4 = VAR_1.ttys[VAR_3] != ((void*)0);
    FUNC_1(&VAR_2);
    return VAR_4;
}
