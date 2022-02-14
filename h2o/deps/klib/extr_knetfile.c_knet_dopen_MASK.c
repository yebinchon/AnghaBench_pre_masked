
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; int type; } ;
typedef TYPE_1__ knetFile ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

knetFile *FUNC_1(int VAR_1, const char *VAR_2)
{
 knetFile *VAR_3 = (knetFile*)FUNC_0(1, sizeof(knetFile));
 VAR_3->type = VAR_0;
 VAR_3->fd = VAR_1;
 return VAR_3;
}
