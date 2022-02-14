
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgs8gxx_state {TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ prod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct lgs8gxx_state*,int*) ;
 int FUNC_2 (struct lgs8gxx_state*,int,int*) ;
 int FUNC_3 (struct lgs8gxx_state*) ;
 int FUNC_4 (struct lgs8gxx_state*,int*) ;
 int FUNC_5 (struct lgs8gxx_state*,int,int) ;

__attribute__((used)) static int FUNC_6(struct lgs8gxx_state *VAR_5, u8 VAR_6, u8 VAR_7,
 u8 *VAR_8)
{
 int VAR_9 = 0;
 u8 VAR_10 = 0;
 u8 VAR_11, VAR_12;

 if (VAR_6 == VAR_2)
  FUNC_0("try GI 945\n");
 else if (VAR_6 == VAR_1)
  FUNC_0("try GI 595\n");
 else if (VAR_6 == VAR_0)
  FUNC_0("try GI 420\n");
 if (VAR_5->config->prod == VAR_4) {
  FUNC_2(VAR_5, 0x0C, &VAR_11);
  FUNC_2(VAR_5, 0x18, &VAR_12);
  VAR_11 &= ~(VAR_3);
  VAR_11 |= VAR_6;
  VAR_12 &= 0xFE;
  VAR_12 |= VAR_7 ? 0x01 : 0x00;
  FUNC_5(VAR_5, 0x0C, VAR_11);
  FUNC_5(VAR_5, 0x18, VAR_12);
 } else {
  FUNC_5(VAR_5, 0x04, VAR_6);
 }
 FUNC_3(VAR_5);
 VAR_9 = FUNC_4(VAR_5, VAR_8);
 if (VAR_9 || !(*VAR_8))
  return VAR_9;
 VAR_9 = FUNC_1(VAR_5, &VAR_10);
 if (VAR_9 != 0)
  return VAR_9;
 if (VAR_10) {
  FUNC_0("auto detect finished\n");
 } else
  *VAR_8 = 0;

 return 0;
}
