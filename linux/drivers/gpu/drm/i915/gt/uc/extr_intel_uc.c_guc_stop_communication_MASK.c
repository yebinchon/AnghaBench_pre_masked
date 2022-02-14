
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc {int handler; int send; int ct; } ;


 int FUNC_0 (struct intel_guc*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct intel_guc *VAR_2)
{
 FUNC_1(&VAR_2->ct);

 VAR_2->send = VAR_0;
 VAR_2->handler = VAR_1;

 FUNC_0(VAR_2);
}
