
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,size_t) ;
 int FUNC_7 (char const*,size_t) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (char const*,size_t) ;
 int FUNC_12 (char const*,size_t) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_17(const uint8_t *VAR_5, size_t VAR_6)
{


 if (VAR_6 >= 3 && VAR_5[0] >= '0' && VAR_5[0] <= '9' &&
     VAR_5[0] >= '0' && VAR_5[0] <= '9' && VAR_5[2] == ':') {
  FUNC_13();
  return;
 }

 switch (*VAR_5) {
 case 'c':
  if (VAR_6 != 1) {
   FUNC_14(VAR_0);
   break;
  }


  FUNC_9();
  break;
 case 'D':
  FUNC_15();


  break;
 case 'g': {
  FUNC_8();
  break;
 }
 case 'H': {
  int VAR_7;

  if (VAR_5[1] != 'g' && VAR_5[1] != 'c') {
   FUNC_14(VAR_0);
   break;
  }
  VAR_7 = FUNC_12(VAR_5 + 2, VAR_6 - 2);
  if (VAR_7 == -2) {
   FUNC_14(VAR_0);
   break;
  }

  if (FUNC_0(&VAR_4)) {
   FUNC_14(VAR_0);
   break;
  }
  if (VAR_7 == -1 || VAR_7 == 0)
   VAR_3 = FUNC_1(&VAR_4) - 1;
  else if (FUNC_2(VAR_7 - 1, &VAR_4))
   VAR_3 = VAR_7 - 1;
  else {
   FUNC_14(VAR_0);
   break;
  }
  FUNC_15();
  break;
 }
 case 'm':
  FUNC_7(VAR_5, VAR_6);
  break;
 case 'M':
  FUNC_11(VAR_5, VAR_6);
  break;
 case 'T': {
  int VAR_8;

  VAR_8 = FUNC_12(VAR_5 + 1, VAR_6 - 1);
  if (VAR_8 <= 0 || !FUNC_2(VAR_8 - 1, &VAR_4)) {
   FUNC_14(VAR_0);
   return;
  }
  FUNC_15();
  break;
 }
 case 'q':
  FUNC_6(VAR_5, VAR_6);
  break;
 case 's':
  if (VAR_6 != 1) {
   FUNC_14(VAR_0);
   break;
  }


  if (!FUNC_10(VAR_3)) {
   FUNC_14(VAR_1);
   break;
  }
  break;
 case '?':


  FUNC_16();
  FUNC_4('S');
  FUNC_3(VAR_2);
  FUNC_5();
  break;
 case 'G':
 case 'v':


 case 'p':
 case 'P':
 case 'Q':
 case 't':
 case 'X':
 case 'z':
 case 'Z':
 default:
  FUNC_13();
 }
}
