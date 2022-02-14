
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_header {int dummy; } ;
struct hfi1_ctxtdata {int dummy; } ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (struct hfi1_ctxtdata*,int *) ;

__attribute__((used)) static inline struct ib_header *FUNC_1(struct hfi1_ctxtdata *VAR_0,
         __le32 *VAR_1)
{
 return (struct ib_header *)FUNC_0(VAR_0, VAR_1);
}
