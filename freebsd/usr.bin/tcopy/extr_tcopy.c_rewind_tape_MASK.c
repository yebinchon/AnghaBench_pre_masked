
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void
FUNC_5(int VAR_2)
{
 struct stat VAR_3;

 if(FUNC_2(VAR_2, &VAR_3))
  FUNC_1(12, "fstat in rewind");




 if( FUNC_0(VAR_3.st_mode) ) {
  if( FUNC_3(VAR_2, 0, VAR_1) == -1 )
   FUNC_1(13, "lseek");
 } else

  FUNC_4(VAR_2, VAR_0);
}
