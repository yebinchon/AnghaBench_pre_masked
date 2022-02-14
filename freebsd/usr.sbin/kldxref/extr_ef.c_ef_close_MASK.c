
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* elf_file_t ;
struct TYPE_6__ {TYPE_1__* ef_efile; struct TYPE_6__* ef_name; int ef_fd; } ;
struct TYPE_5__ {int * ef_ef; int * ef_ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(elf_file_t VAR_0)
{

 FUNC_0(VAR_0->ef_fd);
 if (VAR_0->ef_name)
  FUNC_1(VAR_0->ef_name);
 VAR_0->ef_efile->ef_ops = ((void*)0);
 VAR_0->ef_efile->ef_ef = ((void*)0);
 FUNC_1(VAR_0);
 return (0);
}
