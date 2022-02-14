
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {size_t bufsize; int consumed; scalar_t__ buf_flag; scalar_t__ buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,scalar_t__,size_t) ;
 int FUNC_2 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tty *VAR_0, void *VAR_1, size_t VAR_2) {
    FUNC_0(VAR_2 <= VAR_0->bufsize);
    FUNC_1(VAR_1, VAR_0->buf, VAR_2);
    VAR_0->bufsize -= VAR_2;
    FUNC_2(VAR_0->buf, VAR_0->buf + VAR_2, VAR_0->bufsize);
    FUNC_2(VAR_0->buf_flag, VAR_0->buf_flag + VAR_2, VAR_0->bufsize);
    FUNC_3(&VAR_0->consumed);
}
