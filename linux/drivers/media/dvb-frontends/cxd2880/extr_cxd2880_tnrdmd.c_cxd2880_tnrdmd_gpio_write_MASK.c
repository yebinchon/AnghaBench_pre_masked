
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int ,int,int,int,int) ;

int FUNC_1(struct cxd2880_tnrdmd *VAR_4,
         u8 VAR_5, u8 VAR_6)
{
 if (!VAR_4)
  return -VAR_3;

 if (VAR_5 > 2)
  return -VAR_3;

 if (VAR_4->state != VAR_2 &&
     VAR_4->state != VAR_1)
  return -VAR_3;

 return FUNC_0(VAR_4,
          VAR_0,
          0x00, 0x46,
          VAR_6 ? (1 << VAR_5) : 0,
          1 << VAR_5);
}
