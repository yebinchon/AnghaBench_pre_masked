
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int PATTERN; int DYN_RANGE; } ;
union test_misc {TYPE_1__ bits; int raw; } ;
union link_test_pattern {TYPE_1__ bits; int raw; } ;
struct dc_link {int dummy; } ;
typedef enum dp_test_pattern { ____Placeholder_dp_test_pattern } dp_test_pattern ;
typedef int dpcd_test_pattern ;
typedef int dpcd_test_params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (struct dc_link*,int ,int *,int) ;
 int FUNC_1 (struct dc_link*,int,int *,int *,int ) ;
 int FUNC_2 (union test_misc*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dc_link *VAR_8)
{
 union link_test_pattern VAR_9;
 union test_misc VAR_10;
 enum dp_test_pattern VAR_11;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 FUNC_2(&VAR_10, 0, sizeof(VAR_10));


 FUNC_0(
   VAR_8,
   VAR_1,
   &VAR_9.raw,
   sizeof(VAR_9));
 FUNC_0(
   VAR_8,
   VAR_0,
   &VAR_10.raw,
   sizeof(VAR_10));

 switch (VAR_9.bits.PATTERN) {
 case 130:
  VAR_11 = VAR_2;
 break;
 case 128:
  VAR_11 = VAR_5;
 break;
 case 129:
  VAR_11 = (VAR_10.bits.DYN_RANGE ==
    VAR_7 ?
    VAR_3 :
    VAR_4);
 break;
 default:
  VAR_11 = VAR_6;
 break;
 }

 FUNC_1(
   VAR_8,
   VAR_11,
   ((void*)0),
   ((void*)0),
   0);
}
