
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct msc*) ;
 int FUNC_1 (struct msc*) ;

__attribute__((used)) static void FUNC_2(struct msc *VAR_2)
{
 if (VAR_2->mode == VAR_1)
  FUNC_0(VAR_2);
 else if (VAR_2->mode == VAR_0)
  FUNC_1(VAR_2);
}
