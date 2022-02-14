
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* outf ) (int ,TYPE_2__*,int) ;int priv; } ;
typedef TYPE_1__ xdemitcb_t ;
struct TYPE_6__ {char* ptr; int size; } ;
typedef TYPE_2__ mmbuffer_t ;
typedef int buf ;


 int FUNC_0 (char*,char const*,long) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (char*,long) ;

int FUNC_3(long VAR_0, long VAR_1, long VAR_2, long VAR_3,
        const char *VAR_4, long VAR_5, xdemitcb_t *VAR_6) {
 int VAR_7 = 0;
 mmbuffer_t VAR_8;
 char VAR_9[128];

 FUNC_0(VAR_9, "@@ -", 4);
 VAR_7 += 4;

 VAR_7 += FUNC_2(VAR_9 + VAR_7, VAR_1 ? VAR_0: VAR_0 - 1);

 if (VAR_1 != 1) {
  FUNC_0(VAR_9 + VAR_7, ",", 1);
  VAR_7 += 1;

  VAR_7 += FUNC_2(VAR_9 + VAR_7, VAR_1);
 }

 FUNC_0(VAR_9 + VAR_7, " +", 2);
 VAR_7 += 2;

 VAR_7 += FUNC_2(VAR_9 + VAR_7, VAR_3 ? VAR_2: VAR_2 - 1);

 if (VAR_3 != 1) {
  FUNC_0(VAR_9 + VAR_7, ",", 1);
  VAR_7 += 1;

  VAR_7 += FUNC_2(VAR_9 + VAR_7, VAR_3);
 }

 FUNC_0(VAR_9 + VAR_7, " @@", 3);
 VAR_7 += 3;
 if (VAR_4 && VAR_5) {
  VAR_9[VAR_7++] = ' ';
  if (VAR_5 > (long)(sizeof(VAR_9) - VAR_7 - 1))
   VAR_5 = sizeof(VAR_9) - VAR_7 - 1;
  FUNC_0(VAR_9 + VAR_7, VAR_4, VAR_5);
  VAR_7 += VAR_5;
 }
 VAR_9[VAR_7++] = '\n';

 VAR_8.ptr = VAR_9;
 VAR_8.size = VAR_7;
 if (VAR_6->outf(VAR_6->priv, &VAR_8, 1) < 0)
  return -1;

 return 0;
}
