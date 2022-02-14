
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ size; int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_8__ {int init_sysdir; TYPE_1__ sysdir; } ;
typedef TYPE_2__ git_attr_session ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(
 git_buf *VAR_2,
 git_attr_session *VAR_3)
{
 int VAR_4;

 if (!VAR_3) {
  VAR_4 = FUNC_2(VAR_2, VAR_0);

  if (VAR_4 == VAR_1)
   FUNC_1();

  return VAR_4;
 }

 if (!VAR_3->init_sysdir) {
  VAR_4 = FUNC_2(&VAR_3->sysdir, VAR_0);

  if (VAR_4 == VAR_1)
   FUNC_1();
  else if (VAR_4)
   return VAR_4;

  VAR_3->init_sysdir = 1;
 }

 if (VAR_3->sysdir.size == 0)
  return VAR_1;





 FUNC_0(
  VAR_2, VAR_3->sysdir.ptr, VAR_3->sysdir.size);
 return 0;
}
