
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {scalar_t__ if_hdrlen; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_3)
{

 if (VAR_3->if_hdrlen == VAR_0)
  VAR_1 = ((void*)0);
 else
  VAR_2 = ((void*)0);

 FUNC_0();
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
}
