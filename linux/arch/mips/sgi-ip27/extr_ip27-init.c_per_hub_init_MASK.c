
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hub_data {int h_cpus; } ;
typedef int nasid_t ;
typedef scalar_t__ cnodeid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 () ;
 struct hub_data* FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (void*,char*,int) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_10(cnodeid_t VAR_4)
{
 struct hub_data *VAR_5 = FUNC_5(VAR_4);
 nasid_t VAR_6 = FUNC_0(VAR_4);

 FUNC_3(FUNC_8(), &VAR_5->h_cpus);

 if (FUNC_9(VAR_4, VAR_3))
  return;



 FUNC_1(VAR_6, VAR_2, 0x800);
 FUNC_1(VAR_6, VAR_1, 0xff);

 FUNC_6(VAR_4);
}
