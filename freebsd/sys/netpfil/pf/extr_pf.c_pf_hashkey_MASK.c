
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pf_state_key_cmp {int dummy; } ;
struct pf_state_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static __inline uint32_t
FUNC_1(struct pf_state_key *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0((uint32_t *)VAR_2,
     sizeof(struct pf_state_key_cmp)/sizeof(uint32_t),
     VAR_0);

 return (VAR_3 & VAR_1);
}
