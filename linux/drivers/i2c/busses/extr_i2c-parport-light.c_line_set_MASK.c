
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lineop {int val; int port; scalar_t__ inverted; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void FUNC_2(int VAR_0, const struct lineop *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_1->port);


 if ((VAR_1->inverted && !VAR_0) || (!VAR_1->inverted && VAR_0))
  FUNC_1(VAR_1->port, VAR_2 | VAR_1->val);
 else
  FUNC_1(VAR_1->port, VAR_2 & ~VAR_1->val);
}
