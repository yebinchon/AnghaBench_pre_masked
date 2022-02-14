
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ng_tag_hookin {scalar_t__ tag_data; int strip; int tag_len; int tag_id; int tag_cookie; int ifNotMatch; int ifMatch; } ;
typedef int hook_p ;
typedef TYPE_1__* hinfo_p ;
struct TYPE_3__ {struct ng_tag_hookin* in; void* in_tag_data; int strip; int in_tag_len; int in_tag_id; int in_tag_cookie; void* hi_nonmatch; void* hi_match; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ng_tag_hookin const*,struct ng_tag_hookin*,int) ;
 int FUNC_4 (struct ng_tag_hookin*,int ) ;
 struct ng_tag_hookin* FUNC_5 (int,int ,int ) ;
 void* FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(hook_p VAR_2, const struct ng_tag_hookin *VAR_3)
{
 const hinfo_p VAR_4 = FUNC_1(VAR_2);
 struct ng_tag_hookin *VAR_5;
 int VAR_6;


 VAR_6 = FUNC_2(VAR_3->tag_len);
 VAR_5 = FUNC_5(VAR_6, VAR_0, VAR_1);

 FUNC_3(VAR_3, VAR_5, VAR_6);


 if (VAR_4->in != ((void*)0))
  FUNC_4(VAR_4->in, VAR_0);
 VAR_4->in = VAR_5;
 VAR_4->hi_match = FUNC_6(FUNC_0(VAR_2), VAR_4->in->ifMatch);
 VAR_4->hi_nonmatch = FUNC_6(FUNC_0(VAR_2), VAR_4->in->ifNotMatch);


 VAR_4->in_tag_cookie = VAR_4->in->tag_cookie;
 VAR_4->in_tag_id = VAR_4->in->tag_id;
 VAR_4->in_tag_len = VAR_4->in->tag_len;
 VAR_4->strip = VAR_4->in->strip;
 VAR_4->in_tag_data = (void*)(VAR_4->in->tag_data);
 return (0);
}
