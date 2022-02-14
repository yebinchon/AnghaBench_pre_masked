
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhyvegc_image {int dummy; } ;
struct bhyvegc {struct bhyvegc_image* gc_image; } ;



struct bhyvegc_image *
FUNC_0(struct bhyvegc *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return (((void*)0));

 return (VAR_0->gc_image);
}
