
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (struct fs_dev*) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct fs_dev*,int,int) ;

__attribute__((used)) static void FUNC_9 (struct fs_dev *VAR_4)
{
 int VAR_5;

 FUNC_8 (VAR_4, VAR_2, VAR_3);


 FUNC_7 (128);




 for (VAR_5=0;VAR_5 < VAR_1;VAR_5++) {
  FUNC_8 (VAR_4, FUNC_0 (FUNC_6(VAR_5)), 0);
  FUNC_8 (VAR_4, FUNC_4 (FUNC_6(VAR_5)), 0);
  FUNC_8 (VAR_4, FUNC_3 (FUNC_6(VAR_5)), 0);
  FUNC_8 (VAR_4, FUNC_1 (FUNC_6(VAR_5)), 0);
  FUNC_8 (VAR_4, FUNC_2 (FUNC_6(VAR_5)), 0);
 }
 if (FUNC_5 (VAR_4)) {
  for (VAR_5=0;VAR_5<VAR_0;VAR_5++) {
   FUNC_8 (VAR_4, 0x200 + VAR_5 * 4, -1);
  }
 }
}
