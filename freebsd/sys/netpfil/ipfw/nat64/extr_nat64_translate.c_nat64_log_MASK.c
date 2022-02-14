
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfloghdr {int af; int dir; } ;
struct mbuf {int dummy; } ;
typedef int sa_family_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pfloghdr*,int ,struct mbuf*) ;

__attribute__((used)) static void
FUNC_1(struct pfloghdr *VAR_2, struct mbuf *VAR_3, sa_family_t VAR_4)
{

 VAR_2->dir = VAR_1;
 VAR_2->af = VAR_4;
 FUNC_0(VAR_2, VAR_0, VAR_3);
}
