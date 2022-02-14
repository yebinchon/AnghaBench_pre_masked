
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i3c_device_info {scalar_t__ dcr; int pid; } ;
struct i3c_device_id {int match_flags; scalar_t__ manuf_id; scalar_t__ part_id; scalar_t__ extra_info; scalar_t__ dcr; } ;
struct i3c_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct i3c_device*,struct i3c_device_info*) ;

const struct i3c_device_id *
FUNC_5(struct i3c_device *VAR_3,
      const struct i3c_device_id *VAR_4)
{
 struct i3c_device_info VAR_5;
 const struct i3c_device_id *VAR_6;

 FUNC_4(VAR_3, &VAR_5);





 if (!FUNC_3(VAR_5.pid)) {
  u16 VAR_7 = FUNC_1(VAR_5.pid);
  u16 VAR_8 = FUNC_2(VAR_5.pid);
  u16 VAR_9 = FUNC_0(VAR_5.pid);


  for (VAR_6 = VAR_4; VAR_6->match_flags != 0; VAR_6++) {
   if ((VAR_6->match_flags & VAR_2) !=
       VAR_2)
    continue;

   if (VAR_7 != VAR_6->manuf_id || VAR_8 != VAR_6->part_id)
    continue;

   if ((VAR_6->match_flags & VAR_1) &&
       VAR_9 != VAR_6->extra_info)
    continue;

   return VAR_6;
  }
 }


 for (VAR_6 = VAR_4; VAR_6->match_flags != 0; VAR_6++) {
  if ((VAR_6->match_flags & VAR_0) &&
      VAR_6->dcr == VAR_5.dcr)
   return VAR_6;
 }

 return ((void*)0);
}
