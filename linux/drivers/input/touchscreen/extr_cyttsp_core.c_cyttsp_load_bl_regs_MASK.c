
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bl_status; } ;
struct cyttsp {TYPE_1__ bl_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (struct cyttsp*,int ,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct cyttsp *VAR_1)
{
 FUNC_0(&VAR_1->bl_data, 0, sizeof(VAR_1->bl_data));
 VAR_1->bl_data.bl_status = 0x10;

 return FUNC_1(VAR_1, VAR_0,
        sizeof(VAR_1->bl_data), &VAR_1->bl_data);
}
