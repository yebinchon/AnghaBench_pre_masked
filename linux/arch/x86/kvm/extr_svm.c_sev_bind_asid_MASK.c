
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sev_data_activate {unsigned int handle; int asid; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sev_data_activate*) ;
 struct sev_data_activate* FUNC_1 (int,int ) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct sev_data_activate*,int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct kvm *VAR_2, unsigned int VAR_3, int *VAR_4)
{
 struct sev_data_activate *VAR_5;
 int VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

 FUNC_5();

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;


 VAR_5->handle = VAR_3;
 VAR_5->asid = VAR_6;
 VAR_7 = FUNC_3(VAR_5, VAR_4);
 FUNC_0(VAR_5);

 return VAR_7;
}
