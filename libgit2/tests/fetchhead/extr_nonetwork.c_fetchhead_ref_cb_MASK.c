
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {unsigned int is_merge; scalar_t__ remote_url; scalar_t__ ref_name; int oid; } ;
typedef TYPE_1__ git_fetchhead_ref ;
struct TYPE_5__ {int idx; int fetchhead_vector; } ;
typedef TYPE_2__ fetchhead_ref_cb_data ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (scalar_t__,char const*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, const char *VAR_1,
 const git_oid *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 fetchhead_ref_cb_data *VAR_5 = VAR_4;
 git_fetchhead_ref *VAR_6;

 FUNC_0(VAR_4);

 VAR_6 = FUNC_3(VAR_5->fetchhead_vector, VAR_5->idx);

 FUNC_1(&VAR_6->oid, VAR_2);
 FUNC_0(VAR_6->is_merge == VAR_3);

 if (VAR_6->ref_name)
  FUNC_2(VAR_6->ref_name, VAR_0);
 else
  FUNC_0(VAR_0 == ((void*)0));

 if (VAR_6->remote_url)
  FUNC_2(VAR_6->remote_url, VAR_1);
 else
  FUNC_0(VAR_1 == ((void*)0));

 VAR_5->idx++;

 return 0;
}
