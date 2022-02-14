
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dadq {int dad_ifa; int dad_refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct dadq*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct dadq *VAR_1)
{

 if (FUNC_2(&VAR_1->dad_refcnt)) {
  FUNC_1(VAR_1->dad_ifa);
  FUNC_0(VAR_1, VAR_0);
 }
}
