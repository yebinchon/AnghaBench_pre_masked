
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {scalar_t__ icode; int vcu; } ;


 unsigned long long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct hfi1_devdata*) ;
 int FUNC_3 (struct hfi1_devdata*,int ,unsigned long long) ;
 int FUNC_4 (struct hfi1_devdata*,int,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_5(struct hfi1_devdata *VAR_9)
{
 int VAR_10;


 FUNC_3(VAR_9, VAR_8, ~0ull);
 FUNC_3(VAR_9, VAR_5, ~0ull);
 FUNC_3(VAR_9, VAR_7, ~0ull);
 FUNC_3(VAR_9, VAR_6, ~0ull);


 for (VAR_10 = 0; VAR_10 < FUNC_2(VAR_9); VAR_10++)
  FUNC_4(VAR_9, VAR_10, VAR_3, ~0ull);
 for (VAR_10 = 0; VAR_10 < FUNC_1(VAR_9); VAR_10++)
  FUNC_4(VAR_9, VAR_10, VAR_4, ~0ull);


 FUNC_0(VAR_9, VAR_9->vcu);





 if (VAR_9->icode != VAR_1)
  FUNC_3(VAR_9, VAR_2, VAR_0);
}
