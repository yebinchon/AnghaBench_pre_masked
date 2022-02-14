
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct numa_mem_region {int mr_start; int mr_size; } ;
typedef int ssize_t ;
typedef int size_cells ;
typedef int phandle_t ;
typedef int cell_t ;
typedef int address_cells ;
typedef int OFmem ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char const*,int*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(phandle_t VAR_1, const char *VAR_2,
    struct numa_mem_region *VAR_3)
{
 cell_t VAR_4, VAR_5;
 cell_t VAR_6[4 * VAR_0];
 int VAR_7, VAR_8, VAR_9;
 phandle_t VAR_10;

 VAR_7 = 0;





 VAR_10 = FUNC_0("/");
 if (FUNC_1(VAR_10, "#address-cells", &VAR_4,
     sizeof(VAR_4)) < (ssize_t)sizeof(VAR_4))
  VAR_4 = 1;
 if (FUNC_1(VAR_10, "#size-cells", &VAR_5,
     sizeof(VAR_5)) < (ssize_t)sizeof(VAR_5))
  VAR_5 = 1;




 if (VAR_1 == -1 || (VAR_7 = FUNC_1(VAR_1, VAR_2,
     VAR_6, sizeof(VAR_6))) <= 0)
  FUNC_2("Physical memory map not found");

 VAR_8 = 0;
 VAR_9 = 0;
 while (VAR_8 < VAR_7/sizeof(cell_t)) {
  VAR_3[VAR_9].mr_start = VAR_6[VAR_8++];
  if (VAR_4 == 2) {
   VAR_3[VAR_9].mr_start <<= 32;
   VAR_3[VAR_9].mr_start += VAR_6[VAR_8++];
  }
  VAR_3[VAR_9].mr_size = VAR_6[VAR_8++];
  if (VAR_5 == 2) {
   VAR_3[VAR_9].mr_size <<= 32;
   VAR_3[VAR_9].mr_size += VAR_6[VAR_8++];
  }
  VAR_9++;
 }

 return (VAR_9);
}
