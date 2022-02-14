
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long long VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int FUNC_1 (struct hfi1_devdata*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct hfi1_devdata*,int) ;
 int FUNC_4 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct hfi1_pportdata *VAR_10)
{
 struct hfi1_devdata *VAR_11 = VAR_10->dd;




 FUNC_4(VAR_11, VAR_9, 1);
 FUNC_4(VAR_11, VAR_2,
    VAR_3);

 FUNC_4(VAR_11, VAR_4, 0);
 FUNC_4(VAR_11, VAR_6, 0);
 FUNC_4(VAR_11, VAR_1, 0x110);
 FUNC_4(VAR_11, VAR_5, 0x2);

 FUNC_4(VAR_11, VAR_9, 0);
 (void)FUNC_1(VAR_11, VAR_9);
 FUNC_2(3);
 FUNC_4(VAR_11, VAR_0, 1);
 FUNC_4(VAR_11, VAR_7, 1ull << VAR_8);

 FUNC_3(VAR_11, 100);




 FUNC_4(VAR_11, VAR_9, 1);
 FUNC_4(VAR_11, VAR_0, 0);
 FUNC_4(VAR_11, VAR_2, 0);

 FUNC_0(VAR_10->dd, "logical state forced to LINK_DOWN\n");
}
