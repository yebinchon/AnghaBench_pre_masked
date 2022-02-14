
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {long long list_file_offset; } ;
struct TYPE_3__ {int tot_lists; } ;


 TYPE_2__* FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int) ;
 long long VAR_1 ;

__attribute__((used)) static inline long long FUNC_2 (int VAR_2) {
  FUNC_1 (VAR_2 >= 0 && VAR_2 <= VAR_0.tot_lists);
  return (FUNC_0(VAR_2)->list_file_offset) + VAR_1;
}
