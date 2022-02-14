
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int shortcut; } ;
struct TYPE_8__ {size_t insert_length; TYPE_1__ u; } ;
typedef TYPE_2__ ZopfliNode ;


 size_t FUNC_0 (TYPE_2__ const*) ;
 size_t FUNC_1 (TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*) ;

__attribute__((used)) static uint32_t FUNC_3(const size_t VAR_0,
                                        const size_t VAR_1,
                                        const size_t VAR_2,
                                        const size_t VAR_3,
                                        const ZopfliNode* VAR_4) {
  const size_t VAR_5 = FUNC_1(&VAR_4[VAR_1]);
  const size_t VAR_6 = VAR_4[VAR_1].insert_length;
  const size_t VAR_7 = FUNC_0(&VAR_4[VAR_1]);





  if (VAR_1 == 0) {
    return 0;
  } else if (VAR_7 + VAR_5 <= VAR_0 + VAR_1 + VAR_3 &&
             VAR_7 <= VAR_2 + VAR_3 &&
             FUNC_2(&VAR_4[VAR_1]) > 0) {
    return (uint32_t)VAR_1;
  } else {
    return VAR_4[VAR_1 - VAR_5 - VAR_6].u.shortcut;
  }
}
