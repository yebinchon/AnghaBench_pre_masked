
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xa_mark_t ;
struct xarray {int dummy; } ;
struct TYPE_5__ {unsigned long xa_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__,struct xarray*,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (void*) ;
 TYPE_1__ VAR_2 ;
 void* FUNC_5 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,void*) ;

__attribute__((used)) static void *FUNC_7(struct xarray *VAR_3, unsigned long *VAR_4,
        xa_mark_t VAR_5)
{
 FUNC_1(VAR_2, VAR_3, *VAR_4);
 void *VAR_6;

 FUNC_2();
 do {
  VAR_6 = FUNC_5(&VAR_2, VAR_1, VAR_5);
  if (FUNC_4(VAR_6))
   break;
 } while (FUNC_6(&VAR_2, VAR_6));
 FUNC_3();

 if (VAR_6) {
  *VAR_4 = VAR_2.xa_index;
  if (FUNC_4(VAR_6))
   return ((void*)0);
  return VAR_6;
 }
 return FUNC_0(-VAR_0);
}
