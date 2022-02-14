
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ so_type; TYPE_1__* so_proto; } ;
struct TYPE_2__ {scalar_t__ pr_protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct socket* VAR_5 ;
 int VAR_6 ;

int
FUNC_0(struct socket *VAR_7)
{

 if (VAR_7->so_type != VAR_3 ||
     VAR_7->so_proto->pr_protocol != VAR_2)
  return VAR_1;

 if (VAR_5 != ((void*)0))
  return VAR_0;

 VAR_5 = VAR_7;




 if (!VAR_4) {
  VAR_4 = 1;
  VAR_6++;
 }

 return 0;
}
