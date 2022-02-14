
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockd_ans {int la_vers; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct lockd_ans*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, struct lockd_ans *VAR_2)
{

 VAR_2->la_vers = VAR_1;
 return (FUNC_0(VAR_0, VAR_2, sizeof *VAR_2) <= 0);
}
