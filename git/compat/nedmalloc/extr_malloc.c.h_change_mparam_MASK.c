
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t trim_threshold; size_t page_size; size_t granularity; size_t mmap_threshold; } ;


 size_t VAR_0 ;



 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2, int VAR_3) {
  size_t VAR_4 = (VAR_3 == -1)? VAR_0 : (size_t)VAR_3;
  FUNC_0();
  switch(VAR_2) {
  case 128:
    VAR_1.trim_threshold = VAR_4;
    return 1;
  case 130:
    if (VAR_4 >= VAR_1.page_size && ((VAR_4 & (VAR_4-1)) == 0)) {
      VAR_1.granularity = VAR_4;
      return 1;
    }
    else
      return 0;
  case 129:
    VAR_1.mmap_threshold = VAR_4;
    return 1;
  default:
    return 0;
  }
}
