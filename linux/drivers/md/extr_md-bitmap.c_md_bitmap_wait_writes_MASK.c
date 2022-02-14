
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ file; } ;
struct bitmap {int mddev; int pending_writes; int write_wait; TYPE_1__ storage; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct bitmap *VAR_0)
{
 if (VAR_0->storage.file)
  FUNC_2(VAR_0->write_wait,
      FUNC_0(&VAR_0->pending_writes)==0);
 else







  FUNC_1(VAR_0->mddev);
}
