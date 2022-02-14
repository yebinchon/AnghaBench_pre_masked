
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_link {int kref; int status; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct device_link *VAR_3)
{
 VAR_3->flags &= ~VAR_0;
 FUNC_0(VAR_3->status, VAR_1);
 FUNC_1(&VAR_3->kref, VAR_2);
}
