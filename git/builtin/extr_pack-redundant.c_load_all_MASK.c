
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {struct packed_git* next; } ;


 int FUNC_0 (struct packed_git*) ;
 struct packed_git* FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct packed_git *VAR_1 = FUNC_1(VAR_0);

 while (VAR_1) {
  FUNC_0(VAR_1);
  VAR_1 = VAR_1->next;
 }
}
