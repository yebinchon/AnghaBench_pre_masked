
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0367_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct stv0367_state*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct stv0367_state *VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_0(VAR_4, VAR_3) +
  (FUNC_0(VAR_4, VAR_2) << 8) +
  (FUNC_0(VAR_4, VAR_1) << 16) +
  (FUNC_0(VAR_4, VAR_0) << 24);

 VAR_7 = (VAR_5 >> 1) / 1000;

 if (VAR_6 < 134217728) {
  VAR_6 = VAR_6 * 32;
  VAR_6 = VAR_6 / 32768;
  VAR_6 = VAR_7 * VAR_6;
  VAR_6 = VAR_6 / 128;
  VAR_6 *= 125 ;
  VAR_6 /= 2048 ;
 } else if (VAR_6 < 268435456) {
  VAR_6 = VAR_6 * 16;
  VAR_6 = VAR_6 / 32768;
  VAR_6 = VAR_7 * VAR_6;
  VAR_6 = VAR_6 / 128;
  VAR_6 *= 125 ;
  VAR_6 /= 1024 ;
 } else if (VAR_6 < 536870912) {
  VAR_6 = VAR_6 * 8;
  VAR_6 = VAR_6 / 32768;
  VAR_6 = VAR_7 * VAR_6;
  VAR_6 = VAR_6 / 128;
  VAR_6 *= 125 ;
  VAR_6 /= 512 ;
 } else {
  VAR_6 = VAR_6 * 4;
  VAR_6 = VAR_6 / 32768;
  VAR_6 = VAR_7 * VAR_6;
  VAR_6 = VAR_6 / 128;
  VAR_6 *= 125 ;
  VAR_6 /= 256 ;
 }

 return VAR_6;
}
