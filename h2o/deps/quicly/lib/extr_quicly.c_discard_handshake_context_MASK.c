
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int quicly_sentmap_event_t ;
typedef int quicly_sent_t ;
typedef int quicly_sent_packet_t ;
struct TYPE_13__ {TYPE_4__* application; int handshake; } ;
typedef TYPE_5__ quicly_conn_t ;
struct TYPE_9__ {int * zero_rtt; } ;
struct TYPE_10__ {int ** aead; TYPE_1__ header_protection; } ;
struct TYPE_11__ {TYPE_2__ ingress; } ;
struct TYPE_12__ {TYPE_3__ cipher; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_6(quicly_conn_t *VAR_2, const quicly_sent_packet_t *VAR_3, quicly_sent_t *VAR_4,
                                     quicly_sentmap_event_t VAR_5)
{
    switch (VAR_5) {
    case 130:
        return VAR_1;
    case 128:
        break;
    case 129:

        FUNC_1(VAR_2, VAR_0);
        FUNC_2(&VAR_2->handshake);

        if (!FUNC_5(VAR_2) && VAR_2->application->cipher.ingress.header_protection.zero_rtt != ((void*)0)) {
            FUNC_0(VAR_2->application->cipher.ingress.aead[0] != ((void*)0));
            FUNC_4(VAR_2->application->cipher.ingress.header_protection.zero_rtt);
            VAR_2->application->cipher.ingress.header_protection.zero_rtt = ((void*)0);
            FUNC_3(VAR_2->application->cipher.ingress.aead[0]);
            VAR_2->application->cipher.ingress.aead[0] = ((void*)0);
        }
        break;
    }
    return 0;
}
