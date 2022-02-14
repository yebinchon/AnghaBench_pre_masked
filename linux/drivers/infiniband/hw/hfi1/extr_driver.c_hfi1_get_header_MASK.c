
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_ctxtdata {int * rhf_offset; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void *FUNC_2(struct hfi1_ctxtdata *VAR_0,
        __le32 *VAR_1)
{
 u32 VAR_2 = FUNC_0(FUNC_1(VAR_1));

 return (void *)(VAR_1 - VAR_0->rhf_offset + VAR_2);
}
