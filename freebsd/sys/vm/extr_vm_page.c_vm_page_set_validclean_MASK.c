
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_page_bits_t ;
struct TYPE_10__ {int valid; int dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_1__*,int*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

void
FUNC_9(vm_page_t VAR_5, int VAR_6, int VAR_7)
{
 vm_page_bits_t VAR_8, VAR_9;
 int VAR_10, VAR_11;

 FUNC_4(VAR_5);
 if (VAR_7 == 0)
  return;






 if ((VAR_11 = FUNC_2(VAR_6, VAR_1)) != VAR_6 &&
     (VAR_5->valid & ((vm_page_bits_t)1 << (VAR_6 >> VAR_0))) == 0)
  FUNC_1(VAR_5, VAR_11, VAR_6 - VAR_11);






 VAR_10 = VAR_6 + VAR_7;
 if ((VAR_11 = FUNC_2(VAR_10, VAR_1)) != VAR_10 &&
     (VAR_5->valid & ((vm_page_bits_t)1 << (VAR_10 >> VAR_0))) == 0)
  FUNC_1(VAR_5, VAR_10,
      VAR_1 - (VAR_10 & (VAR_1 - 1)));
 VAR_8 = VAR_5->valid;
 VAR_9 = FUNC_5(VAR_6, VAR_7);
 if (FUNC_8(VAR_5))
  VAR_5->valid |= VAR_9;
 else
  FUNC_6(VAR_5, &VAR_5->valid, VAR_9);
 if (VAR_6 == 0 && VAR_7 == VAR_2) {





  if (VAR_8 == VAR_4)
   FUNC_0(VAR_5);
  VAR_5->dirty = 0;
  FUNC_3(VAR_5, VAR_3);
 } else if (VAR_8 != VAR_4 && FUNC_8(VAR_5))
  VAR_5->dirty &= ~VAR_9;
 else
  FUNC_7(VAR_5, VAR_9);
}
