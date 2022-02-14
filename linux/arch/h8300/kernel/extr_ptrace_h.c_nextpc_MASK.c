
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct optable {unsigned char bitmask; unsigned char bitpattern; size_t length; } ;
struct TYPE_2__ {int size; struct optable* ptr; } ;


 unsigned short* FUNC_0 (struct task_struct*,struct optable const*,unsigned char*,unsigned short*,unsigned char) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned short *FUNC_1(struct task_struct *VAR_1, unsigned short *VAR_2)
{
 const struct optable *VAR_3;
 unsigned char *VAR_4;
 int VAR_5;
 unsigned char VAR_6;

 VAR_3 = VAR_0[0].ptr;
 VAR_5 = VAR_0[0].size;
 VAR_4 = (unsigned char *)VAR_2;
 VAR_6 = *VAR_4++;
 do {
  if ((VAR_6 & VAR_3->bitmask) == VAR_3->bitpattern) {
   if (VAR_3->length < 0) {
    VAR_3 = VAR_0[-VAR_3->length].ptr;
    VAR_5 = VAR_0[-VAR_3->length].size + 1;
    VAR_6 = *VAR_4++;
   } else
    return FUNC_0(VAR_1, VAR_3, VAR_4, VAR_2, VAR_6);
  } else
   VAR_3++;
 } while (--VAR_5 > 0);
 return ((void*)0);
}
