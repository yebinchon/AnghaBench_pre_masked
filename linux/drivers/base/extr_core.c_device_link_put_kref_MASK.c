
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_link {int flags; int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct device_link *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  FUNC_1(&VAR_2->kref, VAR_1);
 else
  FUNC_0(1, "Unable to drop a managed device link reference\n");
}
