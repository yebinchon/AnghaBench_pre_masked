
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {scalar_t__ vl15buf_cached; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (struct hfi1_devdata*,scalar_t__,int ) ;

void FUNC_2(struct hfi1_devdata *VAR_5)
{
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_1(VAR_5, VAR_1 + (8 * VAR_6), 0);
 FUNC_1(VAR_5, VAR_2, 0);
 FUNC_1(VAR_5, VAR_3, 0);

 FUNC_0(VAR_5, VAR_0);

 VAR_5->vl15buf_cached = 0;
}
