
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ position_t ;
typedef scalar_t__ orientation_t ;
typedef int direction_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

direction_t FUNC_0(orientation_t VAR_6, position_t VAR_7) {
    if (VAR_6 == VAR_5) {
        return VAR_7 == VAR_0 ? VAR_2 : VAR_3;
    } else {
        return VAR_7 == VAR_0 ? VAR_4 : VAR_1;
    }
}
