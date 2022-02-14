
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sev_data_decommission {unsigned int handle; } ;
struct sev_data_deactivate {unsigned int handle; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sev_data_decommission*) ;
 struct sev_data_decommission* FUNC_1 (int,int ) ;
 int FUNC_2 (struct sev_data_decommission*,int *) ;
 int FUNC_3 (struct sev_data_decommission*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct kvm *VAR_1, unsigned int VAR_2)
{
 struct sev_data_decommission *VAR_3;
 struct sev_data_deactivate *VAR_4;

 if (!VAR_2)
  return;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;


 VAR_4->handle = VAR_2;
 FUNC_2(VAR_4, ((void*)0));

 FUNC_5();
 FUNC_4(((void*)0));
 FUNC_0(VAR_4);

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;


 VAR_3->handle = VAR_2;
 FUNC_3(VAR_3, ((void*)0));

 FUNC_0(VAR_3);
}
