
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {int n_rules; int * map; } ;
struct ip_fw {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ip_fw_chain VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (struct ip_fw_chain*) ;
 int FUNC_10 (struct ip_fw_chain*) ;
 int FUNC_11 (struct ip_fw_chain*,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct ip_fw_chain*,int) ;
 int FUNC_15 (struct ip_fw_chain*,struct ip_fw**,int ) ;
 int FUNC_16 (struct ip_fw*) ;
 int FUNC_17 (struct ip_fw_chain*) ;

__attribute__((used)) static int
FUNC_18(const void *VAR_5)
{
 struct ip_fw *VAR_6;
 struct ip_fw_chain *VAR_7 = &VAR_3;
 int VAR_8, VAR_9;

 VAR_2 = 0;





 FUNC_12();
 VAR_1 = ((void*)0);

 VAR_9 = FUNC_5(VAR_4) ? 1 : 0;

 FUNC_1(VAR_7);
 FUNC_2(VAR_7);

 FUNC_13(0);

 FUNC_1(VAR_7);

 VAR_6 = ((void*)0);
 FUNC_3(VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_7->n_rules; VAR_8++)
  FUNC_15(VAR_7, &VAR_6, VAR_7->map[VAR_8]);
 FUNC_6(VAR_7->map, VAR_0);



 FUNC_4(VAR_7);
 FUNC_2(VAR_7);
 FUNC_11(VAR_7, VAR_9);
 FUNC_14(VAR_7, VAR_9);
 if (VAR_6 != ((void*)0))
  FUNC_16(VAR_6);
 FUNC_17(VAR_7);
 FUNC_10(VAR_7);
 FUNC_0(VAR_7);
 FUNC_13(1);
 FUNC_8();
 FUNC_7(VAR_9);
 return (0);
}
