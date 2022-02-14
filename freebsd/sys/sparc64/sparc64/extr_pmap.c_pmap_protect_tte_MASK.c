
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int u_long ;
struct tte {int tte_data; } ;
struct pmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pmap*,int ) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct pmap *VAR_4, struct pmap *VAR_5, struct tte *VAR_6,
    vm_offset_t VAR_7)
{
 u_long VAR_8;
 vm_page_t VAR_9;

 FUNC_1(VAR_4, VAR_0);
 VAR_8 = FUNC_3(&VAR_6->tte_data, VAR_2 | VAR_3);
 if ((VAR_8 & (VAR_1 | VAR_3)) == (VAR_1 | VAR_3)) {
  VAR_9 = FUNC_0(FUNC_2(VAR_8));
  FUNC_4(VAR_9);
 }
 return (1);
}
