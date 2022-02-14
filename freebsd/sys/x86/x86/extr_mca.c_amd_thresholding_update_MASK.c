
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct amd_et_state {int cur_threshold; int last_intr; } ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;
struct TYPE_2__ {int (* misc ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int ) ;
 struct amd_et_state** VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int,int,int ,int,int,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(enum scan_mode VAR_9, int VAR_10, int VAR_11)
{
 struct amd_et_state *VAR_12;
 uint64_t VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_12 = &VAR_5[FUNC_0(VAR_6)][VAR_10];
 VAR_13 = FUNC_1(VAR_7.misc(VAR_10));
 VAR_15 = (VAR_13 & VAR_1) >> VAR_3;
 VAR_15 = VAR_15 - (VAR_2 - VAR_12->cur_threshold);

 VAR_14 = FUNC_4(VAR_9, VAR_11, VAR_12->last_intr, VAR_15,
     VAR_12->cur_threshold, VAR_2);

 VAR_12->cur_threshold = VAR_14;
 VAR_13 &= ~VAR_1;
 VAR_13 |= (uint64_t)(VAR_2 - VAR_12->cur_threshold)
     << VAR_3;
 VAR_13 &= ~VAR_4;
 FUNC_5(VAR_7.misc(VAR_10), VAR_13);
 if (VAR_9 == VAR_0 && VAR_11)
  VAR_12->last_intr = VAR_8;
}
