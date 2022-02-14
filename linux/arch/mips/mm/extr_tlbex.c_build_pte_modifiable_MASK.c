
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uasm_reloc {int dummy; } ;
typedef enum label_id { ____Placeholder_label_id } label_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,unsigned int,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int,int,int) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int **,int,unsigned int,int ) ;
 int FUNC_5 (int **,struct uasm_reloc**,unsigned int,int ,int) ;
 int FUNC_6 (int **,struct uasm_reloc**,int,int) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(u32 **VAR_2, struct uasm_reloc **VAR_3,
       unsigned int VAR_4, unsigned int VAR_5, int VAR_6,
       enum label_id VAR_7)
{
 if (FUNC_7()) {
  FUNC_5(VAR_2, VAR_3, VAR_4, FUNC_1(VAR_0), VAR_7);
  FUNC_3(VAR_2);
 } else {
  int VAR_8 = VAR_6 >= 0 ? VAR_6 : VAR_4;
  FUNC_4(VAR_2, VAR_8, VAR_4, VAR_1);
  FUNC_2(VAR_2, VAR_8, VAR_8, 1);
  FUNC_6(VAR_2, VAR_3, VAR_8, VAR_7);
  if (VAR_4 == VAR_8)

   FUNC_0(VAR_2, VAR_4, VAR_5);
 }
}
