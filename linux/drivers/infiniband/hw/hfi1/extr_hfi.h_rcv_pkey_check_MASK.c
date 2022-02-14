
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hfi1_pportdata {int part_enforce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_pportdata*,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct hfi1_pportdata *VAR_2, u16 VAR_3,
     u8 VAR_4, u16 VAR_5)
{
 if (!(VAR_2->part_enforce & VAR_0))
  return 0;


 if ((VAR_4 == 0xf) && ((VAR_3 & VAR_1) != VAR_1))
  goto bad;

 return 0;
bad:
 FUNC_0(VAR_2, VAR_3, VAR_5);
 return 1;
}
