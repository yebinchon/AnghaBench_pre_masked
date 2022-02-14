
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ident_split {int name_end; int name_begin; int mail_end; int mail_begin; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

int FUNC_1(const struct ident_split *VAR_0,
       const struct ident_split *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->mail_begin, VAR_0->mail_end,
        VAR_1->mail_begin, VAR_1->mail_end);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0->name_begin, VAR_0->name_end,
         VAR_1->name_begin, VAR_1->name_end);
}
