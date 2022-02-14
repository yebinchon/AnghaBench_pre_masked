
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ version; } ;
struct dib0090_state {TYPE_1__ identity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dib0090_state*,int) ;
 int FUNC_1 (struct dib0090_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib0090_state *VAR_8)
{
 u8 VAR_9, VAR_10, VAR_11;
 u16 VAR_12, VAR_13;
 u16 VAR_14;

 VAR_12 = FUNC_0(VAR_8, 0x26);
 VAR_13 = FUNC_0(VAR_8, 0x28);

 if ((VAR_8->identity.version == VAR_4) ||
   (VAR_8->identity.version == VAR_5) || (VAR_12 == 0xffff)) {

  FUNC_1(VAR_8, 0x22, 0x10);
  VAR_14 = (FUNC_0(VAR_8, 0x22) >> 6) & 0x3ff;

  if ((VAR_14 < 670) || (VAR_14 == 1023))
   VAR_14 = 850;
  VAR_11 = 165 - ((VAR_14 * 10)>>6) ;
  VAR_12 = VAR_13 = (3<<12) | (34<<6) | (VAR_11);
 }

 if (VAR_12 != VAR_13)
  VAR_12 &= VAR_13;

 if (VAR_12 != 0xffff) {
  VAR_9 = VAR_12 & 0x3f;
  VAR_11 = (VAR_12 >> 12) & 0xf;
  VAR_10 = (VAR_12 >> 6) & 0x3f;

  if ((VAR_9 >= VAR_0) || (VAR_9 <= VAR_1))
   VAR_9 = 32;
  else
   VAR_9 += 14;
  if ((VAR_10 >= VAR_2) || (VAR_10 <= VAR_3))
   VAR_10 = 34;
  if ((VAR_11 >= VAR_6) || (VAR_11 <= VAR_7))
   VAR_11 = 3;

  FUNC_1(VAR_8, 0x13, (VAR_10 << 10));
  VAR_12 = (VAR_11 << 11) | ((VAR_10 >> 2)<<6) | VAR_9;
  FUNC_1(VAR_8, 0x2, VAR_12);
 }
}
