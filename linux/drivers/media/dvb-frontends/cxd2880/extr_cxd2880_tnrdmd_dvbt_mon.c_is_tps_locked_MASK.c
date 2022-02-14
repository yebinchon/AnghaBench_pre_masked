
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_tnrdmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_1(struct cxd2880_tnrdmd *VAR_2)
{
 u8 VAR_3 = 0;
 u8 VAR_4 = 0;
 u8 VAR_5 = 0;
 int VAR_6;

 if (!VAR_2)
  return -VAR_1;

 VAR_6 =
     FUNC_0(VAR_2, &VAR_3, &VAR_4,
           &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_3 != 6)
  return -VAR_0;

 return 0;
}
