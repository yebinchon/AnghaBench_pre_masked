
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 long FUNC_1 (int ) ;

int FUNC_2(size_t *VAR_2)
{
 long VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(VAR_0, "can't determine system page size");
  return -1;
 }
 *VAR_2 = (size_t) VAR_3;
 return 0;
}
