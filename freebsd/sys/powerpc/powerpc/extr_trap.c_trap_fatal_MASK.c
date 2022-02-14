
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int srr1; int exc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,struct trapframe*) ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,struct trapframe*,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct trapframe *VAR_5)
{




 FUNC_2(VAR_5->exc, VAR_5, 1, (VAR_5->srr1 & VAR_2));
 FUNC_1("%s trap", FUNC_3(VAR_5->exc));
}
