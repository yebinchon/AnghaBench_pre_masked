
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_guc {int (* send ) (struct intel_guc*,int const*,int ,int *,int ) ;} ;


 int FUNC_0 (struct intel_guc*,int const*,int ,int *,int ) ;

__attribute__((used)) static
inline int FUNC_1(struct intel_guc *VAR_0, const u32 *VAR_1, u32 VAR_2)
{
 return VAR_0->send(VAR_0, VAR_1, VAR_2, ((void*)0), 0);
}
