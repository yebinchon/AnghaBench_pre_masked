
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct stv {scalar_t__ receive_mode; scalar_t__ regoff; int started; } ;
struct slookup {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct slookup*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct stv*,scalar_t__,scalar_t__*) ;
 struct slookup* VAR_6 ;
 struct slookup* VAR_7 ;
 int FUNC_2 (struct slookup const*,int,int) ;

__attribute__((used)) static int FUNC_3(struct stv *VAR_8, s32 *VAR_9)
{
 u8 VAR_10;
 u8 VAR_11;
 u16 VAR_12;
 int VAR_13;
 const struct slookup *VAR_14;

 *VAR_9 = 0;

 if (!VAR_8->started)
  return -VAR_0;

 if (VAR_8->receive_mode == VAR_1) {
  FUNC_1(VAR_8, VAR_5 + VAR_8->regoff,
    &VAR_11);
  FUNC_1(VAR_8, VAR_4 + VAR_8->regoff,
    &VAR_10);
  VAR_13 = FUNC_0(VAR_7);
  VAR_14 = VAR_7;
 } else {
  FUNC_1(VAR_8, VAR_3 + VAR_8->regoff,
    &VAR_11);
  FUNC_1(VAR_8, VAR_2 + VAR_8->regoff,
    &VAR_10);
  VAR_13 = FUNC_0(VAR_6);
  VAR_14 = VAR_6;
 }
 VAR_12 = (((u16)VAR_11) << 8) | (u16)VAR_10;
 *VAR_9 = FUNC_2(VAR_14, VAR_13, VAR_12);
 return 0;
}
