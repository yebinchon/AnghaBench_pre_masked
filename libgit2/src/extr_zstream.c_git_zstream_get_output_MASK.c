
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ in_len; scalar_t__ zerr; scalar_t__ flush; } ;
typedef TYPE_1__ git_zstream ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (void*,size_t*,TYPE_1__*) ;

int FUNC_3(void *VAR_3, size_t *VAR_4, git_zstream *VAR_5)
{
 size_t VAR_6 = *VAR_4;

 if (VAR_5->in_len && VAR_5->zerr == VAR_2) {
  FUNC_1(VAR_0, "zlib input had trailing garbage");
  return -1;
 }

 while (VAR_6 > 0 && VAR_5->zerr != VAR_2) {
  size_t VAR_7 = VAR_6;

  if (FUNC_2(VAR_3, &VAR_7, VAR_5) < 0)
   return -1;

  VAR_6 -= VAR_7;
  VAR_3 = ((char *)VAR_3) + VAR_7;
 }


 FUNC_0(VAR_5->in_len > 0 || VAR_5->flush == VAR_1);


 *VAR_4 = *VAR_4 - VAR_6;

 return 0;
}
