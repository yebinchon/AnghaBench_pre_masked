
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct st_stream_data_t {int dummy; } ;
struct TYPE_9__ {int * callbacks; } ;
typedef TYPE_3__ quicly_stream_t ;
typedef int quicly_stream_open_t ;
struct TYPE_10__ {TYPE_2__* tls; } ;
struct TYPE_7__ {scalar_t__ count; } ;
struct TYPE_8__ {TYPE_1__ certificates; } ;


 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(quicly_stream_open_t *VAR_3, quicly_stream_t *VAR_4)
{
    int VAR_5;

    if ((VAR_5 = FUNC_0(VAR_4, sizeof(struct st_stream_data_t))) != 0)
        return VAR_5;
    VAR_4->callbacks = VAR_1.tls->certificates.count != 0 ? &VAR_2 : &VAR_0;
    return 0;
}
