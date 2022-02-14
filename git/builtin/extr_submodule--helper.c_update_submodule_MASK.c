
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct update_clone_data {int just_cloned; TYPE_1__* sub; int oid; } ;
struct TYPE_2__ {char* path; } ;


 int FUNC_0 (int ,char*,char*,int,char*) ;
 char* FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct update_clone_data *VAR_1)
{
 FUNC_0(VAR_0, "dummy %s %d\t%s\n",
  FUNC_1(&VAR_1->oid),
  VAR_1->just_cloned,
  VAR_1->sub->path);
}
