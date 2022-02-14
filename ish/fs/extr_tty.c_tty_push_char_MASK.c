
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int bufsize; char* buf; int* buf_flag; int lock; int consumed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct tty *VAR_2, char VAR_3, bool VAR_4, int VAR_5) {
    while (VAR_2->bufsize >= sizeof(VAR_2->buf)) {
        if (!VAR_5)
            return VAR_0;
        if (FUNC_0(&VAR_2->consumed, &VAR_2->lock, ((void*)0)))
            return VAR_1;
    }
    VAR_2->buf[VAR_2->bufsize] = VAR_3;
    VAR_2->buf_flag[VAR_2->bufsize++] = VAR_4;
    return 0;
}
