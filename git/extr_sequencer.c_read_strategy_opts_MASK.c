
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct replay_opts {int strategy; } ;


 int FUNC_0 (struct replay_opts*,int ) ;
 int FUNC_1 (struct strbuf*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(struct replay_opts *VAR_0, struct strbuf *VAR_1)
{
 FUNC_5(VAR_1);
 if (!FUNC_1(VAR_1, FUNC_2(), 0))
  return;
 VAR_0->strategy = FUNC_4(VAR_1, ((void*)0));
 if (!FUNC_1(VAR_1, FUNC_3(), 0))
  return;

 FUNC_0(VAR_0, VAR_1->buf);
}
