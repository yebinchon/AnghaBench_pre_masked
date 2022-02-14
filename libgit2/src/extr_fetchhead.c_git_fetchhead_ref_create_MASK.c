
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_6__ {unsigned int is_merge; void* remote_url; void* ref_name; int oid; } ;
typedef TYPE_1__ git_fetchhead_ref ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*,int,int) ;

int FUNC_6(
 git_fetchhead_ref **VAR_0,
 git_oid *VAR_1,
 unsigned int VAR_2,
 const char *VAR_3,
 const char *VAR_4)
{
 git_fetchhead_ref *VAR_5;

 FUNC_1(VAR_0 && VAR_1);

 *VAR_0 = ((void*)0);

 VAR_5 = FUNC_2(sizeof(git_fetchhead_ref));
 FUNC_0(VAR_5);

 FUNC_5(VAR_5, 0x0, sizeof(git_fetchhead_ref));

 FUNC_4(&VAR_5->oid, VAR_1);
 VAR_5->is_merge = VAR_2;

 if (VAR_3)
  VAR_5->ref_name = FUNC_3(VAR_3);

 if (VAR_4)
  VAR_5->remote_url = FUNC_3(VAR_4);

 *VAR_0 = VAR_5;

 return 0;
}
