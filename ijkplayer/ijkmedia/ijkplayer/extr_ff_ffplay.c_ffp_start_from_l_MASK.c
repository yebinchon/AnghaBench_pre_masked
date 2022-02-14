
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int VideoState ;
struct TYPE_6__ {int auto_resume; int * is; } ;
typedef TYPE_1__ FFPlayer ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,long) ;
 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(FFPlayer *VAR_1, long VAR_2)
{
    FUNC_0(VAR_1);
    VideoState *VAR_3 = VAR_1->is;
    if (!VAR_3)
        return VAR_0;

    VAR_1->auto_resume = 1;
    FUNC_2(VAR_1, 1);
    FUNC_1(VAR_1, VAR_2);
    return 0;
}
