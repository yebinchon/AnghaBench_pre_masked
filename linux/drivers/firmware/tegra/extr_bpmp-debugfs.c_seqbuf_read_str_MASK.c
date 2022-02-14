
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seqbuf {char* buf; int pos; } ;


 int FUNC_0 (struct seqbuf*) ;
 int FUNC_1 (struct seqbuf*) ;
 int FUNC_2 (char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct seqbuf *VAR_0, const char **VAR_1)
{
 *VAR_1 = VAR_0->buf + VAR_0->pos;
 VAR_0->pos += FUNC_2(*VAR_1, FUNC_0(VAR_0));
 VAR_0->pos++;
 return FUNC_1(VAR_0);
}
