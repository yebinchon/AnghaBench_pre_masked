
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {unsigned int new_layout; unsigned int layout; scalar_t__ reshape_position; TYPE_1__* pers; scalar_t__ ro; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* check_reshape ) (struct mddev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*,int,unsigned int*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (struct mddev*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct mddev *VAR_3, const char *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, 10, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7)
  return VAR_7;

 if (VAR_3->pers) {
  if (VAR_3->pers->check_reshape == ((void*)0))
   VAR_7 = -VAR_0;
  else if (VAR_3->ro)
   VAR_7 = -VAR_1;
  else {
   VAR_3->new_layout = VAR_6;
   VAR_7 = VAR_3->pers->check_reshape(VAR_3);
   if (VAR_7)
    VAR_3->new_layout = VAR_3->layout;
  }
 } else {
  VAR_3->new_layout = VAR_6;
  if (VAR_3->reshape_position == VAR_2)
   VAR_3->layout = VAR_6;
 }
 FUNC_2(VAR_3);
 return VAR_7 ?: VAR_5;
}
