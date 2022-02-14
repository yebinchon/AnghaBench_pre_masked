
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slbtnode {int dummy; } ;
struct slb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_7)
{

 VAR_6 = FUNC_1("SLB tree node", sizeof(struct slbtnode),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_0, VAR_1);
 VAR_4 = FUNC_1("SLB cache",
     (VAR_3 + 1)*sizeof(struct slb *), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_0, VAR_1);

 if (FUNC_0() != VAR_2) {
  FUNC_2(VAR_4, VAR_5);
  FUNC_2(VAR_6, VAR_5);
 }
}
