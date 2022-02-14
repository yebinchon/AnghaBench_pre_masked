
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
typedef int u8 ;
struct tpm_chip {int flags; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* status ) (struct tpm_chip*) ;} ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long VAR_7 ;
 int FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (struct tpm_chip*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int ) ;
 long FUNC_6 (int ,int ,unsigned long) ;
 int FUNC_7 (struct tpm_chip*,int,int,int*) ;

__attribute__((used)) static int FUNC_8(struct tpm_chip *VAR_8, u8 VAR_9,
  unsigned long VAR_10, wait_queue_head_t *VAR_11,
  bool VAR_12)
{
 unsigned long VAR_13;
 long VAR_14;
 u8 VAR_15;
 bool VAR_16 = 0;


 VAR_15 = VAR_8->ops->status(VAR_8);
 if ((VAR_15 & VAR_9) == VAR_9)
  return 0;

 VAR_13 = VAR_7 + VAR_10;

 if (VAR_8->flags & VAR_4) {
again:
  VAR_10 = VAR_13 - VAR_7;
  if ((long)VAR_10 <= 0)
   return -VAR_2;
  VAR_14 = FUNC_6(*VAR_11,
   FUNC_7(VAR_8, VAR_9, VAR_12,
            &VAR_16),
   VAR_10);
  if (VAR_14 > 0) {
   if (VAR_16)
    return -VAR_0;
   return 0;
  }
  if (VAR_14 == -VAR_1 && FUNC_1(VAR_6)) {
   FUNC_0(VAR_3);
   goto again;
  }
 } else {
  do {
   FUNC_5(VAR_5);
   VAR_15 = VAR_8->ops->status(VAR_8);
   if ((VAR_15 & VAR_9) == VAR_9)
    return 0;
  } while (FUNC_4(VAR_7, VAR_13));
 }
 return -VAR_2;
}
