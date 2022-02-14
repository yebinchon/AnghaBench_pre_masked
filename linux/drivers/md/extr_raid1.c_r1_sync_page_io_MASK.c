
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct md_rdev {TYPE_1__* mddev; int flags; } ;
typedef int sector_t ;
struct TYPE_2__ {int recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct md_rdev*) ;
 int FUNC_1 (struct md_rdev*,int ,int,int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct md_rdev*,int ,int,struct page*,int,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct md_rdev *VAR_4, sector_t VAR_5,
       int VAR_6, struct page *VAR_7, int VAR_8)
{
 if (FUNC_3(VAR_4, VAR_5, VAR_6 << 9, VAR_7, VAR_8, 0, 0))

  return 1;
 if (VAR_8 == VAR_1) {
  FUNC_2(VAR_3, &VAR_4->flags);
  if (!FUNC_4(VAR_2,
          &VAR_4->flags))
   FUNC_2(VAR_0, &
    VAR_4->mddev->recovery);
 }

 if (!FUNC_1(VAR_4, VAR_5, VAR_6, 0))
  FUNC_0(VAR_4->mddev, VAR_4);
 return 0;
}
