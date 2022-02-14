
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_bus {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mii_bus*,int ) ;
 int FUNC_1 (struct mii_bus*,int ,unsigned int,int ,int) ;
 int FUNC_2 (struct mii_bus*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;

u16 FUNC_5(struct mii_bus *VAR_9, unsigned VAR_10,
        unsigned VAR_11)
{
 u32 VAR_12, VAR_13 = 0xffff;
 int VAR_14;

 if (VAR_10 >= VAR_6)
  return 0xffff;

 FUNC_3(&VAR_8);
 VAR_12 = (VAR_11 << VAR_5) |
     (VAR_10 << VAR_4) |
     VAR_3 |
     VAR_0 |
     VAR_1;

 FUNC_2(VAR_9, VAR_7, VAR_12);
 VAR_14 = FUNC_1(VAR_9, VAR_7,
      VAR_0, 0, 5);
 if (!VAR_14)
  VAR_13 = FUNC_0(VAR_9, VAR_7);
 FUNC_4(&VAR_8);

 return VAR_13 & VAR_2;
}
