
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_session_ticket_t {scalar_t__ cipher; scalar_t__ hmac; int not_before; int not_after; int name; } ;
struct TYPE_4__ {int size; struct st_session_ticket_t** entries; } ;
struct TYPE_3__ {int rwlock; TYPE_2__ tickets; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;
 struct st_session_ticket_t* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct st_session_ticket_t*) ;
 int FUNC_12 (struct st_session_ticket_t*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_13(void)
{
    int VAR_1 = FUNC_6("t/assets/session_tickets.yaml");
    FUNC_8(VAR_1 == 0);
    if (VAR_1 != 0)
        return;

    FUNC_9(&VAR_0.rwlock);
    FUNC_8(VAR_0.tickets.size == 2);
    if (VAR_0.tickets.size != 2)
        goto Exit;


    struct st_session_ticket_t *VAR_2 = VAR_0.tickets.entries[0];
    FUNC_8(FUNC_7(VAR_2->name, FUNC_4("\xe7\xe3\xc6\x98\x0b\x18\x32\xbd\x5d\x23\x91\x75\x72\xe8\x44\x8f")) == 0);
    FUNC_8(VAR_2->cipher == FUNC_1());
    FUNC_8(FUNC_7(FUNC_11(VAR_2),
              FUNC_4("\xf6\xe0\x71\xd9\x93\xb0\x5f\x77\xce\x51\xcb\x0f\xe2\xe0\xe1\x8c\x72\x00\xc2\xa7"
                         "\x87\x3a\x66\x00\x8c\x8e\x1d\x75\xae\x7b\x8e\x2a")) == 0);
    FUNC_8(VAR_2->hmac == FUNC_3());
    FUNC_8(FUNC_7(FUNC_12(VAR_2),
              FUNC_4("\xf4\xfc\xb8\x6f\xdf\x03\xa7\xf3\x35\x63\x2e\x66\x8a\x8f\xe9\x56\xc5\xbf\xe7\x7a\x41\x41\x2d\x26\x99"
                         "\x79\x63\x47\x68\x99\x9a\xdd\x6a\x84\xca\xfe\xa4\x1b\x6b\x2c\x47\xaa\xf1\xa5\x14\xca\x9d\x2a\x84\xf4"
                         "\x8d\x1f\x5f\x70\x18\xff\x17\x40\xcf\x9b\x94\x4b\x8f\xcf")) == 0);
    FUNC_8(VAR_2->not_before == 1437093330);
    FUNC_8(VAR_2->not_after == 1437096929);


    VAR_2 = VAR_0.tickets.entries[1];
    FUNC_8(FUNC_7(VAR_2->name, FUNC_4("\xa3\x97\xb6\xb7\xfa\xb9\x29\x36\x62\x03\xf1\x6f\xc8\x1f\xfb\xed")) == 0);
    FUNC_8(VAR_2->cipher == FUNC_0());
    FUNC_8(FUNC_7(FUNC_11(VAR_2),
              FUNC_4("\xf1\xed\x89\xcd\xe6\x87\x63\x63\x0e\x80\xd2\xbe\x82\x7c\xfb\x98")) == 0);
    FUNC_8(VAR_2->hmac == FUNC_2());
    FUNC_8(FUNC_7(FUNC_12(VAR_2),
              FUNC_4("\xe3\xfe\x72\x64\x4f\x64\x31\x5a\x4a\x8a\xd6\x37\x69\xa3\x57\x7c\xce\xc4\xdd\x13\xb2\x0e\xaf\x8c\x00\x88"
                         "\x86\xe5\x45\x8d\xb1\x0e\x65\x8c\xf2\xa8\x3f\x04\x40\x3a\xc4\xe9\x80\x35\xd2\x42\x2a\x75\x80\x67\x30\xeb"
                         "\x4f\x2f\xee\x12\xfa\xff\x95\x48\x95\xbc\x65\xd1")) == 0);
    FUNC_8(VAR_2->not_before == 1437092430);
    FUNC_8(VAR_2->not_after == 1437096029);

    VAR_2 = FUNC_5(&VAR_0.tickets, 1437092429);
    FUNC_8(VAR_2 == ((void*)0));
    VAR_2 = FUNC_5(&VAR_0.tickets, 1437092430);
    FUNC_8(VAR_2 == VAR_0.tickets.entries[1]);
    VAR_2 = FUNC_5(&VAR_0.tickets, 1437093329);
    FUNC_8(VAR_2 == VAR_0.tickets.entries[1]);
    VAR_2 = FUNC_5(&VAR_0.tickets, 1437093330);
    FUNC_8(VAR_2 == VAR_0.tickets.entries[0]);
    VAR_2 = FUNC_5(&VAR_0.tickets, 1437096029);
    FUNC_8(VAR_2 == VAR_0.tickets.entries[0]);
    VAR_2 = FUNC_5(&VAR_0.tickets, 1437096030);
    FUNC_8(VAR_2 == VAR_0.tickets.entries[0]);
    VAR_2 = FUNC_5(&VAR_0.tickets, 1437096929);
    FUNC_8(VAR_2 == VAR_0.tickets.entries[0]);
    VAR_2 = FUNC_5(&VAR_0.tickets, 1437096930);
    FUNC_8(VAR_2 == ((void*)0));

Exit:
    FUNC_10(&VAR_0.rwlock);
    ;
}
