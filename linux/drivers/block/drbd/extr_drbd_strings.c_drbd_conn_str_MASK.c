
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum drbd_conns { ____Placeholder_drbd_conns } drbd_conns ;


 int VAR_0 ;
 char const** VAR_1 ;

const char *FUNC_0(enum drbd_conns VAR_2)
{

 return VAR_2 > VAR_0 ? "TOO_LARGE" : VAR_1[VAR_2];
}
