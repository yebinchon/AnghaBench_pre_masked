
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int,struct stat*) ;
 int FUNC_1 (int ) ;

int FUNC_2(int VAR_0, struct stat *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == 0)
  VAR_1->st_mode = FUNC_1(VAR_1->st_mode);
 return VAR_2;
}
