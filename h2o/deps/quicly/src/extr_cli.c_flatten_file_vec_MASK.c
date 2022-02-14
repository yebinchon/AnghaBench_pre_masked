
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ cbdata; } ;
typedef TYPE_1__ quicly_sendbuf_vec_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,void*,size_t,size_t) ;

__attribute__((used)) static int FUNC_1(quicly_sendbuf_vec_t *VAR_3, void *VAR_4, size_t VAR_5, size_t VAR_6)
{
    int VAR_7 = (int)VAR_3->cbdata;
    ssize_t VAR_8;


    while ((VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_6, VAR_5)) == -1 && VAR_2 == VAR_0)
        ;

    return VAR_8 == VAR_6 ? 0 : VAR_1;
}
