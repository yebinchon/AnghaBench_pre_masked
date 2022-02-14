
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
struct nat64_counters {int dummy; } ;
struct mbuf {int dummy; } ;
struct ifnet {int (* if_output ) (struct ifnet*,struct mbuf*,struct sockaddr*,int *) ;} ;


 int FUNC_0 (struct nat64_counters*,int ) ;
 int FUNC_1 (void*,struct mbuf*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ifnet*,struct mbuf*,struct sockaddr*,int *) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_1, struct mbuf *VAR_2, struct sockaddr *VAR_3,
    struct nat64_counters *VAR_4, void *VAR_5)
{
 int VAR_6;

 if (VAR_5 != ((void*)0))
  FUNC_1(VAR_5, VAR_2, VAR_3->sa_family);
 VAR_6 = (*VAR_1->if_output)(VAR_1, VAR_2, VAR_3, ((void*)0));
 if (VAR_6 != 0)
  FUNC_0(VAR_4, VAR_0);
 return (VAR_6);
}
