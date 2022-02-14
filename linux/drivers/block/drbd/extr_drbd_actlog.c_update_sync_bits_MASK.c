
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {unsigned long rs_failed; int al_wait; int al_lock; } ;
typedef enum update_sync_bits_mode { ____Placeholder_update_sync_bits_mode } update_sync_bits_mode ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drbd_device*,unsigned long) ;
 unsigned long FUNC_2 (struct drbd_device*,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (struct drbd_device*,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (struct drbd_device*,unsigned long,unsigned long) ;
 unsigned long FUNC_5 (struct drbd_device*) ;
 int FUNC_6 (struct drbd_device*,int) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (struct drbd_device*,int ,unsigned long,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct drbd_device *VAR_3,
  unsigned long VAR_4, unsigned long VAR_5,
  enum update_sync_bits_mode VAR_6)
{





 unsigned long VAR_7;
 unsigned long VAR_8 = 0;
 unsigned int VAR_9 = 0;
 while (VAR_4 <= VAR_5) {



  unsigned long VAR_10 = FUNC_7(VAR_5, VAR_4 | VAR_0);
  unsigned long VAR_11;

  if (VAR_6 == VAR_1)





   VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_10);
  else if (VAR_6 == VAR_2)
   VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_10);
  else
   VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_10);

  if (VAR_11) {
   FUNC_8(&VAR_3->al_lock, VAR_7);
   VAR_9 += FUNC_10(VAR_3, FUNC_0(VAR_4), VAR_11, VAR_6);
   FUNC_9(&VAR_3->al_lock, VAR_7);
   VAR_8 += VAR_11;
  }
  VAR_4 = VAR_10 + 1;
 }
 if (VAR_8) {
  if (VAR_6 == VAR_2) {
   unsigned long VAR_12 = FUNC_5(VAR_3);
   bool VAR_13 = (VAR_12 <= VAR_3->rs_failed);
   FUNC_1(VAR_3, VAR_12);
   if (VAR_9 || VAR_13)
    FUNC_6(VAR_3, VAR_13);
  } else if (VAR_6 == VAR_1)
   VAR_3->rs_failed += VAR_8;
  FUNC_11(&VAR_3->al_wait);
 }
 return VAR_8;
}
