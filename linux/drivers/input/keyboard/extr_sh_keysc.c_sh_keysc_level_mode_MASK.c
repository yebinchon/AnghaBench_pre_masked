
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_keysc_info {scalar_t__ kycr2_delay; } ;
struct sh_keysc_priv {struct sh_keysc_info pdata; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sh_keysc_priv*,int ,unsigned long) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sh_keysc_priv *VAR_3,
    unsigned long VAR_4)
{
 struct sh_keysc_info *VAR_5 = &VAR_3->pdata;

 FUNC_0(VAR_3, VAR_2, 0);
 FUNC_0(VAR_3, VAR_0, VAR_1 | (VAR_4 << 8));

 if (VAR_5->kycr2_delay)
  FUNC_1(VAR_5->kycr2_delay);
}
