
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;


 int VAR_0 ;
 int VAR_1 ;
 char const** VAR_2 ;

const char *FUNC_0(enum drbd_state_rv VAR_3)
{
 return VAR_3 <= VAR_0 ? "TOO_SMALL" :
        VAR_3 > VAR_1 ? "TOO_LARGE"
   : VAR_2[-VAR_3];
}
