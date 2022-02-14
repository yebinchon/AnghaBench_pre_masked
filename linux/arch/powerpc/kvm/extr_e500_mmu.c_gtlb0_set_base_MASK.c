
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {TYPE_1__* gtlb_params; } ;
typedef int gva_t ;
struct TYPE_2__ {int ways; int sets; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct kvmppc_vcpu_e500 *VAR_0, gva_t VAR_1)
{
 return FUNC_0(VAR_1, VAR_0->gtlb_params[0].sets,
        VAR_0->gtlb_params[0].ways);
}
