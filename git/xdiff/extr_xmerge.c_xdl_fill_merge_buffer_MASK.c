
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


 int FUNC_0 (TYPE_3__*,char const*,TYPE_3__*,char const*,char const*,int,int,int,TYPE_2__*,char*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int,int,int,int,char*) ;

__attribute__((used)) static int FUNC_3(xdfenv_t *VAR_0, const char *VAR_1,
     xdfenv_t *VAR_2, const char *VAR_3,
     const char *VAR_4,
     int VAR_5,
     xdmerge_t *VAR_6, char *VAR_7, int VAR_8,
     int VAR_9)
{
 int VAR_10, VAR_11;

 for (VAR_10 = VAR_11 = 0; VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_5 && !VAR_6->mode)
   VAR_6->mode = VAR_5;

  if (VAR_6->mode == 0)
   VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4,
        VAR_10, VAR_11, VAR_8, VAR_6, VAR_7,
        VAR_9);
  else if (VAR_6->mode & 3) {

   VAR_10 += FUNC_2(VAR_0, VAR_11, VAR_6->i1 - VAR_11, 0, 0,
           VAR_7 ? VAR_7 + VAR_10 : ((void*)0));

   if (VAR_6->mode & 1) {
    int VAR_12 = FUNC_1(VAR_0, VAR_2, VAR_6);

    VAR_10 += FUNC_2(VAR_0, VAR_6->i1, VAR_6->chg1, VAR_12, (VAR_6->mode & 2),
            VAR_7 ? VAR_7 + VAR_10 : ((void*)0));
   }

   if (VAR_6->mode & 2)
    VAR_10 += FUNC_2(VAR_2, VAR_6->i2, VAR_6->chg2, 0, 0,
            VAR_7 ? VAR_7 + VAR_10 : ((void*)0));
  } else
   continue;
  VAR_11 = VAR_6->i1 + VAR_6->chg1;
 }
 VAR_10 += FUNC_2(VAR_0, VAR_11, VAR_0->xdf2.nrec - VAR_11, 0, 0,
         VAR_7 ? VAR_7 + VAR_10 : ((void*)0));
 return VAR_10;
}
