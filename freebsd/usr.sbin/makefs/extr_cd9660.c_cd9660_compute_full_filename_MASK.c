
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* node; } ;
typedef TYPE_2__ cd9660node ;
struct TYPE_4__ {char* root; char* path; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,char*,char*,char*,char*) ;

void
FUNC_2(cd9660node *VAR_2, char *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_0 + 1;
 VAR_4 = FUNC_1(VAR_3, VAR_4, "%s/%s/%s", VAR_2->node->root,
     VAR_2->node->path, VAR_2->node->name);
 if (VAR_4 > VAR_0)
  FUNC_0(VAR_1, "Pathname too long.");
}
