
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; int name; int * reserved; void* default_value; void* step; void* maximum; void* minimum; int flags; int type; } ;
typedef void* s32 ;
 int FUNC_0 (int,char const**,int *,void**,void**,void**,void**,int *) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (struct v4l2_queryctrl*,void*,void*,void*,void*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_queryctrl *VAR_0,
       s32 VAR_1, s32 VAR_2, s32 VAR_3, s32 VAR_4)
{
 const char *VAR_5;

 switch (VAR_0->id) {

 case 130:
 case 131:
 case 133:
 case 136:
 case 128:
 case 129:
 case 132:
 case 134:
 case 135:
 case 137:
 case 138:
 case 139:
  FUNC_0(VAR_0->id, &VAR_5, &VAR_0->type,
    &VAR_1, &VAR_2, &VAR_3, &VAR_4, &VAR_0->flags);
  VAR_0->minimum = VAR_1;
  VAR_0->maximum = VAR_2;
  VAR_0->step = VAR_3;
  VAR_0->default_value = VAR_4;
  VAR_0->reserved[0] = VAR_0->reserved[1] = 0;
  FUNC_1(VAR_0->name, VAR_5, sizeof(VAR_0->name));
  return 0;

 default:
  return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 }
}
