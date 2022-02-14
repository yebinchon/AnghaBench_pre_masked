
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int bank; int status; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct mce *VAR_1)
{



 if (VAR_1->bank == 4 && FUNC_0(VAR_1->status, 0x1f) == 0x5 && !VAR_0)
  return 1;

 return 0;
}
