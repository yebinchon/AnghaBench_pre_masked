
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_context {int dev; } ;


 int FUNC_0 (int ,char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct gsc_context *VAR_4, bool VAR_5,
  bool VAR_6, bool VAR_7)
{
 u32 VAR_8;

 FUNC_0(VAR_4->dev, "enable[%d]overflow[%d]level[%d]\n",
     VAR_5, VAR_6, VAR_7);

 VAR_8 = FUNC_1(VAR_0);
 VAR_8 |= (VAR_3 | VAR_2);

 if (VAR_5)
  VAR_8 |= VAR_1;
 else
  VAR_8 &= ~VAR_1;

 if (VAR_6)
  VAR_8 &= ~VAR_3;
 else
  VAR_8 |= VAR_3;

 if (VAR_7)
  VAR_8 &= ~VAR_2;
 else
  VAR_8 |= VAR_2;

 FUNC_2(VAR_8, VAR_0);
}
