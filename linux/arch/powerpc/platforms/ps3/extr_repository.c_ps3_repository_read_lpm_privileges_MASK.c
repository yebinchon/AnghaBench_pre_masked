
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (unsigned int,scalar_t__*) ;
 int FUNC_3 (int ,int ,scalar_t__,int ,int ,scalar_t__*,scalar_t__*) ;

int FUNC_4(unsigned int VAR_1, u64 *VAR_2,
 u64 *VAR_3)
{
 int VAR_4;
 u64 VAR_5;

 *VAR_2 = 0;
 *VAR_3 = 0;
 VAR_4 = FUNC_2(VAR_1, &VAR_5);
 return VAR_4 ? VAR_4
  : FUNC_3(VAR_0,
       FUNC_1("be", 0),
       VAR_5,
       FUNC_0("lpm", 0),
       FUNC_0("priv", 0),
       VAR_2, VAR_3);
}
