
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {int (* write ) (struct mii_bus*,int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mii_bus*,int,int ,int) ;
 int FUNC_1 (struct mii_bus*,int,int ,int) ;
 int FUNC_2 (struct mii_bus*,int,int ,int) ;

__attribute__((used)) static inline void
FUNC_3(struct mii_bus *VAR_2, int VAR_3, u16 VAR_4, u16 VAR_5)
{
 VAR_2->write(VAR_2, VAR_3, VAR_0, VAR_4);
 VAR_2->write(VAR_2, VAR_3, VAR_1, VAR_5);
 VAR_2->write(VAR_2, VAR_3, VAR_0, VAR_4 | 0x4000);
}
