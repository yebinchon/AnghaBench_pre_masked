
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {float* literal_costs_; float* cost_dist_; float* cost_cmd_; size_t num_bytes_; float min_cost_cmd_; } ;
typedef TYPE_1__ ZopfliCostModel ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t,size_t,size_t,int const*,float*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(ZopfliCostModel* VAR_2,
                                               size_t VAR_3,
                                               const uint8_t* VAR_4,
                                               size_t VAR_5) {
  float* VAR_6 = VAR_2->literal_costs_;
  float* VAR_7 = VAR_2->cost_dist_;
  float* VAR_8 = VAR_2->cost_cmd_;
  size_t VAR_9 = VAR_2->num_bytes_;
  size_t VAR_10;
  FUNC_0(VAR_3, VAR_9, VAR_5,
                                    VAR_4, &VAR_6[1]);
  VAR_6[0] = 0.0;
  for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10) {
    VAR_6[VAR_10 + 1] += VAR_6[VAR_10];
  }
  for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
    VAR_8[VAR_10] = (float)FUNC_1(11 + (uint32_t)VAR_10);
  }
  for (VAR_10 = 0; VAR_10 < VAR_1; ++VAR_10) {
    VAR_7[VAR_10] = (float)FUNC_1(20 + (uint32_t)VAR_10);
  }
  VAR_2->min_cost_cmd_ = (float)FUNC_1(11);
}
