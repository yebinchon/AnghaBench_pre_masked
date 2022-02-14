
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mem_region {int mr_start; int mr_size; } ;
typedef int ssize_t ;
typedef int size_cells ;
typedef int phandle_t ;
typedef int cell_t ;
typedef int address_cells ;
typedef int OFmem ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char const*,int*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(phandle_t VAR_2, const char *VAR_3, struct mem_region *VAR_4)
{
 cell_t VAR_5, VAR_6;
 cell_t VAR_7[4 * VAR_1];
 int VAR_8, VAR_9, VAR_10;
 phandle_t VAR_11;

 VAR_8 = 0;





 VAR_11 = FUNC_0("/");
 if (FUNC_1(VAR_11, "#address-cells", &VAR_5,
     sizeof(VAR_5)) < (ssize_t)sizeof(VAR_5))
  VAR_5 = 1;
 if (FUNC_1(VAR_11, "#size-cells", &VAR_6,
     sizeof(VAR_6)) < (ssize_t)sizeof(VAR_6))
  VAR_6 = 1;




 if (VAR_2 == -1 || (VAR_8 = FUNC_1(VAR_2, VAR_3,
     VAR_7, sizeof(VAR_7))) <= 0)
  FUNC_2("Physical memory map not found");

 VAR_9 = 0;
 VAR_10 = 0;
 while (VAR_9 < VAR_8/sizeof(cell_t)) {
  VAR_4[VAR_10].mr_start = VAR_7[VAR_9++];
  if (VAR_5 == 2) {
   VAR_4[VAR_10].mr_start <<= 32;
   VAR_4[VAR_10].mr_start += VAR_7[VAR_9++];
  }

  VAR_4[VAR_10].mr_size = VAR_7[VAR_9++];
  if (VAR_6 == 2) {
   VAR_4[VAR_10].mr_size <<= 32;
   VAR_4[VAR_10].mr_size += VAR_7[VAR_9++];
  }

  if (VAR_4[VAR_10].mr_start > VAR_0)
   continue;






  if (((uint64_t)VAR_4[VAR_10].mr_start +
      (uint64_t)VAR_4[VAR_10].mr_size - 1) >
      VAR_0) {
   VAR_4[VAR_10].mr_size = VAR_0 -
       VAR_4[VAR_10].mr_start + 1;
  }

  VAR_10++;
 }

 return (VAR_10);
}
