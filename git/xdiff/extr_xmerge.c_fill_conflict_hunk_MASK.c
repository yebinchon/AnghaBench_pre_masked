
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i1; int chg1; int i2; int chg2; int chg0; int i0; } ;
typedef TYPE_1__ xdmerge_t ;
typedef int xdfenv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int,int,char*) ;
 scalar_t__ FUNC_5 (int *,int,int,int,int,char*) ;

__attribute__((used)) static int FUNC_6(xdfenv_t *VAR_2, const char *VAR_3,
         xdfenv_t *VAR_4, const char *VAR_5,
         const char *VAR_6,
         int VAR_7, int VAR_8, int VAR_9,
         xdmerge_t *VAR_10, char *VAR_11, int VAR_12)
{
 int VAR_13 = (VAR_3 ? FUNC_3(VAR_3) + 1 : 0);
 int VAR_14 = (VAR_5 ? FUNC_3(VAR_5) + 1 : 0);
 int VAR_15 = (VAR_6 ? FUNC_3(VAR_6) + 1 : 0);
 int VAR_16 = FUNC_0(VAR_2, VAR_4, VAR_10);

 if (VAR_12 <= 0)
  VAR_12 = VAR_0;


 VAR_7 += FUNC_5(VAR_2, VAR_8, VAR_10->i1 - VAR_8, 0, 0,
         VAR_11 ? VAR_11 + VAR_7 : ((void*)0));

 if (!VAR_11) {
  VAR_7 += VAR_12 + 1 + VAR_16 + VAR_13;
 } else {
  FUNC_2(VAR_11 + VAR_7, '<', VAR_12);
  VAR_7 += VAR_12;
  if (VAR_13) {
   VAR_11[VAR_7] = ' ';
   FUNC_1(VAR_11 + VAR_7 + 1, VAR_3, VAR_13 - 1);
   VAR_7 += VAR_13;
  }
  if (VAR_16)
   VAR_11[VAR_7++] = '\r';
  VAR_11[VAR_7++] = '\n';
 }


 VAR_7 += FUNC_5(VAR_2, VAR_10->i1, VAR_10->chg1, VAR_16, 1,
         VAR_11 ? VAR_11 + VAR_7 : ((void*)0));

 if (VAR_9 == VAR_1) {

  if (!VAR_11) {
   VAR_7 += VAR_12 + 1 + VAR_16 + VAR_15;
  } else {
   FUNC_2(VAR_11 + VAR_7, '|', VAR_12);
   VAR_7 += VAR_12;
   if (VAR_15) {
    VAR_11[VAR_7] = ' ';
    FUNC_1(VAR_11 + VAR_7 + 1, VAR_6, VAR_15 - 1);
    VAR_7 += VAR_15;
   }
   if (VAR_16)
    VAR_11[VAR_7++] = '\r';
   VAR_11[VAR_7++] = '\n';
  }
  VAR_7 += FUNC_4(VAR_2, VAR_10->i0, VAR_10->chg0, VAR_16, 1,
          VAR_11 ? VAR_11 + VAR_7 : ((void*)0));
 }

 if (!VAR_11) {
  VAR_7 += VAR_12 + 1 + VAR_16;
 } else {
  FUNC_2(VAR_11 + VAR_7, '=', VAR_12);
  VAR_7 += VAR_12;
  if (VAR_16)
   VAR_11[VAR_7++] = '\r';
  VAR_11[VAR_7++] = '\n';
 }


 VAR_7 += FUNC_5(VAR_4, VAR_10->i2, VAR_10->chg2, VAR_16, 1,
         VAR_11 ? VAR_11 + VAR_7 : ((void*)0));
 if (!VAR_11) {
  VAR_7 += VAR_12 + 1 + VAR_16 + VAR_14;
 } else {
  FUNC_2(VAR_11 + VAR_7, '>', VAR_12);
  VAR_7 += VAR_12;
  if (VAR_14) {
   VAR_11[VAR_7] = ' ';
   FUNC_1(VAR_11 + VAR_7 + 1, VAR_5, VAR_14 - 1);
   VAR_7 += VAR_14;
  }
  if (VAR_16)
   VAR_11[VAR_7++] = '\r';
  VAR_11[VAR_7++] = '\n';
 }
 return VAR_7;
}
