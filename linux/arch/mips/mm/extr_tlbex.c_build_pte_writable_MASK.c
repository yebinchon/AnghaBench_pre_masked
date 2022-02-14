
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
 int FUNC_0 (int **,unsigned int,unsigned int) ;
 int FUNC_1 (int **,int,int,int) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,int,int,int) ;
 int FUNC_4 (int **,int,int,int) ;
 int FUNC_5 (int **,struct uasm_reloc**,int,int) ;

__attribute__((used)) static void
FUNC_6(u32 **VAR_3, struct uasm_reloc **VAR_4,
     unsigned int VAR_5, unsigned int VAR_6, int VAR_7,
     enum label_id VAR_8)
{
 int VAR_9 = VAR_7 >= 0 ? VAR_7 : VAR_5;
 int VAR_10 = VAR_5;

 if (VAR_1) {
  FUNC_3(VAR_3, VAR_9, VAR_10, VAR_1);
  VAR_10 = VAR_9;
 }
 FUNC_1(VAR_3, VAR_9, VAR_10,
      (VAR_0 | VAR_2) >> VAR_1);
 FUNC_4(VAR_3, VAR_9, VAR_9,
      (VAR_0 | VAR_2) >> VAR_1);
 FUNC_5(VAR_3, VAR_4, VAR_9, VAR_8);
 if (VAR_5 == VAR_9)

  FUNC_0(VAR_3, VAR_5, VAR_6);
 else
  FUNC_2(VAR_3);
}
