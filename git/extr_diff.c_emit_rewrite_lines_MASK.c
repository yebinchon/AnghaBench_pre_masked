
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emit_callback {int opt; int lno_in_postimage; int lno_in_preimage; } ;


 int VAR_0 ;
 int FUNC_0 (struct emit_callback*,char const*,int) ;
 int FUNC_1 (struct emit_callback*,char const*,int) ;
 int FUNC_2 (int ,int ,int *,int ,int ) ;
 char* FUNC_3 (char const*,char,int) ;

__attribute__((used)) static void FUNC_4(struct emit_callback *VAR_1,
          int VAR_2, const char *VAR_3, int VAR_4)
{
 const char *VAR_5 = ((void*)0);

 while (0 < VAR_4) {
  int VAR_6;

  VAR_5 = FUNC_3(VAR_3, '\n', VAR_4);
  VAR_6 = VAR_5 ? (VAR_5 - VAR_3 + 1) : VAR_4;
  if (VAR_2 != '+') {
   VAR_1->lno_in_preimage++;
   FUNC_1(VAR_1, VAR_3, VAR_6);
  } else {
   VAR_1->lno_in_postimage++;
   FUNC_0(VAR_1, VAR_3, VAR_6);
  }
  VAR_4 -= VAR_6;
  VAR_3 += VAR_6;
 }
 if (!VAR_5)
  FUNC_2(VAR_1->opt, VAR_0, ((void*)0), 0, 0);
}
