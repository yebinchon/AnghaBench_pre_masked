
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {scalar_t__* gtlb_nv; TYPE_1__* gtlb_params; } ;
struct TYPE_2__ {scalar_t__ ways; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int FUNC_1(
  struct kvmppc_vcpu_e500 *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = VAR_0->gtlb_nv[0]++;
 if (FUNC_0(VAR_0->gtlb_nv[0] >= VAR_0->gtlb_params[0].ways))
  VAR_0->gtlb_nv[0] = 0;

 return VAR_1;
}
