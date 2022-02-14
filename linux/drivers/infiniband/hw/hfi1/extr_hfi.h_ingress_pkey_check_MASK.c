
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct hfi1_pportdata {int part_enforce; int * pkeys; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (struct hfi1_pportdata*,int,int ) ;
 int FUNC_2 (struct hfi1_pportdata*,int) ;

__attribute__((used)) static inline int FUNC_3(struct hfi1_pportdata *VAR_2, u16 VAR_3,
         u8 VAR_4, u8 VAR_5, u32 VAR_6, bool VAR_7)
{
 if (!(VAR_7) && !(VAR_2->part_enforce & VAR_0))
  return 0;


 if ((VAR_4 == 0xf) && ((VAR_3 & VAR_1) != VAR_1))
  goto bad;


 if ((VAR_3 & VAR_1) == 0)
  goto bad;


 if (FUNC_0(VAR_3, VAR_2->pkeys[VAR_5]))
  return 0;


 if (!FUNC_2(VAR_2, VAR_3))
  return 0;

bad:
 FUNC_1(VAR_2, VAR_3, VAR_6);
 return 1;
}
