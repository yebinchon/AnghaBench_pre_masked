
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ git_zstream_t ;
struct TYPE_4__ {scalar_t__ type; int z; int zerr; } ;
typedef TYPE_1__ git_zstream ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(git_zstream *VAR_2, git_zstream_t VAR_3)
{
 VAR_2->type = VAR_3;

 if (VAR_2->type == VAR_0)
  VAR_2->zerr = FUNC_1(&VAR_2->z);
 else
  VAR_2->zerr = FUNC_0(&VAR_2->z, VAR_1);
 return FUNC_2(VAR_2);
}
