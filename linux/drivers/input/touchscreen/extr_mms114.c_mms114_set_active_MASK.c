
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mms114_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mms114_data*,int ) ;
 int FUNC_1 (struct mms114_data*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mms114_data *VAR_3, bool VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 &= ~VAR_2;


 if (VAR_4)
  VAR_5 |= VAR_0;

 return FUNC_1(VAR_3, VAR_1, VAR_5);
}
