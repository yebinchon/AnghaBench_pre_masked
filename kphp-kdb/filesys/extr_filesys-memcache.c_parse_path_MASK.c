
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sz ;
struct connection {int Tmp; } ;


 int FUNC_0 (int ,int*,int) ;
 int* VAR_0 ;

int FUNC_1 (struct connection *VAR_1) {
  int VAR_2;
  if (FUNC_0 (VAR_1->Tmp, &VAR_2, sizeof (VAR_2)) != sizeof (VAR_2)) {
    return -1;
  }
  if (FUNC_0 (VAR_1->Tmp, VAR_0, VAR_2) != VAR_2) {
    return -2;
  }
  VAR_0[VAR_2] = 0;
  return 0;
}
