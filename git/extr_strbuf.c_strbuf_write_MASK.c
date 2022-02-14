
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; int buf; } ;
typedef int ssize_t ;
typedef int FILE ;


 int FUNC_0 (int ,int,scalar_t__,int *) ;

ssize_t FUNC_1(struct strbuf *VAR_0, FILE *VAR_1)
{
 return VAR_0->len ? FUNC_0(VAR_0->buf, 1, VAR_0->len, VAR_1) : 0;
}
