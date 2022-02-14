
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {size_t hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 int ** VAR_2 ;
 int FUNC_1 (struct hfi1_devdata*,int ,int,int ,int) ;
 int FUNC_2 (struct hfi1_devdata*) ;

__attribute__((used)) static void FUNC_3(struct hfi1_devdata *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_3);







 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_1(VAR_3, VAR_2[VAR_3->hfi1_id][VAR_4],
        0x03, VAR_1, 0x00022132);
 }

 FUNC_0(VAR_3);
}
