
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uasm_reloc {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int **,unsigned int,int ,unsigned int) ;
 int FUNC_3 (int **,unsigned int,int ,unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int **,unsigned int,int,unsigned int) ;
 int FUNC_6 (int **,unsigned int,unsigned int) ;
 int FUNC_7 (int **,unsigned int,int,unsigned int) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int **,unsigned int,unsigned int,unsigned int) ;
 int FUNC_10 (int **,unsigned int,unsigned int,unsigned int) ;
 int FUNC_11 (int **,unsigned int,int,unsigned int) ;
 int FUNC_12 (int **,unsigned int,int ,unsigned int) ;
 int FUNC_13 (int **,unsigned int,int ,unsigned int) ;
 int FUNC_14 (int **,unsigned int,int,unsigned int) ;
 int FUNC_15 (int **,struct uasm_reloc**,unsigned int,int ) ;
 int FUNC_16 (int **,struct uasm_reloc**,unsigned int,int ) ;

__attribute__((used)) static void
FUNC_17(u32 **VAR_5, struct uasm_reloc **VAR_6, unsigned int VAR_7, unsigned int VAR_8,
 unsigned int VAR_9, unsigned int VAR_10)
{
 unsigned int VAR_11 = VAR_9 & (VAR_2 | VAR_1);
 unsigned int VAR_12 = VAR_9 & ~VAR_11;

 if (FUNC_1(VAR_0) && !VAR_3) {
  FUNC_6(VAR_5, VAR_10, VAR_12 >> 16);
  FUNC_9(VAR_5, VAR_7, VAR_7, VAR_10);
  FUNC_0(VAR_12 & 0xffff);
 } else {
  FUNC_10(VAR_5, VAR_7, VAR_7, VAR_9);
 }
  FUNC_3(VAR_5, VAR_7, 0, VAR_8);
}
