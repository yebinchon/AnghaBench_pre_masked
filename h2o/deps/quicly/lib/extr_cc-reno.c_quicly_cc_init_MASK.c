
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cwnd; int ssthresh; } ;
typedef TYPE_1__ quicly_cc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(quicly_cc_t *VAR_3)
{
    FUNC_0(VAR_3, 0, sizeof(quicly_cc_t));
    VAR_3->cwnd = VAR_0 * VAR_1;
    VAR_3->ssthresh = VAR_2;
}
