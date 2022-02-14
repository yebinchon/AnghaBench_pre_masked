
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
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long VAR_8 ;
 int FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (struct tpm_chip*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int ,int ) ;
 long FUNC_6 (int ,int ,unsigned long) ;
 int FUNC_7 (struct tpm_chip*,int,int,int*) ;

__attribute__((used)) static int FUNC_8(struct tpm_chip *VAR_9, u8 VAR_10,
  unsigned long VAR_11, wait_queue_head_t *VAR_12,
  bool VAR_13)
{
 unsigned long VAR_14;
 long VAR_15;
 u8 VAR_16;
 bool VAR_17 = 0;


 VAR_16 = VAR_9->ops->status(VAR_9);
 if ((VAR_16 & VAR_10) == VAR_10)
  return 0;

 VAR_14 = VAR_8 + VAR_11;

 if (VAR_9->flags & VAR_4) {
again:
  VAR_11 = VAR_14 - VAR_8;
  if ((long)VAR_11 <= 0)
   return -VAR_2;
  VAR_15 = FUNC_6(*VAR_12,
   FUNC_7(VAR_9, VAR_10, VAR_13,
            &VAR_17),
   VAR_11);
  if (VAR_15 > 0) {
   if (VAR_17)
    return -VAR_0;
   return 0;
  }
  if (VAR_15 == -VAR_1 && FUNC_1(VAR_7)) {
   FUNC_0(VAR_3);
   goto again;
  }
 } else {
  do {
   FUNC_5(VAR_6,
         VAR_5);
   VAR_16 = VAR_9->ops->status(VAR_9);
   if ((VAR_16 & VAR_10) == VAR_10)
    return 0;
  } while (FUNC_4(VAR_8, VAR_14));
 }
 return -VAR_2;
}
