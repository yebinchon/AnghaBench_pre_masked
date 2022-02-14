
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct hns_roce_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct hns_roce_dev *VAR_8,
     int VAR_9, int VAR_10)
{
 int VAR_11;

 if (VAR_10 == VAR_0) {
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
   FUNC_0(VAR_8, VAR_7 +
       VAR_11 * VAR_1,
       VAR_4);

  FUNC_0(VAR_8, VAR_6,
      VAR_3);
  FUNC_0(VAR_8, VAR_5,
      VAR_2);
 } else {
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
   FUNC_0(VAR_8, VAR_7 +
       VAR_11 * VAR_1,
       VAR_4 & 0x0);

  FUNC_0(VAR_8, VAR_6,
      VAR_3 & 0x0);
  FUNC_0(VAR_8, VAR_5,
      VAR_2 & 0x0);
 }
}
