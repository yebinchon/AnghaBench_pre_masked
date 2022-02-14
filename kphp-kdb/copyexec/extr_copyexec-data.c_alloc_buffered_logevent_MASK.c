
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffered_logevent {void* data; } ;
typedef int lev_type_t ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (void*,int*,int) ;

void *FUNC_3 (struct buffered_logevent *VAR_0, lev_type_t VAR_1, int VAR_2) {
  VAR_2 = (VAR_2 + 3) & -4;
  FUNC_0 (VAR_2 >= 4);
  VAR_0->data = FUNC_1 (VAR_2 + 8, 1);
  FUNC_0 (VAR_0->data != ((void*)0));
  FUNC_2 (VAR_0->data, &VAR_2, 4);
  FUNC_2 (VAR_0->data + 8, &VAR_1, 4);
  return VAR_0->data + 8;
}
