
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef void* wchar_t ;
struct TYPE_7__ {void* wc; } ;
typedef TYPE_1__ ctype_node_t ;


 TYPE_1__* FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static ctype_node_t *
FUNC_4(wchar_t VAR_1)
{
 ctype_node_t VAR_2;
 ctype_node_t *VAR_3;

 VAR_2.wc = VAR_1;
 if ((VAR_3 = FUNC_0(VAR_0, &VAR_0, &VAR_2)) == ((void*)0)) {
  if ((VAR_3 = FUNC_2(1, sizeof (*VAR_3))) == ((void*)0)) {
   FUNC_3("out of memory");
   return (((void*)0));
  }
  VAR_3->wc = VAR_1;

  FUNC_1(VAR_0, &VAR_0, VAR_3);
 }
 return (VAR_3);
}
