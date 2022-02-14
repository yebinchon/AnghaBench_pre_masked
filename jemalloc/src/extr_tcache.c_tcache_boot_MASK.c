
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int tsdn_t ;
typedef int cache_bin_sz_t ;
struct TYPE_4__ {unsigned int stack_size; } ;
typedef TYPE_1__ cache_bin_info_t ;
struct TYPE_5__ {int nregs; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ,int,int ) ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_4 (int *,char*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int) ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

bool
FUNC_6(tsdn_t *VAR_16) {

 if (VAR_10 < 0 || (FUNC_0(1) << VAR_10) <
     VAR_2) {
  VAR_12 = VAR_2;
 } else {
  VAR_12 = (FUNC_0(1) << VAR_10);
 }

 if (FUNC_4(&VAR_13, "tcaches", VAR_6,
     VAR_8)) {
  return 1;
 }

 VAR_9 = FUNC_5(VAR_12) + 1;


 VAR_11 = (cache_bin_info_t *)FUNC_3(VAR_16, FUNC_2(), VAR_9
     * sizeof(cache_bin_info_t), VAR_0);
 if (VAR_11 == ((void*)0)) {
  return 1;
 }
 unsigned VAR_17, VAR_18;
 VAR_14 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  if ((VAR_7[VAR_17].nregs << 1) <= VAR_5) {
   VAR_18 = VAR_5;
  } else if ((VAR_7[VAR_17].nregs << 1) <=
      VAR_4) {
   VAR_18 = VAR_7[VAR_17].nregs << 1;
  } else {
   VAR_18 = VAR_4;
  }
  unsigned VAR_19 = VAR_18 * sizeof(void *);
  FUNC_1(VAR_19 < ((uint64_t)1 <<
      (sizeof(cache_bin_sz_t) * 8)));
  VAR_11[VAR_17].stack_size = VAR_19;
  VAR_14 += VAR_19;
 }
 for (; VAR_17 < VAR_9; VAR_17++) {
  unsigned VAR_20 = VAR_3 * sizeof(void *);
  VAR_11[VAR_17].stack_size = VAR_20;
  VAR_14 += VAR_20;
 }
 VAR_14 += VAR_15;

 return 0;
}
