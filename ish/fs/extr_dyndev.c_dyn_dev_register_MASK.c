
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_ops {int dummy; } ;
struct TYPE_2__ {int devs_lock; struct dev_ops** devs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct dev_ops *VAR_6, int VAR_7, int VAR_8, int VAR_9) {

    if (VAR_9 < 0 || VAR_9 > VAR_2) {
        return VAR_4;
    }
    if (VAR_8 != VAR_1) {
        return VAR_4;
    }
    if (VAR_6 == ((void*)0)) {
        return VAR_4;
    }
    if (VAR_7 != VAR_0) {
        return VAR_4;
    }

    FUNC_0(&VAR_5.devs_lock);


    if (VAR_5.devs[VAR_9] != ((void*)0)) {
        FUNC_1(&VAR_5.devs_lock);
        return VAR_3;
    }

    VAR_5.devs[VAR_9] = VAR_6;
    FUNC_1(&VAR_5.devs_lock);

    return 0;
}
