
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int group; int available; } ;
struct TYPE_5__ {int* keycodes; char** keynames; TYPE_1__ xkb; int display; } ;
struct TYPE_6__ {TYPE_2__ x11; } ;
typedef scalar_t__ KeySym ;


 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ) ;
 TYPE_3__ VAR_1 ;
 long FUNC_1 (scalar_t__ const) ;
 size_t FUNC_2 (char*,unsigned int) ;

const char* FUNC_3(int VAR_2)
{
    if (!VAR_1.x11.xkb.available)
        return ((void*)0);

    const int VAR_3 = VAR_1.x11.keycodes[VAR_2];
    const KeySym VAR_4 = FUNC_0(VAR_1.x11.display,
                                             VAR_2, VAR_1.x11.xkb.group, 0);
    if (VAR_4 == VAR_0)
        return ((void*)0);

    const long VAR_5 = FUNC_1(VAR_4);
    if (VAR_5 == -1)
        return ((void*)0);

    const size_t VAR_6 = FUNC_2(VAR_1.x11.keynames[VAR_3], (unsigned int) VAR_5);
    if (VAR_6 == 0)
        return ((void*)0);

    VAR_1.x11.keynames[VAR_3][VAR_6] = '\0';
    return VAR_1.x11.keynames[VAR_3];
}
