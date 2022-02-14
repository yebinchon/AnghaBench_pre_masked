
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char* u_quad_t ;
typedef char* u_int64_t ;
typedef char* u_int32_t ;
typedef char* u_int16_t ;
typedef char u_char ;
typedef int u8 ;
typedef int u4 ;
typedef int u2 ;
typedef int s8 ;
typedef int s4 ;
typedef int s2 ;
typedef char* quad_t ;
typedef int ldbl ;
typedef char* int8_t ;
typedef char* int32_t ;
typedef char* int16_t ;
typedef int f8 ;
typedef int f4 ;
struct TYPE_5__ {int flags; char* fmt; int bcnt; } ;
typedef TYPE_1__ PR ;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int VAR_2 ;
 int FUNC_3 (char) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(PR *VAR_3, u_char *VAR_4)
{
 long double VAR_5;
    double VAR_6;
     float VAR_7;
   int16_t VAR_8;
    int8_t VAR_9;
   int32_t VAR_10;
 u_int16_t VAR_11;
 u_int32_t VAR_12;
 u_int64_t VAR_13;

 switch(VAR_3->flags) {
 case 138:
  (void)FUNC_4(VAR_3->fmt, (quad_t)VAR_0);
  break;
 case 137:
  (void)FUNC_4(VAR_3->fmt, "");
  break;
 case 136:
  FUNC_1(VAR_3, VAR_4, VAR_2 ? VAR_2 - VAR_0 :
      VAR_1 - VAR_0 % VAR_1);
  break;
 case 135:
  (void)FUNC_4(VAR_3->fmt, *VAR_4);
  break;
 case 134:
  switch(VAR_3->bcnt) {
  case 4:
   FUNC_0(VAR_4, &VAR_7, sizeof(VAR_7));
   (void)FUNC_4(VAR_3->fmt, VAR_7);
   break;
  case 8:
   FUNC_0(VAR_4, &VAR_6, sizeof(VAR_6));
   (void)FUNC_4(VAR_3->fmt, VAR_6);
   break;
  default:
   if (VAR_3->bcnt == sizeof(long double)) {
    FUNC_0(VAR_4, &VAR_5, sizeof(VAR_5));
    (void)FUNC_4(VAR_3->fmt, VAR_5);
   }
   break;
  }
  break;
 case 133:
  switch(VAR_3->bcnt) {
  case 1:
   (void)FUNC_4(VAR_3->fmt, (quad_t)(signed char)*VAR_4);
   break;
  case 2:
   FUNC_0(VAR_4, &VAR_8, sizeof(VAR_8));
   (void)FUNC_4(VAR_3->fmt, (quad_t)VAR_8);
   break;
  case 4:
   FUNC_0(VAR_4, &VAR_10, sizeof(VAR_10));
   (void)FUNC_4(VAR_3->fmt, (quad_t)VAR_10);
   break;
  case 8:
   FUNC_0(VAR_4, &VAR_9, sizeof(VAR_9));
   (void)FUNC_4(VAR_3->fmt, VAR_9);
   break;
  }
  break;
 case 132:
  (void)FUNC_4(VAR_3->fmt, FUNC_3(*VAR_4) ? *VAR_4 : '.');
  break;
 case 131:
  (void)FUNC_4(VAR_3->fmt, (char *)VAR_4);
  break;
 case 130:
  (void)FUNC_4("%s", VAR_3->fmt);
  break;
 case 129:
  FUNC_2(VAR_3, VAR_4);
  break;
 case 128:
  switch(VAR_3->bcnt) {
  case 1:
   (void)FUNC_4(VAR_3->fmt, (u_quad_t)*VAR_4);
   break;
  case 2:
   FUNC_0(VAR_4, &VAR_11, sizeof(VAR_11));
   (void)FUNC_4(VAR_3->fmt, (u_quad_t)VAR_11);
   break;
  case 4:
   FUNC_0(VAR_4, &VAR_12, sizeof(VAR_12));
   (void)FUNC_4(VAR_3->fmt, (u_quad_t)VAR_12);
   break;
  case 8:
   FUNC_0(VAR_4, &VAR_13, sizeof(VAR_13));
   (void)FUNC_4(VAR_3->fmt, VAR_13);
   break;
  }
  break;
 }
}
