
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lineop {int val; scalar_t__ inverted; int port; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(const struct lineop *VAR_0)
{
 u8 VAR_1 = FUNC_0(VAR_0->port);

 return ((VAR_0->inverted && (VAR_1 & VAR_0->val) != VAR_0->val)
     || (!VAR_0->inverted && (VAR_1 & VAR_0->val) == VAR_0->val));
}
