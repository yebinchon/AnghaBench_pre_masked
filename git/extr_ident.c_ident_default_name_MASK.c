
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* buf; int len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

const char *FUNC_3(void)
{
 if (!(VAR_3 & VAR_0) && !VAR_2.len) {
  FUNC_0(FUNC_2(&VAR_1), &VAR_2);
  FUNC_1(&VAR_2);
 }
 return VAR_2.buf;
}
