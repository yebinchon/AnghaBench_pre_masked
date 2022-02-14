
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* nextfu; struct TYPE_5__* nextfs; } ;
struct TYPE_4__ {int reps; int fmt; void* bcnt; int flags; struct TYPE_4__* nextfu; } ;
typedef TYPE_1__ FU ;
typedef TYPE_2__ FS ;


 int VAR_0 ;
 void* FUNC_0 (unsigned char const*) ;
 int FUNC_1 (char const*) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_5 (unsigned char const) ;
 scalar_t__ FUNC_6 (unsigned char const) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,unsigned char const*,int) ;

void
FUNC_9(const char *VAR_2)
{
 unsigned const char *VAR_3, *VAR_4;
 static FS **VAR_5;
 FS *VAR_6;
 FU *VAR_7, **VAR_8;


 if ((VAR_6 = FUNC_2(1, sizeof(FS))) == ((void*)0))
  FUNC_3(1, ((void*)0));
 if (!VAR_1)
  VAR_1 = VAR_6;
 else
  *VAR_5 = VAR_6;
 VAR_5 = &VAR_6->nextfs;
 VAR_8 = &VAR_6->nextfu;


 for (VAR_3 = VAR_2;;) {

  for (; FUNC_6(*VAR_3); ++VAR_3);
  if (!*VAR_3)
   break;


  if ((VAR_7 = FUNC_2(1, sizeof(FU))) == ((void*)0))
   FUNC_3(1, ((void*)0));
  *VAR_8 = VAR_7;
  VAR_8 = &VAR_7->nextfu;
  VAR_7->reps = 1;


  if (FUNC_5(*VAR_3)) {
   for (VAR_4 = VAR_3; FUNC_5(*VAR_3); ++VAR_3);
   if (!FUNC_6(*VAR_3) && *VAR_3 != '/')
    FUNC_1(VAR_2);

   VAR_7->reps = FUNC_0(VAR_4);
   VAR_7->flags = VAR_0;

   for (++VAR_3; FUNC_6(*VAR_3); ++VAR_3);
  }


  if (*VAR_3 == '/')
   while (FUNC_6(*++VAR_3));


  if (FUNC_5(*VAR_3)) {
   for (VAR_4 = VAR_3; FUNC_5(*VAR_3); ++VAR_3);
   if (!FUNC_6(*VAR_3))
    FUNC_1(VAR_2);
   VAR_7->bcnt = FUNC_0(VAR_4);

   for (++VAR_3; FUNC_6(*VAR_3); ++VAR_3);
  }


  if (*VAR_3 != '"')
   FUNC_1(VAR_2);
  for (VAR_4 = ++VAR_3; *VAR_3 != '"';)
   if (*VAR_3++ == 0)
    FUNC_1(VAR_2);
  if (!(VAR_7->fmt = FUNC_7(VAR_3 - VAR_4 + 1)))
   FUNC_3(1, ((void*)0));
  (void) FUNC_8(VAR_7->fmt, VAR_4, VAR_3 - VAR_4 + 1);
  FUNC_4(VAR_7->fmt);
  VAR_3++;
 }
}
