
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,struct opal_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct opal_dev *VAR_4, bool VAR_5,
      bool VAR_6, int VAR_7)
{
 u8 VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_1;
 VAR_8 |= VAR_5 ? VAR_0 : 0;
 VAR_8 |= VAR_6 ? VAR_3 : 0;
 VAR_8 |= VAR_7 & VAR_2;

 FUNC_0(&VAR_9, VAR_4, VAR_8);
}
