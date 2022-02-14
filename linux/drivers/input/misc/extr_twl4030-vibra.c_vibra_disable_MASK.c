
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vibra_info {int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct vibra_info *VAR_5)
{
 u8 VAR_6;


 FUNC_1(VAR_2,
   &VAR_6, VAR_3);
 FUNC_2(VAR_2,
    (VAR_6 & ~VAR_4), VAR_3);

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);

 VAR_5->enabled = 0;
}
