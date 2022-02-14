
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct exportlisthead {int dummy; } ;
struct exportlist {int ex_fsdir; int ex_fs; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (struct exportlisthead*,struct exportlist*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct exportlist *VAR_1, struct exportlisthead *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(&VAR_1->ex_fs);
 FUNC_1("fs=%s hash=%i", VAR_1->ex_fsdir, VAR_3);
 FUNC_2(&VAR_2[VAR_3], VAR_1, VAR_0);
}
