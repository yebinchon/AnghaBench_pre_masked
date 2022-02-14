
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxd_state {int type_A; } ;
struct SNoiseCal {int cpNexpOfs; int tdCal2k; int tdCal8k; scalar_t__ cpOpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drxd_state*,int ,int*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct drxd_state*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct drxd_state *VAR_5,
      struct SNoiseCal *VAR_6)
{
 u16 VAR_7;
 int VAR_8 = 0;

 do {
  VAR_8 = FUNC_0(VAR_5, VAR_4, &VAR_7, 0);
  if (VAR_8 < 0)
   break;
  if (VAR_6->cpOpt) {
   VAR_7 |= (1 << VAR_3);
  } else {
   VAR_7 &= ~(1 << VAR_3);
   VAR_8 = FUNC_1(VAR_5, VAR_2, VAR_6->cpNexpOfs, 0);
   if (VAR_8 < 0)
    break;
  }
  VAR_8 = FUNC_1(VAR_5, VAR_4, VAR_7, 0);
  if (VAR_8 < 0)
   break;

  if (!VAR_5->type_A) {
   VAR_8 = FUNC_1(VAR_5, VAR_0, VAR_6->tdCal2k, 0);
   if (VAR_8 < 0)
    break;
   VAR_8 = FUNC_1(VAR_5, VAR_1, VAR_6->tdCal8k, 0);
   if (VAR_8 < 0)
    break;
  }
 } while (0);

 return VAR_8;
}
