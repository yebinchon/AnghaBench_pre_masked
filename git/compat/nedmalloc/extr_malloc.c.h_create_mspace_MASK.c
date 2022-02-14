
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
struct TYPE_8__ {size_t page_size; size_t granularity; } ;
struct TYPE_6__ {int sflags; } ;
struct TYPE_7__ {TYPE_1__ seg; } ;


 scalar_t__ FUNC_0 (size_t) ;
 char* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 () ;
 size_t FUNC_2 (size_t) ;
 TYPE_2__* FUNC_3 (char*,size_t) ;
 TYPE_4__ VAR_3 ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int) ;

mspace FUNC_6(size_t VAR_4, int VAR_5) {
  mstate VAR_6 = 0;
  size_t VAR_7;
  FUNC_1();
  VAR_7 = FUNC_4(sizeof(struct malloc_state));
  if (VAR_4 < (size_t) -(VAR_7 + VAR_2 + VAR_3.page_size)) {
    size_t VAR_8 = ((VAR_4 == 0)? VAR_3.granularity :
   (VAR_4 + VAR_2 + VAR_7));
    size_t VAR_9 = FUNC_2(VAR_8);
    char* VAR_10 = (char*)(FUNC_0(VAR_9));
    if (VAR_10 != VAR_0) {
      VAR_6 = FUNC_3(VAR_10, VAR_9);
      VAR_6->seg.sflags = VAR_1;
      FUNC_5(VAR_6, VAR_5);
    }
  }
  return (mspace)VAR_6;
}
