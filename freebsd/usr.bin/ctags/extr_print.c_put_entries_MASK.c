
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* entry; char* file; int lno; char* pat; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef TYPE_1__ NODE ;


 int FUNC_0 (int ,char*,char*,char*,int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_2(NODE *VAR_4)
{

 if (VAR_4->left)
  FUNC_2(VAR_4->left);
 if (VAR_2)
  FUNC_1("%s %s %d\n",
      VAR_4->entry, VAR_4->file, (VAR_4->lno + 63) / 64);
 else if (VAR_3)
  FUNC_1("%-16s %4d %-16s %s\n",
      VAR_4->entry, VAR_4->lno, VAR_4->file, VAR_4->pat);
 else
  FUNC_0(VAR_0, "%s\t%s\t%c^%s%c\n",
      VAR_4->entry, VAR_4->file, VAR_1, VAR_4->pat, VAR_1);
 if (VAR_4->right)
  FUNC_2(VAR_4->right);
}
