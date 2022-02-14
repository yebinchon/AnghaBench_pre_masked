
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct its_device {int its; } ;
struct TYPE_2__ {void* event_id; void* phys_id; struct its_device* dev; } ;
struct its_cmd_desc {TYPE_1__ its_mapti_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct its_cmd_desc*) ;

__attribute__((used)) static void FUNC_1(struct its_device *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct its_cmd_desc VAR_4;

 VAR_4.its_mapti_cmd.dev = VAR_1;
 VAR_4.its_mapti_cmd.phys_id = VAR_2;
 VAR_4.its_mapti_cmd.event_id = VAR_3;

 FUNC_0(VAR_1->its, VAR_0, &VAR_4);
}
