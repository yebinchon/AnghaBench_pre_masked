
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct amd_et_state {scalar_t__ cur_threshold; } ;
struct TYPE_2__ {int (* misc ) (int) ;} ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct amd_et_state *VAR_11, int VAR_12)
{
 uint64_t VAR_13;

 FUNC_0(VAR_9 >= 0, ("ELVT offset is not set"));

 VAR_13 = FUNC_1(VAR_10.misc(VAR_12));

 VAR_13 &= ~VAR_5;
 VAR_13 |= VAR_4;

 VAR_13 &= ~VAR_6;
 VAR_13 |= (uint64_t)VAR_9 << VAR_7;

 VAR_13 &= ~VAR_1;
 VAR_13 |= (uint64_t)(VAR_2 - VAR_11->cur_threshold)
     << VAR_3;

 VAR_13 &= ~VAR_8;
 VAR_13 |= VAR_0;

 FUNC_4(VAR_10.misc(VAR_12), VAR_13);
}
