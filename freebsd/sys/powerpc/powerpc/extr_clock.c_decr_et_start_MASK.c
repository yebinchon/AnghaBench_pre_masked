
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct eventtimer {int dummy; } ;
struct decr_state {int mode; int div; } ;
typedef int sbintime_t ;
struct TYPE_2__ {int et_frequency; } ;


 struct decr_state* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct eventtimer *VAR_6, sbintime_t VAR_7, sbintime_t VAR_8)
{
 struct decr_state *VAR_9 = FUNC_0(VAR_5);
 uint32_t VAR_10;




 if (VAR_8 != 0) {
  VAR_9->mode = 1;
  VAR_9->div = (VAR_4.et_frequency * VAR_8) >> 32;
 } else {
  VAR_9->mode = 2;
  VAR_9->div = 0;
 }
 if (VAR_7 != 0)
  VAR_10 = (VAR_4.et_frequency * VAR_7) >> 32;
 else
  VAR_10 = VAR_9->div;
 FUNC_2(VAR_10);


 return (0);
}
