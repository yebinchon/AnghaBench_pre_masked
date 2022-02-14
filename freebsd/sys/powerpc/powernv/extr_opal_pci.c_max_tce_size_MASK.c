
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef int sizes ;
typedef int phandle_t ;
typedef int device_t ;
typedef unsigned long long cell_t ;


 int FUNC_0 (int ,char*,unsigned long long*,int) ;
 unsigned long long VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint64_t
FUNC_2(device_t VAR_1)
{
 phandle_t VAR_2;
 cell_t VAR_3[64];
 int VAR_4;

 VAR_2 = FUNC_1(VAR_1);

 VAR_4 = FUNC_0(VAR_2, "ibm,supported-tce-sizes",
     VAR_3, sizeof(VAR_3));
 if (VAR_4 < (int) sizeof(cell_t))
  return VAR_0;

 VAR_4 /= sizeof(cell_t);

 return (1ULL << VAR_3[VAR_4 - 1]);
}
