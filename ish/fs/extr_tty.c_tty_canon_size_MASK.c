
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int* buf_flag; int bufsize; } ;


 int* FUNC_0 (int*,int,int ) ;

__attribute__((used)) static size_t FUNC_1(struct tty *VAR_0) {
    bool *VAR_1 = FUNC_0(VAR_0->buf_flag, 1, VAR_0->bufsize);
    if (VAR_1 == ((void*)0))
        return -1;
    return VAR_1 - VAR_0->buf_flag + 1;
}
