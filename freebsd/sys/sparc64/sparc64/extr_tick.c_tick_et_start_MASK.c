
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct eventtimer {int dummy; } ;
typedef int sbintime_t ;
typedef int register_t ;
struct TYPE_2__ {int et_frequency; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct eventtimer *VAR_4, sbintime_t VAR_5, sbintime_t VAR_6)
{
 u_long VAR_7, VAR_8, VAR_9;
 register_t VAR_10;

 if (VAR_6 != 0)
  VAR_8 = (VAR_0.et_frequency * VAR_6) >> 32;
 else
  VAR_8 = 0;
 if (VAR_5 != 0)
  VAR_9 = (VAR_0.et_frequency * VAR_5) >> 32;
 else
  VAR_9 = VAR_8;
 FUNC_0(VAR_2, VAR_8);






 VAR_10 = FUNC_1();
 VAR_7 = FUNC_3();
 if (VAR_8 != 0) {
  FUNC_0(VAR_1, 0);
  VAR_7 = FUNC_4(VAR_7, VAR_8);
 }
 FUNC_0(VAR_3, VAR_7);
 FUNC_5(VAR_7 + VAR_9);
 FUNC_2(VAR_10);
 return (0);
}
