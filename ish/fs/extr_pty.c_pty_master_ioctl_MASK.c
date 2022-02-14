
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int locked; int packet_mode; struct tty* other; } ;
struct tty {int num; TYPE_1__ pty; } ;
typedef int dword_t ;






 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct tty *VAR_1, int VAR_2, void *VAR_3) {
    struct tty *VAR_4 = VAR_1->pty.other;
    switch (VAR_2) {
        case 128:
            VAR_4->pty.locked = !!*(dword_t *) VAR_3;
            break;
        case 130:
            *(dword_t *) VAR_3 = VAR_4->num;
            break;
        case 129:
            VAR_1->pty.packet_mode = !!*(dword_t *) VAR_3;
            break;
        case 131:
            *(dword_t *) VAR_3 = VAR_1->pty.packet_mode;
            break;
        default:
            return VAR_0;
    }
    return 0;
}
