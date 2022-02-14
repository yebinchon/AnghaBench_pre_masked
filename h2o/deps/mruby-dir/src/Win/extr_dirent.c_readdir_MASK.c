
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dirent {int d_name; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int handle; TYPE_3__ info; struct dirent result; } ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_3__*) ;
 int VAR_1 ;

struct dirent *FUNC_1(DIR *VAR_2)
{
    struct dirent *VAR_3 = 0;

    if(VAR_2 && VAR_2->handle != -1)
    {
        if(!VAR_2->result.d_name || FUNC_0(VAR_2->handle, &VAR_2->info) != -1)
        {
            VAR_3 = &VAR_2->result;
            VAR_3->d_name = VAR_2->info.name;
        }
    }
    else
    {
        VAR_1 = VAR_0;
    }

    return VAR_3;
}
