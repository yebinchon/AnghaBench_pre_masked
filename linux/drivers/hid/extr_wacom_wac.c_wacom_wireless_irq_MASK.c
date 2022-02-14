
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {unsigned char* data; int pid; TYPE_1__* shared; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ touch_input; scalar_t__ touch_max; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (scalar_t__,int ,unsigned char) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct wacom_wac*,int ,int,int,int,int ) ;
 int FUNC_4 (struct wacom_wac*,int ) ;

__attribute__((used)) static int FUNC_5(struct wacom_wac *VAR_8, size_t VAR_9)
{
 unsigned char *VAR_10 = VAR_8->data;
 int VAR_11;

 if (VAR_9 != VAR_4 || VAR_10[0] != VAR_6)
  return 0;

 VAR_11 = VAR_10[1] & 0x01;
 if (VAR_11) {
  int VAR_12, VAR_13, VAR_14;

  if ((VAR_8->shared->type == VAR_0 ||
      VAR_8->shared->type == VAR_1) &&
      VAR_8->shared->touch_input &&
      VAR_8->shared->touch_max) {
   FUNC_1(VAR_8->shared->touch_input,
     VAR_3, VAR_10[5] & 0x40);
   FUNC_2(VAR_8->shared->touch_input);
  }

  VAR_12 = FUNC_0(&VAR_10[6]);
  VAR_13 = (VAR_10[5] & 0x3f) * 100 / 31;
  VAR_14 = !!(VAR_10[5] & 0x80);
  if (VAR_8->pid != VAR_12) {
   VAR_8->pid = VAR_12;
   FUNC_4(VAR_8, VAR_7);
  }

  FUNC_3(VAR_8, VAR_5,
         VAR_13, VAR_14, 1, 0);

 } else if (VAR_8->pid != 0) {

  VAR_8->pid = 0;
  FUNC_4(VAR_8, VAR_7);
  FUNC_3(VAR_8, VAR_2, 0, 0, 0, 0);
 }

 return 0;
}
