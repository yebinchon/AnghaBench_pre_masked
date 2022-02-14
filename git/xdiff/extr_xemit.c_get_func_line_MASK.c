
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {long nrec; } ;
struct TYPE_4__ {TYPE_2__ xdf1; } ;
typedef TYPE_1__ xdfenv_t ;
typedef int xdemitconf_t ;
struct func_line {char* buf; long len; } ;
typedef int dummy ;


 long FUNC_0 (TYPE_2__*,int const*,long,char*,long) ;

__attribute__((used)) static long FUNC_1(xdfenv_t *VAR_0, xdemitconf_t const *VAR_1,
     struct func_line *VAR_2, long VAR_3, long VAR_4)
{
 long VAR_5, VAR_6, VAR_7 = (VAR_3 > VAR_4) ? -1 : 1;
 char *VAR_8, VAR_9[1];

 VAR_8 = VAR_2 ? VAR_2->buf : VAR_9;
 VAR_6 = VAR_2 ? sizeof(VAR_2->buf) : sizeof(VAR_9);

 for (VAR_5 = VAR_3; VAR_5 != VAR_4 && 0 <= VAR_5 && VAR_5 < VAR_0->xdf1.nrec; VAR_5 += VAR_7) {
  long VAR_10 = FUNC_0(&VAR_0->xdf1, VAR_1, VAR_5, VAR_8, VAR_6);
  if (VAR_10 >= 0) {
   if (VAR_2)
    VAR_2->len = VAR_10;
   return VAR_5;
  }
 }
 return -1;
}
