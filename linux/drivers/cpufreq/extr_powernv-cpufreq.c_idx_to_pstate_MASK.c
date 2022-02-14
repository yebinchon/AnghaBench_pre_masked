
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int driver_data; } ;
struct TYPE_3__ {unsigned int nr_pstates; size_t nominal; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline u8 FUNC_2(unsigned int VAR_2)
{
 if (FUNC_1(VAR_2 >= VAR_1.nr_pstates)) {
  FUNC_0("idx_to_pstate: index %u is out of bound\n", VAR_2);
  return VAR_0[VAR_1.nominal].driver_data;
 }

 return VAR_0[VAR_2].driver_data;
}
