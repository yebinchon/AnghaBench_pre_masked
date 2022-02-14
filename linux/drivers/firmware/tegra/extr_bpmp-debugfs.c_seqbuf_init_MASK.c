
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seqbuf {size_t size; scalar_t__ pos; void* buf; } ;



__attribute__((used)) static void FUNC_0(struct seqbuf *VAR_0, void *VAR_1, size_t VAR_2)
{
 VAR_0->buf = VAR_1;
 VAR_0->size = VAR_2;
 VAR_0->pos = 0;
}
