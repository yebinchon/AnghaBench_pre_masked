
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ insert_len_; } ;
typedef TYPE_1__ Command ;



__attribute__((used)) static size_t FUNC_0(const Command* VAR_0, const size_t VAR_1) {

  size_t VAR_2 = 0;
  size_t VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
    VAR_2 += VAR_0[VAR_3].insert_len_;
  }
  return VAR_2;
}
