
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stat {int st_mode; } ;
typedef int lba_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int,int *) ;

int
FUNC_5(lba_t VAR_0, int VAR_1, uint64_t *VAR_2)
{
 struct stat VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0);
 if (!VAR_4) {
  if (FUNC_1(VAR_1, &VAR_3) == -1 || !FUNC_0(VAR_3.st_mode))
   VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2);
  else
   VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2);
 }
 return (VAR_4);
}
