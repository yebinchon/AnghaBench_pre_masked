
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uasm_reloc {int dummy; } ;
struct uasm_label {int dummy; } ;
struct TYPE_2__ {unsigned int linesz; } ;
struct cpuinfo_mips {unsigned int processor_id; int cputype; TYPE_1__ dcache; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int,int,int ) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int **,int ,long) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct uasm_label**,int *,int) ;
 int FUNC_4 (int **,int ,int ,unsigned int) ;
 int FUNC_5 (int **,int ,unsigned int,int ) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int **,int ,unsigned int,int ) ;
 int FUNC_8 (int **,int ,int,unsigned int) ;
 int FUNC_9 (int **,int ,int,unsigned int) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (int **,int ) ;
 int FUNC_12 (int **,struct uasm_reloc**,int ,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_13(u32 **VAR_10, struct uasm_label **VAR_11,
        struct uasm_reloc **VAR_12,
        const struct cpuinfo_mips *VAR_13,
        int VAR_14)
{
 unsigned VAR_15, VAR_16 = 8;
 unsigned VAR_17 = (VAR_16 * 3) / 2;
 unsigned VAR_18 = 2;
 unsigned VAR_19 = VAR_13->dcache.linesz;
 unsigned VAR_20, VAR_21;
 unsigned VAR_22 = VAR_13->processor_id & VAR_3;





 switch (FUNC_2(VAR_13->cputype)) {
 case 129:
  VAR_20 = 1;
  VAR_21 = 51;
  break;

 case 128:

  if (VAR_22 >= FUNC_0(1, 1, 0))
   return 0;


  return -1;

 default:

  return 0;
 }
 FUNC_8(VAR_10, VAR_7, 25, (VAR_20 * 2) + 0);
 FUNC_8(VAR_10, VAR_8, 25, (VAR_20 * 2) + 1);


 FUNC_4(VAR_10, VAR_5, VAR_9, (VAR_21 << 5) | 0xf);
 FUNC_9(VAR_10, VAR_5, 25, (VAR_20 * 2) + 0);
 FUNC_6(VAR_10);
 FUNC_9(VAR_10, VAR_9, 25, (VAR_20 * 2) + 1);
 FUNC_6(VAR_10);


 FUNC_1(VAR_10, VAR_5, (long)VAR_0);


 FUNC_3(VAR_11, *VAR_10, VAR_14);


 for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++)
  FUNC_7(VAR_10, VAR_9, VAR_15 * VAR_19 * VAR_18, VAR_5);





 for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
  FUNC_5(VAR_10, VAR_1,
        VAR_15 * VAR_19 * VAR_18, VAR_5);
  FUNC_5(VAR_10, VAR_2,
        VAR_15 * VAR_19 * VAR_18, VAR_5);
 }


 FUNC_11(VAR_10, VAR_4);
 FUNC_6(VAR_10);


 FUNC_8(VAR_10, VAR_6, 25, (VAR_20 * 2) + 1);


 FUNC_12(VAR_10, VAR_12, VAR_6, VAR_14);
 FUNC_10(VAR_10);


 FUNC_9(VAR_10, VAR_7, 25, (VAR_20 * 2) + 0);
 FUNC_6(VAR_10);
 FUNC_9(VAR_10, VAR_8, 25, (VAR_20 * 2) + 1);
 FUNC_6(VAR_10);

 return 0;
}
