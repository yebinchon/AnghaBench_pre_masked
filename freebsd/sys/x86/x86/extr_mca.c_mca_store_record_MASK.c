
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_internal {int dummy; } ;


 struct mca_internal* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct mca_internal*,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(struct mca_internal *VAR_6)
{
 if (VAR_4 != 0)
  FUNC_1(&VAR_5, VAR_6, VAR_0);
 if (VAR_4 < 0 || VAR_1 < VAR_4)
  VAR_1++;
 else {
  if (VAR_4 != 0) {
   VAR_6 = FUNC_0(&VAR_5);
   FUNC_2(&VAR_5, VAR_0);
  }
  FUNC_1(&VAR_3, VAR_6, VAR_0);
  VAR_2++;
 }
}
