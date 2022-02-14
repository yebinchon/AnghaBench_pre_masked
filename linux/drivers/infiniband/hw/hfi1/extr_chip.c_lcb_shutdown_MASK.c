
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct hfi1_devdata {unsigned long long lcb_err_en; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long long VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hfi1_devdata*,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_3(struct hfi1_devdata *VAR_7, int VAR_8)
{
 u64 VAR_9;


 FUNC_2(VAR_7, VAR_3, 0);

 FUNC_2(VAR_7, VAR_4,
    1ull << VAR_5);

 VAR_7->lcb_err_en = FUNC_0(VAR_7, VAR_6);
 VAR_9 = FUNC_0(VAR_7, VAR_0);
 FUNC_2(VAR_7, VAR_0, VAR_9 |
    VAR_1 | VAR_2);
 (void)FUNC_0(VAR_7, VAR_0);
 if (!VAR_8) {
  FUNC_1(1);
  FUNC_2(VAR_7, VAR_0, VAR_9);
  FUNC_2(VAR_7, VAR_6, VAR_7->lcb_err_en);
 }
}
