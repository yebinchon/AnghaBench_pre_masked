
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {int* idxmap; int* idxmap_back; int map; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int*,int ) ;
 int* FUNC_5 (int,int ,int) ;
 int FUNC_6 (struct ip_fw_chain*) ;
 int FUNC_7 (struct ip_fw_chain*,int ) ;

void
FUNC_8(struct ip_fw_chain *VAR_3)
{
 int *VAR_4, *VAR_5;

 VAR_4 = FUNC_5(65536 * sizeof(int), VAR_0, VAR_1 | VAR_2);
 VAR_5 = FUNC_5(65536 * sizeof(int), VAR_0, VAR_1);







 FUNC_0(VAR_3);
 if (VAR_3->idxmap != ((void*)0)) {
  FUNC_1(VAR_3);
  FUNC_4(VAR_4, VAR_0);
  FUNC_4(VAR_5, VAR_0);
  return;
 }


 VAR_3->idxmap_back = VAR_5;
 FUNC_7(VAR_3, VAR_3->map);
 FUNC_2(VAR_3);

 VAR_3->idxmap = VAR_4;
 FUNC_6(VAR_3);
 FUNC_3(VAR_3);
 FUNC_1(VAR_3);
}
