
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
typedef TYPE_1__ ptls_t ;
typedef int ptls_iovec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_1(ptls_t *VAR_3, ptls_iovec_t VAR_4)
{
    int VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1);

    if (VAR_5 == 0) {
        VAR_3->state = VAR_2;
        VAR_5 = VAR_0;
    }

    return VAR_5;
}
