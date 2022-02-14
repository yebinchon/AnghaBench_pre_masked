
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apply_state {TYPE_1__* repo; scalar_t__ index_file; } ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct apply_state *VAR_0)
{
 if (VAR_0->index_file)
  return FUNC_1(VAR_0->repo->index, VAR_0->index_file,
           FUNC_0());
 else
  return FUNC_2(VAR_0->repo);
}
