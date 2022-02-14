
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {scalar_t__ type; unsigned int magic; int text; } ;
struct tl_compiler {int dummy; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tl_compiler*,char*,unsigned int,unsigned int,int ) ;
 scalar_t__ VAR_0 ;

int FUNC_3 (struct tl_compiler *VAR_1, struct tl_expression *VAR_2) {
  if (VAR_2->type != VAR_0) {
    return 0;
  }
  unsigned VAR_3 = FUNC_0 (VAR_2->text, FUNC_1 (VAR_2->text));
  if (VAR_2->magic && VAR_2->magic != VAR_3) {
     return FUNC_2 (VAR_1, "tl_expression_compute_magic: magic in schema (0x%x) isn't equal to computed magic (0x%x), expr: %s", VAR_2->magic, VAR_3, VAR_2->text);
  }
  VAR_2->magic = VAR_3;
  return 0;
}
