
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int nip; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct pt_regs*) ;
 scalar_t__ FUNC_1 (struct pt_regs*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct pt_regs *VAR_5, unsigned long VAR_6,
        unsigned long VAR_7, bool VAR_8)
{
 int VAR_9 = FUNC_0(VAR_5) == 0x400;


 if (VAR_9 && (VAR_6 & (VAR_1 | VAR_0 |
          VAR_2))) {
  FUNC_4("kernel tried to execute %s page (%lx) - exploit attempt? (uid: %d)\n",
        VAR_7 >= VAR_3 ? "exec-protected" : "user",
        VAR_7,
        FUNC_3(&VAR_4, FUNC_2()));


  return 1;
 }

 if (!VAR_9 && VAR_7 < VAR_3 && (VAR_6 & VAR_2) &&
     !FUNC_5(VAR_5->nip)) {
  FUNC_4("Kernel attempted to access user page (%lx) - exploit attempt? (uid: %d)\n",
        VAR_7,
        FUNC_3(&VAR_4, FUNC_2()));
 }


 if (VAR_7 >= VAR_3)
  return 1;


 if (!FUNC_5(VAR_5->nip))
  return 1;



 if (FUNC_1(VAR_5, VAR_8))
  return 1;



 return 0;
}
