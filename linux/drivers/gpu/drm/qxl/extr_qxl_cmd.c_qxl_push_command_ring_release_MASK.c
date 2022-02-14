
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qxl_release {int release_offset; int release_bo; } ;
struct qxl_device {int command_ring; } ;
struct qxl_command {int data; int type; } ;


 int FUNC_0 (struct qxl_device*,int ,int ) ;
 int FUNC_1 (int ,struct qxl_command*,int) ;

int
FUNC_2(struct qxl_device *VAR_0, struct qxl_release *VAR_1,
         uint32_t VAR_2, bool VAR_3)
{
 struct qxl_command VAR_4;

 VAR_4.type = VAR_2;
 VAR_4.data = FUNC_0(VAR_0, VAR_1->release_bo, VAR_1->release_offset);

 return FUNC_1(VAR_0->command_ring, &VAR_4, VAR_3);
}
