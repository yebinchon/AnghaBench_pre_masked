
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int replace_email; int replace_name; int real_email; int real_name; } ;
typedef TYPE_1__ mailmap_entry ;
struct TYPE_10__ {int replace_email; int replace_name; int real_email; int real_name; } ;
typedef TYPE_2__ git_mailmap_entry ;
struct TYPE_11__ {int entries; } ;
typedef TYPE_3__ git_mailmap ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (size_t,int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__ const*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
 const git_mailmap *VAR_0, const mailmap_entry *VAR_1, size_t VAR_2)
{
 const git_mailmap_entry *VAR_3;
 size_t VAR_4;


 FUNC_2(VAR_2, FUNC_4(&VAR_0->entries));


 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  VAR_3 = FUNC_3(
   VAR_0, VAR_1[VAR_4].replace_name, VAR_1[VAR_4].replace_email);

  FUNC_0(VAR_3);
  FUNC_1(VAR_3->real_name, VAR_1[VAR_4].real_name);
  FUNC_1(VAR_3->real_email, VAR_1[VAR_4].real_email);
  FUNC_1(VAR_3->replace_name, VAR_1[VAR_4].replace_name);
  FUNC_1(VAR_3->replace_email, VAR_1[VAR_4].replace_email);
 }
}
