
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct malloc_state {int dummy; } ;
typedef TYPE_2__* mstate ;
typedef int mspace ;
struct TYPE_8__ {size_t page_size; } ;
struct TYPE_6__ {int sflags; } ;
struct TYPE_7__ {TYPE_1__ seg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (char*,size_t) ;
 TYPE_4__ VAR_2 ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int) ;

mspace FUNC_4(void* VAR_3, size_t VAR_4, int VAR_5) {
  mstate VAR_6 = 0;
  size_t VAR_7;
  FUNC_0();
  VAR_7 = FUNC_2(sizeof(struct malloc_state));
  if (VAR_4 > VAR_7 + VAR_1 &&
      VAR_4 < (size_t) -(VAR_7 + VAR_1 + VAR_2.page_size)) {
    VAR_6 = FUNC_1((char*)VAR_3, VAR_4);
    VAR_6->seg.sflags = VAR_0;
    FUNC_3(VAR_6, VAR_5);
  }
  return (mspace)VAR_6;
}
