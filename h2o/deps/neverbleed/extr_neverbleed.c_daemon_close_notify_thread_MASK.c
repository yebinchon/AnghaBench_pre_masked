
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_6__ {TYPE_2__* nb; } ;
struct TYPE_4__ {int sun_path; } ;
struct TYPE_5__ {TYPE_1__ sun_; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) __attribute__((noreturn)) static void *FUNC_4(void *VAR_3)
{
    int VAR_4 = (int)((char *)VAR_3 - (char *)((void*)0));
    char VAR_5;
    ssize_t VAR_6;

Redo:
    VAR_6 = FUNC_2(VAR_4, &VAR_5, 1);
    if (VAR_6 == -1 && VAR_2 == VAR_0)
        goto Redo;
    if (VAR_6 > 0)
        goto Redo;



    FUNC_3(FUNC_1(VAR_1.nb->sun_.sun_path));

    FUNC_0(0);
}
