
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int display; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;
typedef scalar_t__ const Atom ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*,int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static Atom FUNC_1(Atom* VAR_3,
                             unsigned long VAR_4,
                             const char* VAR_5)
{
    const Atom VAR_6 = FUNC_0(VAR_2.x11.display, VAR_5, VAR_0);

    for (unsigned int VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    {
        if (VAR_3[VAR_7] == VAR_6)
            return VAR_6;
    }

    return VAR_1;
}
