
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double u_int8_t ;
typedef double u_int64_t ;
typedef double u_int32_t ;
typedef double u_int16_t ;
typedef int intmax_t ;
typedef double int8_t ;
typedef double int64_t ;
typedef double int32_t ;
typedef double int16_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*,int,...) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double* VAR_3 ;

void
FUNC_5(FILE *VAR_4)
{
    int VAR_5;
    intmax_t VAR_6;

    if (VAR_3 == 0) {
 VAR_3 = (double *) FUNC_0(VAR_2, sizeof(double));
 if (VAR_3 == ((void*)0))
     FUNC_2(0, "no room for %d sample pc's", VAR_2);
    }
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
 FUNC_4(&VAR_6, VAR_0, 1, VAR_4);
 if (FUNC_3(VAR_4))
  break;
 switch ( VAR_1 ) {
 case -8:
     VAR_3[VAR_5] += *(int8_t *)&VAR_6;
     break;
 case 8:
     VAR_3[VAR_5] += *(u_int8_t *)&VAR_6;
     break;
 case -16:
     VAR_3[VAR_5] += *(int16_t *)&VAR_6;
     break;
 case 16:
     VAR_3[VAR_5] += *(u_int16_t *)&VAR_6;
     break;
 case -32:
     VAR_3[VAR_5] += *(int32_t *)&VAR_6;
     break;
 case 32:
     VAR_3[VAR_5] += *(u_int32_t *)&VAR_6;
     break;
 case -64:
     VAR_3[VAR_5] += *(int64_t *)&VAR_6;
     break;
 case 64:
     VAR_3[VAR_5] += *(u_int64_t *)&VAR_6;
     break;
 default:
     FUNC_1(1, "unsupported histogram counter type %d", VAR_1);
 }
    }
    if (VAR_5 != VAR_2)
 FUNC_2(1, "unexpected EOF after reading %d/%d samples", --VAR_5 , VAR_2 );
}
