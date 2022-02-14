
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secasvar {scalar_t__ firstused; int lft_c_allocations; int lft_c_bytes; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(struct secasvar *VAR_1, struct mbuf *VAR_2)
{
 FUNC_0(VAR_1 != ((void*)0), ("Null secasvar"));
 FUNC_0(VAR_2 != ((void*)0), ("Null mbuf"));





 FUNC_1(VAR_1->lft_c_bytes, VAR_2->m_pkthdr.len);






 FUNC_1(VAR_1->lft_c_allocations, 1);
 if (VAR_1->firstused == 0)
  VAR_1->firstused = VAR_0;
}
