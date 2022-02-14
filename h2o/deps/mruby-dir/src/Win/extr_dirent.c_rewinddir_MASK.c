
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int handle_type ;
struct TYPE_4__ {scalar_t__ d_name; } ;
struct TYPE_5__ {int handle; TYPE_1__ result; int info; int name; } ;
typedef TYPE_2__ DIR ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_1 ;

void FUNC_2(DIR *VAR_2)
{
    if(VAR_2 && VAR_2->handle != -1)
    {
        FUNC_0(VAR_2->handle);
        VAR_2->handle = (handle_type) FUNC_1(VAR_2->name, &VAR_2->info);
        VAR_2->result.d_name = 0;
    }
    else
    {
        VAR_1 = VAR_0;
    }
}
