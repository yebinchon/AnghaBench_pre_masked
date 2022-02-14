
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i1; int chg1; int i2; int chg2; int chg0; int i0; } ;
typedef TYPE_1__ xdmerge_t ;
typedef int xdfenv_t ;


 int VAR_0 ;
 int FUNC_0 (size_t*,size_t,size_t) ;
 int FUNC_1 (size_t*,size_t,int,int,int) ;
 int FUNC_2 (size_t*,size_t,int,int,int,int) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,char,int) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (size_t*,int *,int ,int ,int,int,char*) ;
 scalar_t__ FUNC_8 (size_t*,int *,int,int,int,int,char*) ;

__attribute__((used)) static int FUNC_9(size_t *VAR_2, xdfenv_t *VAR_3, const char *VAR_4,
         xdfenv_t *VAR_5, const char *VAR_6,
         const char *VAR_7,
         size_t VAR_8, int VAR_9, int VAR_10,
         xdmerge_t *VAR_11, char *VAR_12, int VAR_13)
{
 int VAR_14 = (VAR_4 ? (int)FUNC_6(VAR_4) + 1 : 0);
 int VAR_15 = (VAR_6 ? (int)FUNC_6(VAR_6) + 1 : 0);
 int VAR_16 = (VAR_7 ? (int)FUNC_6(VAR_7) + 1 : 0);
 int VAR_17 = FUNC_3(VAR_3, VAR_5, VAR_11);
 size_t VAR_18;

 *VAR_2 = 0;

 if (VAR_13 <= 0)
  VAR_13 = VAR_0;


 if (FUNC_8(&VAR_18, VAR_3, VAR_9, VAR_11->i1 - VAR_9, 0, 0,
         VAR_12 ? VAR_12 + VAR_8 : ((void*)0)) < 0)
  return -1;

 FUNC_0(&VAR_8, VAR_8, VAR_18);

 if (!VAR_12) {
  FUNC_2(&VAR_8, VAR_8, VAR_13, 1, VAR_17, VAR_14);
 } else {
  FUNC_5(VAR_12 + VAR_8, '<', VAR_13);
  VAR_8 += VAR_13;
  if (VAR_14) {
   VAR_12[VAR_8] = ' ';
   FUNC_4(VAR_12 + VAR_8 + 1, VAR_4, VAR_14 - 1);
   VAR_8 += VAR_14;
  }
  if (VAR_17)
   VAR_12[VAR_8++] = '\r';
  VAR_12[VAR_8++] = '\n';
 }


 if (FUNC_8(&VAR_18, VAR_3, VAR_11->i1, VAR_11->chg1, VAR_17, 1,
         VAR_12 ? VAR_12 + VAR_8 : ((void*)0)) < 0)
  return -1;

 FUNC_0(&VAR_8, VAR_8, VAR_18);

 if (VAR_10 == VAR_1) {

  if (!VAR_12) {
   FUNC_2(&VAR_8, VAR_8, VAR_13, 1, VAR_17, VAR_16);
  } else {
   FUNC_5(VAR_12 + VAR_8, '|', VAR_13);
   VAR_8 += VAR_13;
   if (VAR_16) {
    VAR_12[VAR_8] = ' ';
    FUNC_4(VAR_12 + VAR_8 + 1, VAR_7, VAR_16 - 1);
    VAR_8 += VAR_16;
   }
   if (VAR_17)
    VAR_12[VAR_8++] = '\r';
   VAR_12[VAR_8++] = '\n';
  }

  if (FUNC_7(&VAR_18, VAR_3, VAR_11->i0, VAR_11->chg0, VAR_17, 1,
          VAR_12 ? VAR_12 + VAR_8 : ((void*)0)) < 0)
   return -1;
  FUNC_0(&VAR_8, VAR_8, VAR_18);
 }

 if (!VAR_12) {
  FUNC_1(&VAR_8, VAR_8, VAR_13, 1, VAR_17);
 } else {
  FUNC_5(VAR_12 + VAR_8, '=', VAR_13);
  VAR_8 += VAR_13;
  if (VAR_17)
   VAR_12[VAR_8++] = '\r';
  VAR_12[VAR_8++] = '\n';
 }



 if (FUNC_8(&VAR_18, VAR_5, VAR_11->i2, VAR_11->chg2, VAR_17, 1,
         VAR_12 ? VAR_12 + VAR_8 : ((void*)0)) < 0)
  return -1;
 FUNC_0(&VAR_8, VAR_8, VAR_18);

 if (!VAR_12) {
  FUNC_2(&VAR_8, VAR_8, VAR_13, 1, VAR_17, VAR_15);
 } else {
  FUNC_5(VAR_12 + VAR_8, '>', VAR_13);
  VAR_8 += VAR_13;
  if (VAR_15) {
   VAR_12[VAR_8] = ' ';
   FUNC_4(VAR_12 + VAR_8 + 1, VAR_6, VAR_15 - 1);
   VAR_8 += VAR_15;
  }
  if (VAR_17)
   VAR_12[VAR_8++] = '\r';
  VAR_12[VAR_8++] = '\n';
 }

 *VAR_2 = VAR_8;
 return 0;
}
