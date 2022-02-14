
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int c; } ;
typedef TYPE_1__ git_hash_sha1_ctx ;
typedef size_t CC_LONG ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned char const*,size_t) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(git_hash_sha1_ctx *VAR_1, const void *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4 = VAR_2;

 FUNC_1(VAR_1);

 while (VAR_3 > 0) {
  CC_LONG VAR_5 = (VAR_3 > VAR_0) ? VAR_0 : (CC_LONG)VAR_3;

  FUNC_0(&VAR_1->c, VAR_4, VAR_5);

  VAR_4 += VAR_5;
  VAR_3 -= VAR_5;
 }

 return 0;
}
