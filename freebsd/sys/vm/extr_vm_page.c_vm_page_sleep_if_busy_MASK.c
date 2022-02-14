
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_10__ {scalar_t__ busy; } ;
struct TYPE_9__ {TYPE_2__* object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

int
FUNC_5(vm_page_t VAR_3, const char *VAR_4)
{
 vm_object_t VAR_5;

 FUNC_4(VAR_3, VAR_1);
 FUNC_0(VAR_3->object);
 VAR_5 = VAR_3->object;
 if (FUNC_2(VAR_3) || (VAR_5 != ((void*)0) && VAR_5->busy)) {
  FUNC_3(VAR_3, VAR_4, 0);
  FUNC_1(VAR_5);
  return (VAR_2);
 }
 return (VAR_0);
}
