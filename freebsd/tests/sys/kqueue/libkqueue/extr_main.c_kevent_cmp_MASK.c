
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int flags; scalar_t__ ident; scalar_t__ filter; scalar_t__ fflags; scalar_t__ data; scalar_t__ udata; scalar_t__* ext; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct kevent*) ;
 int FUNC_3 (char*,char*,char*) ;

void
FUNC_4(struct kevent *VAR_1, struct kevent *VAR_2)
{
    char *VAR_3;
    char *VAR_4;
    if (VAR_1->ident != VAR_2->ident || VAR_1->filter != VAR_2->filter ||
      VAR_1->flags != VAR_2->flags || VAR_1->fflags != VAR_2->fflags ||
      VAR_1->data != VAR_2->data || VAR_1->udata != VAR_2->udata ||
      VAR_1->ext[0] != VAR_2->ext[0] || VAR_1->ext[1] != VAR_2->ext[1] ||
      VAR_1->ext[0] != VAR_2->ext[2] || VAR_1->ext[0] != VAR_2->ext[3]) {
        VAR_3 = FUNC_2(VAR_1);
        VAR_4 = FUNC_2(VAR_2);
        FUNC_3("kevent_cmp: mismatch:\n  %s !=\n  %s\n",
               VAR_3, VAR_4);
        FUNC_1(VAR_3);
        FUNC_1(VAR_4);
        FUNC_0();
    }
}
