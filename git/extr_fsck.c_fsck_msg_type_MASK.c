
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsck_options {int* msg_type; scalar_t__ strict; } ;
typedef enum fsck_msg_id { ____Placeholder_fsck_msg_id } fsck_msg_id ;
struct TYPE_2__ {int msg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_1(enum fsck_msg_id VAR_4,
 struct fsck_options *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4 >= 0 && VAR_4 < VAR_1);

 if (VAR_5->msg_type)
  VAR_6 = VAR_5->msg_type[VAR_4];
 else {
  VAR_6 = VAR_3[VAR_4].msg_type;
  if (VAR_5->strict && VAR_6 == VAR_2)
   VAR_6 = VAR_0;
 }

 return VAR_6;
}
