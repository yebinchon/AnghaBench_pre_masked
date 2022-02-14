
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hfi1_devdata *VAR_8)
{
 u64 VAR_9;

 VAR_9 = (((u64)1 << VAR_8->hfi1_id) <<
        VAR_1) |
       ((u64)VAR_7[VAR_8->hfi1_id] <<
        VAR_3 |
        VAR_2 |
        ((u64)VAR_6 & VAR_4) <<
        VAR_5);
 FUNC_1(VAR_8, VAR_0, VAR_9);

 FUNC_0(VAR_8, VAR_0);
}
