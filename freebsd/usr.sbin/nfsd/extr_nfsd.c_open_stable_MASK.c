
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,struct stat*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void
FUNC_4(int *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7 = -1, VAR_8;
 struct stat VAR_9, VAR_10;


 VAR_6 = FUNC_3(VAR_1, VAR_3, 0);
 if (VAR_6 < 0)
  VAR_6 = FUNC_3(VAR_1, VAR_3 | VAR_2, 0600);
 if (VAR_6 >= 0) {
  VAR_8 = FUNC_2(VAR_6, &VAR_9);
  if (VAR_8 < 0) {
   FUNC_0(VAR_6);
   VAR_6 = -1;
  }
 }


 if (VAR_6 >= 0) {
  VAR_7 = FUNC_3(VAR_0, VAR_3, 0);
  if (VAR_7 < 0)
   VAR_7 = FUNC_3(VAR_0, VAR_3 | VAR_2,
       0600);
  if (VAR_7 >= 0) {
   VAR_8 = FUNC_2(VAR_7, &VAR_10);
   if (VAR_8 < 0) {
    FUNC_0(VAR_7);
    VAR_7 = -1;
   }
  }
  if (VAR_7 < 0) {
   FUNC_0(VAR_6);
   VAR_6 = -1;
  }
 }

 *VAR_4 = VAR_6;
 *VAR_5 = VAR_7;
 if (VAR_6 < 0)
  return;


 if (VAR_9.st_size > 0)
  FUNC_1(VAR_6, VAR_7);
 else if (VAR_10.st_size > 0)
  FUNC_1(VAR_7, VAR_6);
}
