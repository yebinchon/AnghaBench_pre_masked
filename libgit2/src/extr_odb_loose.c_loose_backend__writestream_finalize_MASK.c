
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int fbuf; } ;
typedef TYPE_1__ loose_writestream ;
typedef int loose_backend ;
typedef int git_oid ;
struct TYPE_10__ {scalar_t__ backend; } ;
typedef TYPE_2__ git_odb_stream ;
struct TYPE_11__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int const*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_4(git_odb_stream *VAR_1, const git_oid *VAR_2)
{
 loose_writestream *VAR_3 = (loose_writestream *)VAR_1;
 loose_backend *VAR_4 = (loose_backend *)VAR_1->backend;
 git_buf VAR_5 = VAR_0;
 int VAR_6 = 0;

 if (FUNC_2(&VAR_5, VAR_4, VAR_2) < 0 ||
  FUNC_3(&VAR_5, VAR_4) < 0)
  VAR_6 = -1;
 else
  VAR_6 = FUNC_1(
   &VAR_3->fbuf, VAR_5.ptr);

 FUNC_0(&VAR_5);

 return VAR_6;
}
