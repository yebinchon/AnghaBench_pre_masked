
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct flcn_u64 {int lo; int hi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline struct flcn_u64 FUNC_2(u64 VAR_0)
{
 struct flcn_u64 VAR_1;

 VAR_1.hi = FUNC_1(VAR_0);
 VAR_1.lo = FUNC_0(VAR_0);

 return VAR_1;
}
