
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uasm_reloc {int dummy; } ;
typedef enum label_id { ____Placeholder_label_id } label_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int **,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **,int,int,int) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int **,int,int,int) ;
 int FUNC_5 (int **,int,int,int) ;
 int FUNC_6 (int **,struct uasm_reloc**,int,int ,int) ;
 int FUNC_7 (int **,struct uasm_reloc**,int,int) ;
 int FUNC_8 (int **,struct uasm_reloc**,int,int) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(u32 **VAR_4, struct uasm_reloc **VAR_5,
    int VAR_6, int VAR_7, int VAR_8, enum label_id VAR_9)
{
 int VAR_10 = VAR_8 >= 0 ? VAR_8 : VAR_6;
 int VAR_11 = VAR_6;

 if (VAR_3) {
  if (FUNC_9()) {
   FUNC_6(VAR_4, VAR_5, VAR_6, FUNC_1(VAR_1), VAR_9);
   FUNC_3(VAR_4);
  } else {
   if (VAR_2) {
    FUNC_4(VAR_4, VAR_10, VAR_11, VAR_2);
    VAR_11 = VAR_10;
   }
   FUNC_2(VAR_4, VAR_10, VAR_11, 1);
   FUNC_7(VAR_4, VAR_5, VAR_10, VAR_9);
   if (VAR_6 == VAR_10)

    FUNC_0(VAR_4, VAR_6, VAR_7);
  }
 } else {
  if (VAR_2) {
   FUNC_4(VAR_4, VAR_10, VAR_11, VAR_2);
   VAR_11 = VAR_10;
  }
  FUNC_2(VAR_4, VAR_10, VAR_11,
   (VAR_1 | VAR_0) >> VAR_2);
  FUNC_5(VAR_4, VAR_10, VAR_10, VAR_1 >> VAR_2);
  FUNC_8(VAR_4, VAR_5, VAR_10, VAR_9);
  if (VAR_6 == VAR_10)

   FUNC_0(VAR_4, VAR_6, VAR_7);
 }
}
