
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ outlen; scalar_t__ pwdlen; scalar_t__ saltlen; scalar_t__ secretlen; scalar_t__ adlen; int m_cost; int lanes; scalar_t__ t_cost; scalar_t__ threads; int * ad; int * secret; int * salt; int * pwd; int * out; } ;
typedef TYPE_1__ argon2_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;

int
FUNC_0(const argon2_context *VAR_43)
{

    if (((void*)0) == VAR_43) {
        return VAR_3;
    }

    if (((void*)0) == VAR_43->out) {
        return VAR_27;
    }


    if (VAR_20 > VAR_43->outlen) {
        return VAR_29;
    }

    if (VAR_9 < VAR_43->outlen) {
        return VAR_28;
    }


    if (((void*)0) == VAR_43->pwd) {
        if (0 != VAR_43->pwdlen) {
            return VAR_30;
        }
    }

    if (VAR_21 > VAR_43->pwdlen) {
        return VAR_32;
    }

    if (VAR_10 < VAR_43->pwdlen) {
        return VAR_31;
    }


    if (((void*)0) == VAR_43->salt) {
        if (0 != VAR_43->saltlen) {
            return VAR_33;
        }
    }

    if (VAR_22 > VAR_43->saltlen) {
        return VAR_35;
    }

    if (VAR_11 < VAR_43->saltlen) {
        return VAR_34;
    }


    if (((void*)0) == VAR_43->secret) {
        if (0 != VAR_43->secretlen) {
            return VAR_36;
        }
    } else {
        if (VAR_23 > VAR_43->secretlen) {
            return VAR_38;
        }

        if (VAR_12 < VAR_43->secretlen) {
            return VAR_37;
        }
    }


    if (((void*)0) == VAR_43->ad) {
        if (0 != VAR_43->adlen) {
            return VAR_0;
        }
    } else {
        if (VAR_17 > VAR_43->adlen) {
            return VAR_2;
        }

        if (VAR_6 < VAR_43->adlen) {
            return VAR_1;
        }
    }


    if (VAR_19 > VAR_43->m_cost) {
        return VAR_15;
    }

    if (VAR_8 < VAR_43->m_cost) {
        return VAR_16;
    }

    if (VAR_43->m_cost < 8 * VAR_43->lanes) {
        return VAR_15;
    }


    if (VAR_25 > VAR_43->t_cost) {
        return VAR_42;
    }

    if (VAR_14 < VAR_43->t_cost) {
        return VAR_41;
    }


    if (VAR_18 > VAR_43->lanes) {
        return VAR_4;
    }

    if (VAR_7 < VAR_43->lanes) {
        return VAR_5;
    }


    if (VAR_24 > VAR_43->threads) {
        return VAR_39;
    }

    if (VAR_13 < VAR_43->threads) {
        return VAR_40;
    }


    return VAR_26;
}
