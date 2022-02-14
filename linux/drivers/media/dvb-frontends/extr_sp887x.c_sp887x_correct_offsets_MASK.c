
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sp887x_state {int dummy; } ;
struct dtv_frontend_properties {int frequency; int bandwidth_hz; scalar_t__ inversion; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int *,int*) ;
 int FUNC_1 (struct sp887x_state*,int,int const) ;

__attribute__((used)) static void FUNC_2 (struct sp887x_state* VAR_1,
        struct dtv_frontend_properties *VAR_2,
        int VAR_3)
{
 static const u32 VAR_4 [] = { 1879617, 4544878, 8098561 };
 int VAR_5;
 int VAR_6 = VAR_3 - VAR_2->frequency;
 int VAR_7 = 61003;
 int VAR_8 = 36000000;
 int VAR_9;
 int VAR_10;

 switch (VAR_2->bandwidth_hz) {
 default:
 case 8000000:
  VAR_5 = 0;
  break;
 case 7000000:
  VAR_5 = 1;
  break;
 case 6000000:
  VAR_5 = 2;
  break;
 }

 if (VAR_2->inversion == VAR_0)
  VAR_9 = VAR_8 - VAR_6;
 else
  VAR_9 = VAR_8 + VAR_6;

 FUNC_0(VAR_9 / 333, VAR_7, ((void*)0), &VAR_10);

 if (VAR_2->inversion == VAR_0)
  VAR_10 = -VAR_10;


 FUNC_1(VAR_1, 0x319, VAR_4[VAR_5] >> 12);
 FUNC_1(VAR_1, 0x31a, VAR_4[VAR_5] & 0xfff);


 FUNC_1(VAR_1, 0x309, VAR_10 >> 12);
 FUNC_1(VAR_1, 0x30a, VAR_10 & 0xfff);
}
