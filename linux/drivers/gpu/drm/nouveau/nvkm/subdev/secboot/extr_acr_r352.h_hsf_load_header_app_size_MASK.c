
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hsf_load_header {size_t* apps; size_t num_apps; } ;



__attribute__((used)) static inline u32
FUNC_0(const struct hsf_load_header *VAR_0, u32 VAR_1)
{
 return VAR_0->apps[VAR_0->num_apps + VAR_1];
}
