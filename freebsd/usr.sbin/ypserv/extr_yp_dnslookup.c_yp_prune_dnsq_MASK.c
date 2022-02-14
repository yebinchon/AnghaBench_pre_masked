
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circleq_dnsentry {struct circleq_dnsentry* name; int ttl; } ;


 struct circleq_dnsentry* FUNC_0 (int *) ;
 struct circleq_dnsentry* FUNC_1 (struct circleq_dnsentry*,int ) ;
 int FUNC_2 (int *,struct circleq_dnsentry*,int ) ;
 int FUNC_3 (struct circleq_dnsentry*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void
FUNC_4(void)
{
 register struct circleq_dnsentry *VAR_3, *VAR_4;

 VAR_3 = FUNC_0(&VAR_2);
 while (VAR_3 != ((void*)0)) {
  VAR_3->ttl--;
  VAR_4 = FUNC_1(VAR_3, VAR_0);
  if (!VAR_3->ttl) {
   FUNC_2(&VAR_2, VAR_3, VAR_0);
   FUNC_3(VAR_3->name);
   FUNC_3(VAR_3);
   VAR_1--;
  }
  VAR_3 = VAR_4;
 }

 if (VAR_1 < 0)
  VAR_1 = 0;

 return;
}
