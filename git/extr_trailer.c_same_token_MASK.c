
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trailer_item {int token; } ;
struct arg_item {int token; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,size_t) ;
 size_t FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct trailer_item *VAR_0, struct arg_item *VAR_1)
{
 size_t VAR_2, VAR_3, VAR_4;

 if (!VAR_0->token)
  return 0;

 VAR_2 = FUNC_2(VAR_0->token, FUNC_0(VAR_0->token));
 VAR_3 = FUNC_2(VAR_1->token, FUNC_0(VAR_1->token));
 VAR_4 = (VAR_2 > VAR_3) ? VAR_3 : VAR_2;

 return !FUNC_1(VAR_0->token, VAR_1->token, VAR_4);
}
