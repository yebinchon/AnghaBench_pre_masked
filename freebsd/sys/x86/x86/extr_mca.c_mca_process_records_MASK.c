
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_internal {int rec; } ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;


 int VAR_0 ;
 struct mca_internal* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (struct mca_internal*) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(enum scan_mode VAR_7)
{
 struct mca_internal *VAR_8;

 FUNC_5(&VAR_3);
 while ((VAR_8 = FUNC_0(&VAR_4)) != ((void*)0)) {
  FUNC_1(&VAR_4, VAR_2);
  FUNC_2(&VAR_8->rec);
  FUNC_4(VAR_8);
 }
 FUNC_6(&VAR_3);
 if (VAR_7 == VAR_0)
  FUNC_3();
 else if (!VAR_1)
  FUNC_7(VAR_6, &VAR_5);
}
