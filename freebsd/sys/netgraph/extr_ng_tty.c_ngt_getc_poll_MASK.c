
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty {int dummy; } ;
typedef TYPE_1__* sc_p ;
struct TYPE_3__ {size_t outqlen; } ;


 TYPE_1__* FUNC_0 (struct tty*) ;

__attribute__((used)) static size_t
FUNC_1(struct tty *VAR_0)
{
 sc_p VAR_1 = FUNC_0(VAR_0);

 return (VAR_1->outqlen);
}
