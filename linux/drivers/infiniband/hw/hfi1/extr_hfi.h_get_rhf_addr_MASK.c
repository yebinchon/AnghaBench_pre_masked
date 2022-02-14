
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_ctxtdata {int head; int rhf_offset; scalar_t__ rcvhdrq; } ;
typedef int __le32 ;



__attribute__((used)) static inline __le32 *FUNC_0(struct hfi1_ctxtdata *VAR_0)
{
 return (__le32 *)VAR_0->rcvhdrq + VAR_0->head + VAR_0->rhf_offset;
}
