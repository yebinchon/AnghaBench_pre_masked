
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsw_mt753x {int (* mii_write ) (struct gsw_mt753x*,int,int ,int ) ;int (* mii_read ) (struct gsw_mt753x*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gsw_mt753x*) ;
 int FUNC_1 (struct gsw_mt753x*,int,int ) ;
 int FUNC_2 (struct gsw_mt753x*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gsw_mt753x *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 FUNC_0(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = VAR_3->mii_read(VAR_3, VAR_4, VAR_1);
  VAR_5 &= ~VAR_0;
  VAR_3->mii_write(VAR_3, VAR_4, VAR_1, VAR_5);
 }

 return 0;
}
