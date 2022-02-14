
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int mm; } ;
typedef int pte_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct gmap*,unsigned long,scalar_t__) ;
 int FUNC_2 (struct gmap*) ;
 unsigned long* FUNC_3 (struct gmap*,unsigned long,int ) ;
 int FUNC_4 (int ,unsigned long,int *) ;

__attribute__((used)) static void FUNC_5(struct gmap *VAR_2, unsigned long VAR_3)
{
 unsigned long *VAR_4;

 FUNC_0(!FUNC_2(VAR_2));
 VAR_4 = FUNC_3(VAR_2, VAR_3, 0);
 if (!VAR_4 || *VAR_4 & VAR_0)
  return;
 FUNC_1(VAR_2, VAR_3, VAR_3 + VAR_1 - 1);
 FUNC_4(VAR_2->mm, VAR_3, (pte_t *) VAR_4);
}
