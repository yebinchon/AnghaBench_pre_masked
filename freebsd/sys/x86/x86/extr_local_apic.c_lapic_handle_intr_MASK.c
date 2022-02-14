
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int dummy; } ;
struct intsrc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct intsrc*,struct trapframe*) ;
 struct intsrc* FUNC_3 (int ) ;

void
FUNC_4(int VAR_1, struct trapframe *VAR_2)
{
 struct intsrc *VAR_3;

 VAR_3 = FUNC_3(FUNC_1(FUNC_0(VAR_0),
     VAR_1));
 FUNC_2(VAR_3, VAR_2);
}
