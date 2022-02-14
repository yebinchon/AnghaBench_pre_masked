
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ag71xx {unsigned int mac_base; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ag71xx*,unsigned int) ;

__attribute__((used)) static inline u32 FUNC_2(struct ag71xx *VAR_0, unsigned VAR_1)
{
 FUNC_1(VAR_0, VAR_1);

 return FUNC_0(VAR_0->mac_base + VAR_1);
}
