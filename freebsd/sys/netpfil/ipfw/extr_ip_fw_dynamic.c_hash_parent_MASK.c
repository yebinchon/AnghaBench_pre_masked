
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipfw_flow_id {int dummy; } ;
typedef int rule ;


 int FUNC_0 (struct ipfw_flow_id const*) ;
 int FUNC_1 (int const*,int,int ) ;

__attribute__((used)) static __inline uint32_t
FUNC_2(const struct ipfw_flow_id *VAR_0, const void *VAR_1)
{

 return (FUNC_1((const uint32_t *)&VAR_1,
     sizeof(VAR_1) / sizeof(uint32_t), FUNC_0(VAR_0)));
}
