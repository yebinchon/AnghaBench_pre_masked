
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int mode; int i1; int chg1; int i2; int chg2; struct TYPE_15__* next; } ;
typedef TYPE_2__ xdmerge_t ;
struct TYPE_14__ {int nrec; } ;
struct TYPE_16__ {TYPE_1__ xdf2; } ;
typedef TYPE_3__ xdfenv_t ;


 int FUNC_0 (size_t*,size_t,size_t) ;
 scalar_t__ FUNC_1 (size_t*,TYPE_3__*,char const*,TYPE_3__*,char const*,char const*,size_t,int,int,TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (size_t*,TYPE_3__*,int,int,int,int,char*) ;

__attribute__((used)) static int FUNC_4(size_t *VAR_0,
     xdfenv_t *VAR_1, const char *VAR_2,
     xdfenv_t *VAR_3, const char *VAR_4,
     const char *VAR_5,
     int VAR_6,
     xdmerge_t *VAR_7, char *VAR_8, int VAR_9,
     int VAR_10)
{
 size_t VAR_11, VAR_12;
 int VAR_13;

 *VAR_0 = 0;

 for (VAR_11 = VAR_13 = 0; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_6 && !VAR_7->mode)
   VAR_7->mode = VAR_6;

  if (VAR_7->mode == 0) {
   if (FUNC_1(&VAR_11, VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5,
        VAR_11, VAR_13, VAR_9, VAR_7, VAR_8,
        VAR_10) < 0)
    return -1;
  }
  else if (VAR_7->mode & 3) {

   if (FUNC_3(&VAR_12, VAR_1, VAR_13, VAR_7->i1 - VAR_13, 0, 0,
           VAR_8 ? VAR_8 + VAR_11 : ((void*)0)) < 0)
    return -1;
   FUNC_0(&VAR_11, VAR_11, VAR_12);


   if (VAR_7->mode & 1) {
    int VAR_14 = FUNC_2(VAR_1, VAR_3, VAR_7);

    if (FUNC_3(&VAR_12, VAR_1, VAR_7->i1, VAR_7->chg1, VAR_14, (VAR_7->mode & 2),
            VAR_8 ? VAR_8 + VAR_11 : ((void*)0)) < 0)
     return -1;
    FUNC_0(&VAR_11, VAR_11, VAR_12);
   }


   if (VAR_7->mode & 2) {
    if (FUNC_3(&VAR_12, VAR_3, VAR_7->i2, VAR_7->chg2, 0, 0,
            VAR_8 ? VAR_8 + VAR_11 : ((void*)0)) < 0)
     return -1;
    FUNC_0(&VAR_11, VAR_11, VAR_12);
   }
  } else
   continue;
  VAR_13 = VAR_7->i1 + VAR_7->chg1;
 }

 if (FUNC_3(&VAR_12, VAR_1, VAR_13, VAR_1->xdf2.nrec - VAR_13, 0, 0,
         VAR_8 ? VAR_8 + VAR_11 : ((void*)0)) < 0)
  return -1;
 FUNC_0(&VAR_11, VAR_11, VAR_12);

 *VAR_0 = VAR_11;
 return 0;
}
