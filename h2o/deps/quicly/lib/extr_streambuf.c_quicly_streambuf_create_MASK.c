
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ingress; int egress; } ;
typedef TYPE_1__ quicly_streambuf_t ;
struct TYPE_6__ {TYPE_1__* data; } ;
typedef TYPE_2__ quicly_stream_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (size_t) ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(quicly_stream_t *VAR_1, size_t VAR_2)
{
    quicly_streambuf_t *VAR_3;

    FUNC_0(VAR_2 >= sizeof(*VAR_3));
    FUNC_0(VAR_1->data == ((void*)0));

    if ((VAR_3 = FUNC_1(VAR_2)) == ((void*)0))
        return VAR_0;
    FUNC_4(&VAR_3->egress);
    FUNC_3(&VAR_3->ingress, "", 0);
    if (VAR_2 != sizeof(*VAR_3))
        FUNC_2((char *)VAR_3 + sizeof(*VAR_3), 0, VAR_2 - sizeof(*VAR_3));

    VAR_1->data = VAR_3;
    return 0;
}
