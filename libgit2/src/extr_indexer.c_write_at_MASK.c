
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t git_off_t ;
struct TYPE_10__ {scalar_t__ data; } ;
typedef TYPE_3__ git_map ;
struct TYPE_11__ {TYPE_2__* pack; } ;
typedef TYPE_4__ git_indexer ;
typedef int git_file ;
struct TYPE_8__ {int fd; } ;
struct TYPE_9__ {TYPE_1__ mwf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (size_t*) ;
 int FUNC_2 (unsigned char*,void const*,size_t) ;
 int FUNC_3 (TYPE_3__*,size_t,int ,int ,int ,size_t) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(git_indexer *VAR_2, const void *VAR_3, git_off_t VAR_4, size_t VAR_5)
{
 git_file VAR_6 = VAR_2->pack->mwf.fd;
 size_t VAR_7;
 size_t VAR_8;
 git_off_t VAR_9;
 unsigned char *VAR_10;
 git_map VAR_11;
 int VAR_12;

 FUNC_0(VAR_3 && VAR_5);

 if ((VAR_12 = FUNC_1(&VAR_7)) < 0)
  return VAR_12;


 VAR_8 = VAR_4 % VAR_7;
 VAR_9 = VAR_4 - VAR_8;

 if ((VAR_12 = FUNC_3(&VAR_11, VAR_8 + VAR_5, VAR_1, VAR_0, VAR_6, VAR_9)) < 0)
  return VAR_12;

 VAR_10 = (unsigned char *)VAR_11.data;
 FUNC_2(VAR_10 + VAR_8, VAR_3, VAR_5);
 FUNC_4(&VAR_11);

 return 0;
}
