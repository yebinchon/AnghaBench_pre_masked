
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int peer; scalar_t__ (* recv ) (int ,struct sk_buff*) ;} ;
struct manager {int lastid; int options; TYPE_1__ ch; int deact; int sendq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct manager *VAR_4)
{
 if (!FUNC_7(VAR_1, &VAR_4->options))
  return;

 if (!FUNC_6(VAR_2, &VAR_4->options)) {
  struct sk_buff *VAR_5 = FUNC_3(&VAR_4->sendq);

  if (!VAR_5) {
   FUNC_5(VAR_2, &VAR_4->options);
   return;
  }
  VAR_4->lastid = FUNC_2(VAR_5);
  FUNC_1(&VAR_4->deact, VAR_0, ((void*)0));
  if (VAR_4->ch.recv(VAR_4->ch.peer, VAR_5)) {
   FUNC_0(VAR_5);
   FUNC_5(VAR_2, &VAR_4->options);
   VAR_4->lastid = VAR_3;
  }
 }
}
