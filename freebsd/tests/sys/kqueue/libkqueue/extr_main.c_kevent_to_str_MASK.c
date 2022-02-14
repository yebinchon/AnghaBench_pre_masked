
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct kevent {scalar_t__* ext; int udata; scalar_t__ data; int filter; scalar_t__ ident; } ;
typedef int buf ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (struct kevent*) ;
 char* FUNC_2 (struct kevent*) ;
 int FUNC_3 (char*,int,char*,int ,int ,char*,char*,int ,int ,int ,int ,int ,int ) ;
 char* FUNC_4 (char*) ;

char *
FUNC_5(struct kevent *VAR_0)
{
    char VAR_1[512];
    char *VAR_2 = FUNC_2(VAR_0);
    char *VAR_3 = FUNC_1(VAR_0);

    FUNC_3(&VAR_1[0], sizeof(VAR_1),
            "[ident=%ju, filter=%d, %s, %s, data=%jd, udata=%p, "
            "ext=[%jx %jx %jx %jx]",
            (uintmax_t) VAR_0->ident,
            VAR_0->filter,
            VAR_2,
            VAR_3,
            (uintmax_t)VAR_0->data,
            VAR_0->udata,
            (uintmax_t)VAR_0->ext[0],
            (uintmax_t)VAR_0->ext[1],
            (uintmax_t)VAR_0->ext[2],
            (uintmax_t)VAR_0->ext[3]);

    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    return (FUNC_4(VAR_1));
}
