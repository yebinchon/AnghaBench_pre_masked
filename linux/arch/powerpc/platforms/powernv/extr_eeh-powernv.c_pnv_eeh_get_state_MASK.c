
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeh_pe {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eeh_pe*) ;
 int FUNC_1 (struct eeh_pe*) ;

__attribute__((used)) static int FUNC_2(struct eeh_pe *VAR_2, int *VAR_3)
{
 int VAR_4;

 if (VAR_2->type & VAR_0)
  VAR_4 = FUNC_1(VAR_2);
 else
  VAR_4 = FUNC_0(VAR_2);

 if (!VAR_3)
  return VAR_4;






 *VAR_3 = 0;
 if (VAR_4 & VAR_1)
  *VAR_3 = 1000;

 return VAR_4;
}
