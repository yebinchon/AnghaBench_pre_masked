
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct its_device {int its; } ;
struct TYPE_2__ {int event_id; struct its_device* dev; } ;
struct its_cmd_desc {TYPE_1__ its_inv_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct its_cmd_desc*) ;

__attribute__((used)) static void FUNC_1(struct its_device *VAR_1, u32 VAR_2)
{
 struct its_cmd_desc VAR_3;

 VAR_3.its_inv_cmd.dev = VAR_1;
 VAR_3.its_inv_cmd.event_id = VAR_2;

 FUNC_0(VAR_1->its, VAR_0, &VAR_3);
}
