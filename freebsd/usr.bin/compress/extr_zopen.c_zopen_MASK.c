
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_zstate {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct s_zstate* FUNC_0 (int,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int * FUNC_1 (char const*,char const*) ;
 int * VAR_10 ;
 int FUNC_2 (struct s_zstate*) ;
 scalar_t__ VAR_11 ;
 int * FUNC_3 (struct s_zstate*,int *,int *,int *,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 long VAR_14 ;
 long VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 char VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;

FILE *
FUNC_4(const char *VAR_25, const char *VAR_26, int VAR_27)
{
 struct s_zstate *VAR_28;

 if ((VAR_26[0] != 'r' && VAR_26[0] != 'w') || VAR_26[1] != '\0' ||
     VAR_27 < 0 || VAR_27 > VAR_0) {
  VAR_9 = VAR_3;
  return (((void*)0));
 }

 if ((VAR_28 = FUNC_0(1, sizeof(struct s_zstate))) == ((void*)0))
  return (((void*)0));

 VAR_14 = VAR_27 ? VAR_27 : VAR_0;
 VAR_15 = 1L << VAR_14;
 VAR_12 = VAR_4;
 VAR_11 = 0;
 VAR_6 = VAR_1;
 VAR_8 = 0;
 VAR_17 = 0;
 VAR_7 = VAR_2;
 VAR_13 = 1;
 VAR_16 = 0;
 VAR_20 = VAR_5;
 VAR_18 = 0;
 VAR_19 = 0;





 if ((VAR_10 = FUNC_1(VAR_25, VAR_26)) == ((void*)0)) {
  FUNC_2(VAR_28);
  return (((void*)0));
 }
 switch (*VAR_26) {
 case 'r':
  VAR_22 = 'r';
  return (FUNC_3(VAR_28, VAR_23, ((void*)0), ((void*)0), VAR_21));
 case 'w':
  VAR_22 = 'w';
  return (FUNC_3(VAR_28, ((void*)0), VAR_24, ((void*)0), VAR_21));
 }

 return (((void*)0));
}
