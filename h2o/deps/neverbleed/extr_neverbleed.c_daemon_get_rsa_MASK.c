
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int ** keys; } ;
struct TYPE_4__ {TYPE_1__ keys; } ;
typedef int RSA ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static RSA *FUNC_3(size_t VAR_1)
{
    RSA *VAR_2;

    FUNC_1(&VAR_0.keys.lock);
    VAR_2 = VAR_0.keys.keys[VAR_1];
    if (VAR_2)
        FUNC_0(VAR_2);
    FUNC_2(&VAR_0.keys.lock);

    return VAR_2;
}
