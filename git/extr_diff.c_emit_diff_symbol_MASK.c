
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emitted_diff_symbol {char const* member_0; int member_1; unsigned int member_2; int member_5; int member_4; int member_3; } ;
struct diff_options {scalar_t__ emitted_symbols; } ;
typedef enum diff_symbol { ____Placeholder_diff_symbol } diff_symbol ;


 int FUNC_0 (struct diff_options*,struct emitted_diff_symbol*) ;
 int FUNC_1 (struct diff_options*,struct emitted_diff_symbol*) ;

__attribute__((used)) static void FUNC_2(struct diff_options *VAR_0, enum diff_symbol VAR_1,
        const char *VAR_2, int VAR_3, unsigned VAR_4)
{
 struct emitted_diff_symbol VAR_5 = {VAR_2, VAR_3, VAR_4, 0, 0, VAR_1};

 if (VAR_0->emitted_symbols)
  FUNC_0(VAR_0, &VAR_5);
 else
  FUNC_1(VAR_0, &VAR_5);
}
