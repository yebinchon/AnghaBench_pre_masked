
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pasid_entry {int * val; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u16
FUNC_2(struct pasid_entry *VAR_0)
{
 return (u16)(FUNC_1(VAR_0->val[1]) & FUNC_0(15, 0));
}
