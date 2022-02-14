
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int sid; } ;
struct TYPE_3__ {int size; int id; } ;
struct vmw_surface_destroy {TYPE_2__ body; TYPE_1__ header; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(uint32_t VAR_1,
           void *VAR_2)
{
 struct vmw_surface_destroy *VAR_3 = (struct vmw_surface_destroy *)
  VAR_2;

 VAR_3->header.id = VAR_0;
 VAR_3->header.size = sizeof(VAR_3->body);
 VAR_3->body.sid = VAR_1;
}
