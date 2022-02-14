
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int u64 ;
struct amdgpu_uvd_cs_ctx {int data1; int ib_idx; int parser; int data0; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static u64 FUNC_1(struct amdgpu_uvd_cs_ctx *VAR_0)
{
 uint32_t VAR_1, VAR_2;
 uint64_t VAR_3;

 VAR_1 = FUNC_0(VAR_0->parser, VAR_0->ib_idx, VAR_0->data0);
 VAR_2 = FUNC_0(VAR_0->parser, VAR_0->ib_idx, VAR_0->data1);
 VAR_3 = ((uint64_t)VAR_1) | (((uint64_t)VAR_2) << 32);

 return VAR_3;
}
