
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu_hv_synic {int * sint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct kvm_vcpu_hv_synic*,int) ;
 int FUNC_3 (struct kvm_vcpu_hv_synic*) ;
 int FUNC_4 (struct kvm_vcpu_hv_synic*,int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu_hv_synic *VAR_4, int VAR_5,
     u64 VAR_6, bool VAR_7)
{
 int VAR_8, VAR_9;
 bool VAR_10;

 VAR_8 = VAR_6 & VAR_2;
 VAR_10 = VAR_6 & VAR_1;






 if (VAR_8 < VAR_0 && !VAR_7 && !VAR_10)
  return 1;






 VAR_9 = FUNC_2(VAR_4, VAR_5) & VAR_2;

 FUNC_0(&VAR_4->sint[VAR_5], VAR_6);

 FUNC_4(VAR_4, VAR_9);

 FUNC_4(VAR_4, VAR_8);


 FUNC_1(VAR_3, FUNC_3(VAR_4));
 return 0;
}
