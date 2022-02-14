
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int dir; } ;
struct cb_file {TYPE_1__ cf_u; scalar_t__ cf_isdir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cb_file*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0, void *VAR_1)
{
 struct cb_file *VAR_2 = VAR_1;

 if (VAR_2->cf_isdir)
  FUNC_1(VAR_2->cf_u.dir);
 else
  FUNC_0(VAR_2->cf_u.fd);
 FUNC_2(VAR_2);

 return (0);
}
