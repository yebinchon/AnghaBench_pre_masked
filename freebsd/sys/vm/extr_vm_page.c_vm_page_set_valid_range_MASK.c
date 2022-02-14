
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_page_bits_t ;
struct TYPE_7__ {int valid; int dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*,int*,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

void
FUNC_7(vm_page_t VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 vm_page_bits_t VAR_7;

 FUNC_3(VAR_2);
 if (VAR_4 == 0)
  return;






 if ((VAR_6 = FUNC_2(VAR_3, VAR_1)) != VAR_3 &&
     (VAR_2->valid & (1 << (VAR_3 >> VAR_0))) == 0)
  FUNC_1(VAR_2, VAR_6, VAR_3 - VAR_6);






 VAR_5 = VAR_3 + VAR_4;
 if ((VAR_6 = FUNC_2(VAR_5, VAR_1)) != VAR_5 &&
     (VAR_2->valid & (1 << (VAR_5 >> VAR_0))) == 0)
  FUNC_1(VAR_2, VAR_5,
      VAR_1 - (VAR_5 & (VAR_1 - 1)));





 FUNC_0((~VAR_2->valid & FUNC_4(VAR_3, VAR_4) & VAR_2->dirty) == 0,
     ("vm_page_set_valid_range: page %p is dirty", VAR_2));




 VAR_7 = FUNC_4(VAR_3, VAR_4);
 if (FUNC_6(VAR_2))
  VAR_2->valid |= VAR_7;
 else
  FUNC_5(VAR_2, &VAR_2->valid, VAR_7);
}
