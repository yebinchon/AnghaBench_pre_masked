
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mtim; int st_atim; int st_birthtim; scalar_t__ st_ino; } ;
struct denode {int de_MTime; int de_MDate; int de_ADate; int de_CTime; int de_CDate; } ;


 struct stat VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct denode *VAR_1, const struct stat *VAR_2)
{
 if (VAR_0.st_ino)
  VAR_2 = &VAR_0;

 FUNC_0(&VAR_2->st_birthtim, &VAR_1->de_CDate, &VAR_1->de_CTime);
 FUNC_0(&VAR_2->st_atim, &VAR_1->de_ADate, ((void*)0));
 FUNC_0(&VAR_2->st_mtim, &VAR_1->de_MDate, &VAR_1->de_MTime);
}
