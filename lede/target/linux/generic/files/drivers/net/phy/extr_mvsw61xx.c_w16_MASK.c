
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {int (* write ) (struct mii_bus*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mii_bus*,int,int,int ,int ) ;
 int FUNC_1 (struct mii_bus*,int,int,int) ;
 int FUNC_2 (struct mii_bus*,int,int,int) ;
 int FUNC_3 (struct mii_bus*,int,int,int) ;

__attribute__((used)) static void
FUNC_4(struct mii_bus *VAR_5, bool VAR_6, int VAR_7, int VAR_8,
  int VAR_9, u16 VAR_10)
{
 u16 VAR_11;

 if (!VAR_6) {
  VAR_5->write(VAR_5, VAR_8, VAR_9, VAR_10);
  return;
 }


 FUNC_0(VAR_5, VAR_7, VAR_2,
   VAR_1, 0);


 VAR_5->write(VAR_5, VAR_7, VAR_3, VAR_10);


 FUNC_0(VAR_5, VAR_7, VAR_2,
   VAR_1, 0);


 VAR_11 = VAR_4 | (VAR_8 << VAR_0) | VAR_9;
 VAR_5->write(VAR_5, VAR_7, VAR_2,
   VAR_11);
}
