
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_2__ {scalar_t__ accumbytes; int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,char*,int ,int ) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

bool
FUNC_3(tsdn_t *VAR_5) {
 FUNC_1(VAR_2);


 if (FUNC_2(&VAR_4.mtx, "prof_accum",
     VAR_1, VAR_3)) {
  return 1;
 }
 VAR_4.accumbytes = 0;




 return 0;
}
