
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct hfi1_devdata*) ;
 int FUNC_3 (struct hfi1_devdata*,int,int ,int ,int ) ;
 int FUNC_4 (struct hfi1_devdata*,scalar_t__,int ) ;
 int FUNC_5 (struct hfi1_devdata*,int,int ,int ) ;
 int FUNC_6 (struct hfi1_devdata*,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(struct hfi1_devdata *VAR_9)
{
 int VAR_10, VAR_11;


 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  FUNC_4(VAR_9, VAR_0 + (8 * VAR_10), 0);


 for (VAR_10 = 0; VAR_10 < FUNC_2(VAR_9); VAR_10++)
  FUNC_5(VAR_9, VAR_10, VAR_8, 0);
 for (VAR_10 = 0; VAR_10 < FUNC_1(VAR_9); VAR_10++) {
  FUNC_5(VAR_9, VAR_10, VAR_3, 0);
  FUNC_5(VAR_9, VAR_10, VAR_4, 0);
  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
   FUNC_6(VAR_9, VAR_10, VAR_6 + (8 * VAR_11), 0);
 }


 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_9); VAR_10++)
  FUNC_3(VAR_9, VAR_10, VAR_2, 0, 0);


 for (VAR_10 = 0; VAR_10 < 32; VAR_10++)
  FUNC_4(VAR_9, VAR_5 + (8 * VAR_10), 0);
}
