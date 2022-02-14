
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pgd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct vm_area_struct FUNC_0 (struct mm_struct*,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct vm_area_struct*,int,int) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (struct mm_struct*,int) ;

__attribute__((used)) static void FUNC_4(struct mm_struct *VAR_8)
{
 struct vm_area_struct VAR_9 = FUNC_0(VAR_8, VAR_7);
 pgd_t *VAR_10, *VAR_11;

 VAR_10 = FUNC_3(VAR_8, (unsigned long)VAR_3);
 VAR_11 = FUNC_3(VAR_8, VAR_5);

 FUNC_2(VAR_11, VAR_10, sizeof(pgd_t) * (VAR_4 / VAR_6));

 VAR_10 = FUNC_3(VAR_8, (unsigned long)VAR_0);
 VAR_11 = FUNC_3(VAR_8, VAR_2);

 FUNC_2(VAR_11, VAR_10, sizeof(pgd_t) * (VAR_1 / VAR_6));

 FUNC_1(&VAR_9, VAR_5, VAR_5 + VAR_4);
 FUNC_1(&VAR_9, VAR_2, VAR_2 + VAR_1);
}
