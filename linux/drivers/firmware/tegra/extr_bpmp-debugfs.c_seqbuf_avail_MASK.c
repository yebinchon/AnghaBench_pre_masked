
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seqbuf {scalar_t__ pos; scalar_t__ size; } ;



__attribute__((used)) static size_t FUNC_0(struct seqbuf *VAR_0)
{
 return VAR_0->pos < VAR_0->size ? VAR_0->size - VAR_0->pos : 0;
}
