
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t git_off_t ;
struct TYPE_8__ {TYPE_2__* pack; } ;
typedef TYPE_3__ git_indexer ;
struct TYPE_6__ {size_t size; int fd; } ;
struct TYPE_7__ {TYPE_1__ mwf; int pack_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t*) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int,size_t,int ) ;
 scalar_t__ FUNC_3 (int,void const*,int) ;
 int FUNC_4 (TYPE_3__*,void const*,size_t,size_t) ;

__attribute__((used)) static int FUNC_5(git_indexer *VAR_2, const void *VAR_3, size_t VAR_4)
{
 git_off_t VAR_5;
 size_t VAR_6;
 size_t VAR_7;
 git_off_t VAR_8;
 git_off_t VAR_9 = VAR_2->pack->mwf.size;
 int VAR_10 = VAR_2->pack->mwf.fd;
 int VAR_11;

 if (!VAR_4)
  return 0;

 if ((VAR_11 = FUNC_0(&VAR_6)) < 0)
  return VAR_11;





 VAR_5 = VAR_9 + VAR_4;
 VAR_7 = VAR_5 % VAR_6;
 VAR_8 = VAR_5 - VAR_7;

 if (FUNC_2(VAR_10, VAR_8 + VAR_6 - 1, VAR_1) < 0 ||
     FUNC_3(VAR_2->pack->mwf.fd, VAR_3, 1) < 0) {
  FUNC_1(VAR_0, "cannot extend packfile '%s'", VAR_2->pack->pack_name);
  return -1;
 }

 return FUNC_4(VAR_2, VAR_3, VAR_2->pack->mwf.size, VAR_4);
}
