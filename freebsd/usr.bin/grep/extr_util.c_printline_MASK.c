
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t boff; size_t dat; size_t len; } ;
struct parsec {size_t matchidx; scalar_t__ printed; TYPE_2__ ln; TYPE_1__* matches; } ;
struct TYPE_4__ {size_t rm_so; size_t rm_eo; } ;
typedef TYPE_1__ regmatch_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (size_t,size_t,int,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (char) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct parsec *VAR_4, int VAR_5)
{
 size_t VAR_6 = 0;
 size_t VAR_7, VAR_8;
 regmatch_t VAR_9;


 if (VAR_2 && VAR_1)
  return;

 VAR_8 = VAR_4->matchidx;


 if ((VAR_2 || VAR_0) && VAR_8 > 0) {

  if (!VAR_2 && VAR_4->printed == 0)
   FUNC_3(&VAR_4->ln, VAR_5);
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   VAR_9 = VAR_4->matches[VAR_7];

   if (VAR_9.rm_so == VAR_9.rm_eo)
    continue;




   if (VAR_2) {
    VAR_4->ln.boff = VAR_9.rm_so;
    FUNC_3(&VAR_4->ln, VAR_5);
   } else
    FUNC_1(VAR_4->ln.dat + VAR_6, VAR_9.rm_so - VAR_6, 1,
        VAR_3);
   if (VAR_0)
    FUNC_0(VAR_3, "\33[%sm\33[K", VAR_0);
   FUNC_1(VAR_4->ln.dat + VAR_9.rm_so,
       VAR_9.rm_eo - VAR_9.rm_so, 1, VAR_3);
   if (VAR_0)
    FUNC_0(VAR_3, "\33[m\33[K");
   VAR_6 = VAR_9.rm_eo;
   if (VAR_2)
    FUNC_4('\n');
  }
  if (!VAR_2) {
   if (VAR_4->ln.len - VAR_6 > 0)
    FUNC_1(VAR_4->ln.dat + VAR_6, VAR_4->ln.len - VAR_6, 1,
        VAR_3);
   FUNC_4('\n');
  }
 } else
  FUNC_2(&VAR_4->ln, VAR_5);
 VAR_4->printed++;
}
