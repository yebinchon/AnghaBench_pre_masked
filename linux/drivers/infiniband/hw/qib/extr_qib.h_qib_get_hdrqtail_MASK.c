
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qib_devdata {int flags; int rhf_offset; } ;
struct qib_ctxtdata {int head; scalar_t__ seq_cnt; scalar_t__ rcvhdrq; struct qib_devdata* dd; } ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qib_ctxtdata const*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline u32 FUNC_2(const struct qib_ctxtdata *VAR_1)
{
 const struct qib_devdata *VAR_2 = VAR_1->dd;
 u32 VAR_3;

 if (VAR_2->flags & VAR_0) {
  __le32 *VAR_4;
  u32 VAR_5;

  VAR_4 = (__le32 *) VAR_1->rcvhdrq +
   VAR_1->head + VAR_2->rhf_offset;
  VAR_5 = FUNC_1(VAR_4);
  VAR_3 = VAR_1->head;
  if (VAR_5 == VAR_1->seq_cnt)
   VAR_3++;
 } else
  VAR_3 = FUNC_0(VAR_1);

 return VAR_3;
}
