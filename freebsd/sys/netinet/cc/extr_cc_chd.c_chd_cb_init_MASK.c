
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chd {scalar_t__ shadow_w; } ;
struct cc_var {struct chd* cc_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct chd* FUNC_0 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct cc_var *VAR_3)
{
 struct chd *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct chd), VAR_1, VAR_2);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_4->shadow_w = 0;
 VAR_3->cc_data = VAR_4;

 return (0);
}
