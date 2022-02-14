
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbufq {int mq_maxlen; int mq_len; } ;


 int FUNC_0 (struct mbufq*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct mbufq *VAR_0, int VAR_1)
{
 VAR_0->mq_maxlen = VAR_1;
 while (VAR_0->mq_len > VAR_0->mq_maxlen)
  FUNC_1(FUNC_0(VAR_0));
}
