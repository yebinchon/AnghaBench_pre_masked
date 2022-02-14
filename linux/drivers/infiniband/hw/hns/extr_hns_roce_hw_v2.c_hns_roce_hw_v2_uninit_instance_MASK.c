
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ instance_state; } ;
struct hnae3_handle {TYPE_1__ rinfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hnae3_handle*,int) ;

__attribute__((used)) static void FUNC_1(struct hnae3_handle *VAR_3,
        bool VAR_4)
{
 if (VAR_3->rinfo.instance_state != VAR_0)
  return;

 VAR_3->rinfo.instance_state = VAR_2;

 FUNC_0(VAR_3, VAR_4);

 VAR_3->rinfo.instance_state = VAR_1;
}
