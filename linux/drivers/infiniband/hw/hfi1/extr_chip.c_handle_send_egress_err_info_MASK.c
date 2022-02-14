
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_pportdata {int * port_xmit_discards_vl; } ;
struct hfi1_devdata {struct hfi1_pportdata* pport; } ;
typedef int buf ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_pportdata*) ;
 int FUNC_1 (struct hfi1_devdata*,char*,int,int ,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hfi1_devdata*,int ) ;
 int FUNC_6 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct hfi1_devdata *VAR_5,
     int VAR_6)
{
 struct hfi1_pportdata *VAR_7 = VAR_5->pport;
 u64 VAR_8 = FUNC_5(VAR_5, VAR_3);
 u64 VAR_9 = FUNC_5(VAR_5, VAR_2);
 char VAR_10[96];


 FUNC_6(VAR_5, VAR_2, VAR_9);

 FUNC_1(VAR_5,
      "Egress Error Info: 0x%llx, %s Egress Error Src 0x%llx\n",
      VAR_9, FUNC_2(VAR_10, sizeof(VAR_10), VAR_9), VAR_8);


 if (VAR_9 & VAR_1) {
  int VAR_11, VAR_12;
  VAR_11 = FUNC_3(VAR_9 & VAR_1);
  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
   FUNC_0(VAR_7);
   if (VAR_6 >= 0 && VAR_6 < VAR_4)
    FUNC_4(&VAR_7->port_xmit_discards_vl[VAR_6]);
   else if (VAR_6 == 15)
    FUNC_4(&VAR_7->port_xmit_discards_vl
         [VAR_0]);
  }
 }
}
