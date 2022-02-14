
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct firedtv {int device; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct firedtv*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct firedtv*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__*,scalar_t__) ;

void FUNC_7(struct firedtv *VAR_1, int VAR_2, int VAR_3)
{
 __be32 VAR_4, VAR_5[2];
 u64 VAR_6 = VAR_0 + (VAR_2 << 2);
 int VAR_7 = 0;

 if (FUNC_1(VAR_1, VAR_6, VAR_5) < 0)
  return;

repeat:
 if (!FUNC_4(*VAR_5) || !FUNC_5(*VAR_5) ||
     FUNC_3(*VAR_5) != VAR_3) {
  FUNC_2(VAR_1->device, "CMP: no connection to break\n");
  return;
 }

 VAR_4 = *VAR_5;
 FUNC_6(VAR_5, FUNC_5(*VAR_5) - 1);

 VAR_5[1] = *VAR_5;
 VAR_5[0] = VAR_4;

 if (FUNC_0(VAR_1, VAR_6, VAR_5) < 0)
  return;

 if (VAR_4 != *VAR_5) {







  if (++VAR_7 < 6)
   goto repeat;
 }
}
