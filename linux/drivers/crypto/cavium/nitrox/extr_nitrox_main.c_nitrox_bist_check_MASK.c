
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nitrox_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct nitrox_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct nitrox_device *VAR_12)
{
 u64 VAR_13 = 0;
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  VAR_13 += FUNC_3(VAR_12, FUNC_1(VAR_14));
  VAR_13 += FUNC_3(VAR_12, FUNC_0(VAR_14));
 }
 VAR_13 += FUNC_3(VAR_12, VAR_11);
 VAR_13 += FUNC_3(VAR_12, VAR_5);
 VAR_13 += FUNC_3(VAR_12, VAR_6);
 VAR_13 += FUNC_3(VAR_12, VAR_8);
 VAR_13 += FUNC_3(VAR_12, VAR_7);
 VAR_13 += FUNC_3(VAR_12, VAR_10);
 VAR_13 += FUNC_3(VAR_12, VAR_0);
 VAR_13 += FUNC_3(VAR_12, VAR_2);
 VAR_13 += FUNC_3(VAR_12, VAR_1);
 VAR_13 += FUNC_3(VAR_12, VAR_4);
 VAR_13 += FUNC_3(VAR_12, FUNC_2(0));
 if (VAR_13)
  return -VAR_3;
 return 0;
}
