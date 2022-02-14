
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int rate ;
typedef int le_clk_id ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,int *,int) ;

__attribute__((used)) static unsigned long FUNC_3(u16 VAR_1)
{
 int VAR_2;
 __le32 VAR_3;
 __le16 VAR_4 = FUNC_0(VAR_1);

 VAR_2 = FUNC_2(VAR_0, &VAR_4,
    sizeof(VAR_4), &VAR_3, sizeof(VAR_3));

 return VAR_2 ? VAR_2 : FUNC_1(VAR_3);
}
