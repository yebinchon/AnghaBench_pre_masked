
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statbuf {int dummy; } ;
struct fd {struct statbuf stat; } ;



__attribute__((used)) static int FUNC_0(struct fd *VAR_0, struct statbuf *VAR_1) {
    *VAR_1 = VAR_0->stat;
    return 0;
}
