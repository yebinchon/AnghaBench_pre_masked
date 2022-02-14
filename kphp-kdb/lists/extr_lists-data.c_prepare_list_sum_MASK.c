
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list_id_t ;
typedef int array_object_id_t ;


 long long VAR_0 ;
 int FUNC_0 (int ,int,int *,int,int ,int) ;
 int FUNC_1 (int ,int,int *,int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

long long FUNC_2 (list_id_t VAR_6, int VAR_7, array_object_id_t VAR_8[], int VAR_9, int VAR_10, int VAR_11) {
  VAR_1 = VAR_11;
  if (VAR_1 == VAR_4) {
    VAR_5 = VAR_2;
    VAR_0 = 0;
    int VAR_12 = FUNC_0 (VAR_6, VAR_7, VAR_8, VAR_9, 0, VAR_10);
    return VAR_12 < 0 ? VAR_12 : VAR_0;
  } else {
    VAR_5 = VAR_3;
    VAR_0 = 0;
    int VAR_13 = FUNC_1 (VAR_6, VAR_7, VAR_8, VAR_9, 0, VAR_10);
    return VAR_13 < 0 ? VAR_13 : VAR_0;
  }
}
