
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seqbuf {scalar_t__ pos; scalar_t__ buf; } ;


 int FUNC_0 (void*,scalar_t__,size_t) ;
 size_t FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct seqbuf*) ;
 int FUNC_3 (struct seqbuf*) ;

__attribute__((used)) static int FUNC_4(struct seqbuf *VAR_0, void *VAR_1, size_t VAR_2)
{
 VAR_2 = FUNC_1(VAR_2, FUNC_2(VAR_0));
 FUNC_0(VAR_1, VAR_0->buf + VAR_0->pos, VAR_2);
 VAR_0->pos += VAR_2;
 return FUNC_3(VAR_0);
}
