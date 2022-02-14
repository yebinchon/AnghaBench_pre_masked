
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom {scalar_t__ max_y; scalar_t__ max_x; scalar_t__ res_y; scalar_t__ res_x; } ;
struct serio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wacom*,struct serio*,int ,char*) ;
 int FUNC_1 (struct wacom*,struct serio*) ;

__attribute__((used)) static int FUNC_2(struct wacom *VAR_3, struct serio *VAR_4)
{
 int VAR_5;




 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2,
      "model and version");
 if (VAR_5)
  return VAR_5;

 if (!(VAR_3->res_x && VAR_3->res_y)) {
  VAR_5 = FUNC_0(VAR_3, VAR_4,
       VAR_0,
       "configuration string");
  if (VAR_5)
   return VAR_5;
 }

 if (!(VAR_3->max_x && VAR_3->max_y)) {
  VAR_5 = FUNC_0(VAR_3, VAR_4,
       VAR_1,
       "coordinates string");
  if (VAR_5)
   return VAR_5;
 }

 return FUNC_1(VAR_3, VAR_4);
}
