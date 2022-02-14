
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int notify_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int *) ;
 int * FUNC_2 (int) ;

__attribute__((used)) static notify_t *FUNC_3 (void) {
  FUNC_0 (VAR_0);
  VAR_1++;
  notify_t *VAR_2 = FUNC_2 (sizeof (notify_t));
  FUNC_1 (6, "new_notify_item: result = %p\n", VAR_2);
  return VAR_2;
}
