
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seqbuf {scalar_t__ pos; scalar_t__ size; } ;


 size_t VAR_0 ;

__attribute__((used)) static size_t FUNC_0(struct seqbuf *VAR_1)
{
 return VAR_1->pos <= VAR_1->size ? 0 : -VAR_0;
}
