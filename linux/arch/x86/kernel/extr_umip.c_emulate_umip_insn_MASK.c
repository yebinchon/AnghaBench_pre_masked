
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef unsigned long u16 ;
struct TYPE_2__ {int value; } ;
struct insn {int opnd_bytes; TYPE_1__ modrm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,unsigned long*,int) ;

__attribute__((used)) static int FUNC_2(struct insn *VAR_10, int VAR_11,
        unsigned char *VAR_12, int *VAR_13, bool VAR_14)
{
 if (!VAR_12 || !VAR_13 || !VAR_10)
  return -VAR_1;
 if (VAR_11 == VAR_7 || VAR_11 == VAR_8) {
  u64 VAR_15;
  u16 VAR_16 = 0;


  if (FUNC_0(VAR_10->modrm.value) == 3)
   return -VAR_1;

  if (VAR_11 == VAR_7)
   VAR_15 = VAR_2;
  else
   VAR_15 = VAR_3;







  if (VAR_14)
   *VAR_13 = VAR_5;
  else
   *VAR_13 = VAR_4;

  FUNC_1(VAR_12 + 2, &VAR_15, *VAR_13);

  *VAR_13 += VAR_6;
  FUNC_1(VAR_12, &VAR_16, VAR_6);

 } else if (VAR_11 == VAR_9) {
  unsigned long VAR_17 = VAR_0;
  if (FUNC_0(VAR_10->modrm.value) == 3)
   *VAR_13 = VAR_10->opnd_bytes;
  else
   *VAR_13 = 2;

  FUNC_1(VAR_12, &VAR_17, *VAR_13);

 } else {
  return -VAR_1;
 }

 return 0;
}
