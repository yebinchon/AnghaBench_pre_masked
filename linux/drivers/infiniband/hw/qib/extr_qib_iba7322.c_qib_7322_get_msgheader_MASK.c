
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_message_header {int dummy; } ;
struct qib_devdata {int * rhf_offset; } ;
typedef int __le32 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static struct qib_message_header *
FUNC_1(struct qib_devdata *VAR_0, __le32 *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1);

 return (struct qib_message_header *)
  (VAR_1 - VAR_0->rhf_offset + VAR_2);
}
