
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ GetExtensionsStringEXT; scalar_t__ GetExtensionsStringARB; } ;
struct TYPE_4__ {TYPE_1__ wgl; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(const char* VAR_2)
{
    const char* VAR_3 = ((void*)0);

    if (VAR_1.wgl.GetExtensionsStringARB)
        VAR_3 = FUNC_2(FUNC_1());
    else if (VAR_1.wgl.GetExtensionsStringEXT)
        VAR_3 = FUNC_3();

    if (!VAR_3)
        return VAR_0;

    return FUNC_0(VAR_2, VAR_3);
}
