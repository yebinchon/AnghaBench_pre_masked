
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int dummy; } ;
typedef int gva_t ;


 int FUNC_0 (struct kvmppc_vcpu_e500*,int,int) ;
 int FUNC_1 (struct kvmppc_vcpu_e500*,int,int) ;
 int FUNC_2 (struct kvmppc_vcpu_e500*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct kvmppc_vcpu_e500 *VAR_0, int VAR_1,
         gva_t VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_3, VAR_1, -1);
  if (VAR_4 >= 0) {
   FUNC_0(VAR_0, VAR_3, VAR_4);
   FUNC_1(VAR_0, VAR_3, VAR_4);
   break;
  }
 }
}
