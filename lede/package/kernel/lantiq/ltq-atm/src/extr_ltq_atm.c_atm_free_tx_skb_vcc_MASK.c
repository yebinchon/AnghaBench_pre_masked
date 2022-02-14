
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct atm_vcc {int (* pop ) (struct atm_vcc*,struct sk_buff*) ;} ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct atm_vcc*,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_0, struct atm_vcc *VAR_1)
{
 if ( VAR_1->pop != ((void*)0) )
  VAR_1->pop(VAR_1, VAR_0);
 else
  FUNC_0(VAR_0);
}
