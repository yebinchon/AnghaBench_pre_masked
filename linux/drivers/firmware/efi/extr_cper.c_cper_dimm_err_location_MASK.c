
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cper_mem_err_compact {int validation_bits; int mem_dev_handle; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char const**,char const**) ;
 size_t FUNC_1 (char*,size_t,char*,...) ;

__attribute__((used)) static int FUNC_2(struct cper_mem_err_compact *VAR_2, char *VAR_3)
{
 u32 VAR_4, VAR_5;
 const char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);

 if (!VAR_3 || !(VAR_2->validation_bits & VAR_0))
  return 0;

 VAR_5 = 0;
 VAR_4 = VAR_1 - 1;
 FUNC_0(VAR_2->mem_dev_handle, &VAR_6, &VAR_7);
 if (VAR_6 && VAR_7)
  VAR_5 = FUNC_1(VAR_3, VAR_4, "DIMM location: %s %s ", VAR_6, VAR_7);
 else
  VAR_5 = FUNC_1(VAR_3, VAR_4,
        "DIMM location: not present. DMI handle: 0x%.4x ",
        VAR_2->mem_dev_handle);

 VAR_3[VAR_5] = '\0';
 return VAR_5;
}
