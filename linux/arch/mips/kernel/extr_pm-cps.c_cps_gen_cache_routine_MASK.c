
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uasm_reloc {int dummy; } ;
struct uasm_label {int dummy; } ;
struct cache_desc {unsigned int ways; unsigned int waybit; int flags; unsigned int const linesz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int ,long) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct uasm_label**,int *,int) ;
 int FUNC_2 (int **,int ,int ,unsigned int const) ;
 int FUNC_3 (int **,unsigned int,unsigned int,int ) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int **,struct uasm_reloc**,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(u32 **VAR_5, struct uasm_label **VAR_6,
      struct uasm_reloc **VAR_7,
      const struct cache_desc *VAR_8,
      unsigned VAR_9, int VAR_10)
{
 unsigned VAR_11 = VAR_8->ways << VAR_8->waybit;
 unsigned VAR_12;
 const unsigned VAR_13 = 32;


 if (VAR_8->flags & VAR_1)
  return;


 FUNC_0(VAR_5, VAR_3, (long)VAR_0);


 if (VAR_11 < 0x8000)
  FUNC_2(VAR_5, VAR_4, VAR_3, VAR_11);
 else
  FUNC_0(VAR_5, VAR_4, (long)(VAR_0 + VAR_11));


 FUNC_1(VAR_6, *VAR_5, VAR_10);


 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  if (VAR_2) {
   FUNC_3(VAR_5, VAR_9, 0, VAR_3);
   FUNC_2(VAR_5, VAR_3, VAR_3, VAR_8->linesz);
  } else {
   FUNC_3(VAR_5, VAR_9, VAR_12 * VAR_8->linesz, VAR_3);
  }
 }

 if (!VAR_2)

  FUNC_2(VAR_5, VAR_3, VAR_3, VAR_13 * VAR_8->linesz);


 FUNC_5(VAR_5, VAR_7, VAR_3, VAR_4, VAR_10);
 FUNC_4(VAR_5);
}
