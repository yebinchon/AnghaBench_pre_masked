
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int gitdir; scalar_t__ commondir; } ;
typedef TYPE_1__ git_repository ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(unsigned *VAR_1, const git_repository *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 int VAR_4;


 if (VAR_2->commondir && VAR_2->gitdir
     && !FUNC_3(VAR_2->commondir, VAR_2->gitdir)) {
  *VAR_1 = 0;
  return 0;
 }

 if ((VAR_4 = FUNC_1(&VAR_3, VAR_2->gitdir, "gitdir")) < 0)
  return -1;



 *VAR_1 = !!FUNC_2(VAR_3.ptr);

 FUNC_0(&VAR_3);
 return VAR_4;
}
