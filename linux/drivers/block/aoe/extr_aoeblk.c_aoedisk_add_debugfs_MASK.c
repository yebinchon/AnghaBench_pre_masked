
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aoedev {int debugfs; TYPE_1__* gd; } ;
struct TYPE_2__ {char* disk_name; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int *,struct aoedev*,int *) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void
FUNC_3(struct aoedev *VAR_2)
{
 char *VAR_3;

 if (VAR_0 == ((void*)0))
  return;
 VAR_3 = FUNC_2(VAR_2->gd->disk_name, '/');
 if (VAR_3 == ((void*)0))
  VAR_3 = VAR_2->gd->disk_name;
 else
  VAR_3++;
 FUNC_0(*VAR_3 == '\0');
 VAR_2->debugfs = FUNC_1(VAR_3, 0444, VAR_0, VAR_2,
      &VAR_1);
}
