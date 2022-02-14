
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mthca_dev {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mthca_dev*,int,int*,int ,int ,int ,int ) ;

int FUNC_2(struct mthca_dev *VAR_6, u64 VAR_7, u64 *VAR_8)
{
 int VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_8, 0,
   0, VAR_0, VAR_1);

 if (VAR_9)
  return VAR_9;





 *VAR_8 = FUNC_0(*VAR_8, VAR_5 / VAR_3) >>
  (VAR_4 - VAR_2);

 return 0;
}
