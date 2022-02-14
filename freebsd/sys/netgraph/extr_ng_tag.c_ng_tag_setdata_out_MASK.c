
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ng_tag_hookout {scalar_t__ tag_data; int tag_len; int tag_id; int tag_cookie; } ;
typedef int hook_p ;
typedef TYPE_1__* hinfo_p ;
struct TYPE_3__ {struct ng_tag_hookout* out; void* out_tag_data; int out_tag_len; int out_tag_id; int out_tag_cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ng_tag_hookout const*,struct ng_tag_hookout*,int) ;
 int FUNC_3 (struct ng_tag_hookout*,int ) ;
 struct ng_tag_hookout* FUNC_4 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_5(hook_p VAR_2, const struct ng_tag_hookout *VAR_3)
{
 const hinfo_p VAR_4 = FUNC_0(VAR_2);
 struct ng_tag_hookout *VAR_5;
 int VAR_6;


 VAR_6 = FUNC_1(VAR_3->tag_len);
 VAR_5 = FUNC_4(VAR_6, VAR_0, VAR_1);

 FUNC_2(VAR_3, VAR_5, VAR_6);


 if (VAR_4->out != ((void*)0))
  FUNC_3(VAR_4->out, VAR_0);
 VAR_4->out = VAR_5;


 VAR_4->out_tag_cookie = VAR_4->out->tag_cookie;
 VAR_4->out_tag_id = VAR_4->out->tag_id;
 VAR_4->out_tag_len = VAR_4->out->tag_len;
 VAR_4->out_tag_data = (void*)(VAR_4->out->tag_data);
 return (0);
}
