
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_region {int mr_start; int mr_size; } ;
typedef int ssize_t ;
typedef int platform_t ;
typedef int physacells ;
typedef int phandle_t ;
typedef int memoryprop ;
typedef int cell_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int*,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;

void
FUNC_3(platform_t VAR_2, struct mem_region *VAR_3, int *VAR_4,
    struct mem_region *VAR_5, int *VAR_6)
{
 phandle_t VAR_7;
 cell_t VAR_8[VAR_1 * 2];
 ssize_t VAR_9, VAR_10, VAR_11;
 int VAR_12 = 1;

 VAR_7 = FUNC_0("/memory");
 if (VAR_7 == -1)
  VAR_7 = FUNC_0("/memory@0");


 FUNC_1(FUNC_2(VAR_7), "#address-cells", &VAR_12,
     sizeof(VAR_12));

 VAR_9 = FUNC_1(VAR_7, "reg", VAR_8, sizeof(VAR_8));
 VAR_9 /= sizeof(cell_t);
 for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_9; VAR_10 += VAR_12+1, VAR_11++) {
  VAR_3[VAR_11].mr_start = VAR_8[VAR_10];
  if (VAR_12 == 2) {


   if (VAR_8[VAR_10] != 0) {
    VAR_11--;
    continue;
   }



   VAR_3[VAR_11].mr_start |= VAR_8[VAR_10+1];
  }
  VAR_3[VAR_11].mr_size = VAR_8[VAR_10 + VAR_12];
 }
 *VAR_4 = VAR_11;


 VAR_9 = FUNC_1(VAR_7, "available", VAR_8,
     sizeof(VAR_8));
 if (VAR_9 <= 0) {
  for (VAR_10 = 0; VAR_10 < *VAR_4; VAR_10++) {
   VAR_5[VAR_10].mr_start = VAR_3[VAR_10].mr_start;
   VAR_5[VAR_10].mr_size = VAR_3[VAR_10].mr_size;
  }

  *VAR_6 = *VAR_4;
 } else {
  VAR_9 /= sizeof(cell_t);
  for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_9; VAR_10 += 2, VAR_11++) {
   VAR_5[VAR_11].mr_start = VAR_8[VAR_10];
   VAR_5[VAR_11].mr_size = VAR_8[VAR_10 + 1];
  }
  *VAR_6 = VAR_11;
 }
}
