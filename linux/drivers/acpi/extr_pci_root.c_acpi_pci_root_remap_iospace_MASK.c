
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_entry {void* offset; struct resource* res; } ;
struct resource {unsigned long start; int flags; void* end; } ;
struct fwnode_handle {int dummy; } ;
typedef void* resource_size_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (struct fwnode_handle*,void*,void*) ;
 scalar_t__ FUNC_2 (struct resource*,void*) ;
 int FUNC_3 (char*,void**,struct resource*) ;
 void* FUNC_4 (struct resource*) ;

__attribute__((used)) static void FUNC_5(struct fwnode_handle *VAR_1,
   struct resource_entry *VAR_2)
{
}
