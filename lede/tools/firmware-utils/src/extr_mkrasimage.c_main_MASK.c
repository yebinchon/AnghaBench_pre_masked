
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* name; } ;
struct TYPE_7__ {void* name; } ;
struct TYPE_6__ {scalar_t__ size; void* name; } ;
struct TYPE_5__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 void* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char**,char*) ;
 TYPE_4__ VAR_3 ;
 void* VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (void*,char*,scalar_t__*) ;
 int FUNC_5 (int ) ;
 void* VAR_10 ;

int FUNC_6(int VAR_11, char *VAR_12[])
{
    int VAR_13;
    VAR_6 = FUNC_0(VAR_12[0]);
    while (1) {
        int VAR_14;

        VAR_14 = FUNC_3(VAR_11, VAR_12, "b:k:o:r:s:v:h");
        if (VAR_14 == -1)
            break;

        switch (VAR_14) {
            case 'b':
                VAR_2 = VAR_4;
                break;
            case 'h':
                FUNC_5(VAR_1);
                break;
            case 'k':
                VAR_3.name = VAR_4;
                break;
            case 'o':
                VAR_5.name = VAR_4;
                break;
            case 'r':
                VAR_7.name = VAR_4;
                break;
            case 's':
                FUNC_4(VAR_4, "%u", &VAR_9);
                break;
            case 'v':
                VAR_10 = VAR_4;
                break;
            default:
                FUNC_5(VAR_0);
                break;
        }
    }

    VAR_13 = FUNC_2();
    if (VAR_13)
        FUNC_5(VAR_0);
    VAR_8.size = VAR_9 < VAR_7.size ? VAR_7.size : VAR_9;
    return FUNC_1();
}
