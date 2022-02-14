
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct commit*) ;
 int FUNC_2 (struct commit*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(struct commit *VAR_4, void *VAR_5)
{
 FUNC_0(&VAR_4->object.oid, VAR_1, ((void*)0), 0);
 VAR_4->object.flags |= VAR_0;

 if (VAR_3)
  FUNC_1(VAR_4);

 if (VAR_2)
  FUNC_2(VAR_4);
}
