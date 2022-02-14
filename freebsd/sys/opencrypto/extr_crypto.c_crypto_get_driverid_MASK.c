
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptocap {int cc_flags; int cc_sessions; size_t cc_session_size; int * cc_dev; } ;
typedef int int32_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct cryptocap*,struct cryptocap*,int) ;
 scalar_t__ VAR_6 ;
 struct cryptocap* VAR_7 ;
 int VAR_8 ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (struct cryptocap*,int ) ;
 struct cryptocap* FUNC_5 (int,int ,int) ;
 int FUNC_6 (char*,...) ;

int32_t
FUNC_7(device_t VAR_9, size_t VAR_10, int VAR_11)
{
 struct cryptocap *VAR_12;
 int VAR_13;

 if ((VAR_11 & (VAR_1 | VAR_2)) == 0) {
  FUNC_6("%s: no flags specified when registering driver\n",
      FUNC_3(VAR_9));
  return -1;
 }

 FUNC_0();

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  if (VAR_7[VAR_13].cc_dev == ((void*)0) &&
      (VAR_7[VAR_13].cc_flags & VAR_0) == 0) {
   break;
  }
 }


 if (VAR_13 == VAR_8) {

  if (2 * VAR_8 <= VAR_8) {
   FUNC_1();
   FUNC_6("crypto: driver count wraparound!\n");
   return -1;
  }

  VAR_12 = FUNC_5(2 * VAR_8 *
      sizeof(struct cryptocap), VAR_3, VAR_4|VAR_5);
  if (VAR_12 == ((void*)0)) {
   FUNC_1();
   FUNC_6("crypto: no space to expand driver table!\n");
   return -1;
  }

  FUNC_2(VAR_7, VAR_12,
      VAR_8 * sizeof(struct cryptocap));

  VAR_8 *= 2;

  FUNC_4(VAR_7, VAR_3);
  VAR_7 = VAR_12;
 }


 VAR_7[VAR_13].cc_sessions = 1;
 VAR_7[VAR_13].cc_dev = VAR_9;
 VAR_7[VAR_13].cc_flags = VAR_11;
 VAR_7[VAR_13].cc_session_size = VAR_10;
 if (VAR_6)
  FUNC_6("crypto: assign %s driver id %u, flags 0x%x\n",
      FUNC_3(VAR_9), VAR_13, VAR_11);

 FUNC_1();

 return VAR_13;
}
