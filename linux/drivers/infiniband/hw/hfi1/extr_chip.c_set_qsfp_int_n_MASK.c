
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct hfi1_devdata {scalar_t__ hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (struct hfi1_devdata*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hfi1_pportdata *VAR_5, u8 VAR_6)
{
 struct hfi1_devdata *VAR_7 = VAR_5->dd;
 u64 VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_7->hfi1_id ? VAR_3 : VAR_1);
 if (VAR_6) {




  FUNC_1(VAR_7, VAR_7->hfi1_id ? VAR_2 : VAR_0,
     VAR_4);
  VAR_8 |= (u64)VAR_4;
 } else {
  VAR_8 &= ~(u64)VAR_4;
 }
 FUNC_1(VAR_7, VAR_7->hfi1_id ? VAR_3 : VAR_1, VAR_8);
}
