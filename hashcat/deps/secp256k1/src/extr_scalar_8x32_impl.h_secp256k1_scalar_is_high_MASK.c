
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* d; } ;
typedef TYPE_1__ secp256k1_scalar ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_0(const secp256k1_scalar *VAR_8) {
    int VAR_9 = 0;
    int VAR_10 = 0;
    VAR_10 |= (VAR_8->d[7] < VAR_7);
    VAR_9 |= (VAR_8->d[7] > VAR_7) & ~VAR_10;
    VAR_10 |= (VAR_8->d[6] < VAR_6) & ~VAR_9;
    VAR_10 |= (VAR_8->d[5] < VAR_5) & ~VAR_9;
    VAR_10 |= (VAR_8->d[4] < VAR_4) & ~VAR_9;
    VAR_10 |= (VAR_8->d[3] < VAR_3) & ~VAR_9;
    VAR_9 |= (VAR_8->d[3] > VAR_3) & ~VAR_10;
    VAR_10 |= (VAR_8->d[2] < VAR_2) & ~VAR_9;
    VAR_9 |= (VAR_8->d[2] > VAR_2) & ~VAR_10;
    VAR_10 |= (VAR_8->d[1] < VAR_1) & ~VAR_9;
    VAR_9 |= (VAR_8->d[1] > VAR_1) & ~VAR_10;
    VAR_9 |= (VAR_8->d[0] > VAR_0) & ~VAR_10;
    return VAR_9;
}
