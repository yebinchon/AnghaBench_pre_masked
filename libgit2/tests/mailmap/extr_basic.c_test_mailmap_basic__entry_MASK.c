
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int replace_email; int replace_name; int real_email; int real_name; } ;
typedef TYPE_1__ git_mailmap_entry ;
struct TYPE_10__ {int replace_email; int replace_name; int real_email; int real_name; } ;
struct TYPE_9__ {int entries; } ;


 size_t FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (size_t,int ) ;
 TYPE_5__* VAR_0 ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int *) ;
 TYPE_2__* VAR_1 ;

void FUNC_6(void)
{
 size_t VAR_2;
 const git_mailmap_entry *VAR_3;


 FUNC_3(FUNC_0(VAR_0), FUNC_5(&VAR_1->entries));

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {

  VAR_3 = FUNC_4(
   VAR_1, VAR_0[VAR_2].replace_name, VAR_0[VAR_2].replace_email);

  FUNC_1(VAR_3);
  FUNC_2(VAR_3->real_name, VAR_0[VAR_2].real_name);
  FUNC_2(VAR_3->real_email, VAR_0[VAR_2].real_email);
  FUNC_2(VAR_3->replace_name, VAR_0[VAR_2].replace_name);
  FUNC_2(VAR_3->replace_email, VAR_0[VAR_2].replace_email);
 }
}
