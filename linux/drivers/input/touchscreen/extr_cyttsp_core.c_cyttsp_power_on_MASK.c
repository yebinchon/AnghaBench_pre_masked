
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bl_status; int bl_file; } ;
struct cyttsp {int state; TYPE_1__ bl_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct cyttsp*) ;
 int FUNC_5 (struct cyttsp*) ;
 int FUNC_6 (struct cyttsp*) ;
 int FUNC_7 (struct cyttsp*) ;
 int FUNC_8 (struct cyttsp*) ;
 int FUNC_9 (struct cyttsp*) ;
 int FUNC_10 (struct cyttsp*) ;

__attribute__((used)) static int FUNC_11(struct cyttsp *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_10(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
  return VAR_4;

 if (FUNC_0(VAR_3->bl_data.bl_status) &&
     FUNC_3(VAR_3->bl_data.bl_status)) {
  VAR_4 = FUNC_5(VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 if (FUNC_1(VAR_3->bl_data.bl_file) != VAR_1 ||
     FUNC_2(VAR_3->bl_data.bl_status)) {
  return -VAR_2;
 }

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_9(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_3->state = VAR_0;

 return 0;
}
