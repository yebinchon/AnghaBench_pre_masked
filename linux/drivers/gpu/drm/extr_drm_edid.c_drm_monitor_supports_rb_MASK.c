
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct edid {int revision; int input; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int*) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_1(struct edid *VAR_2)
{
 if (VAR_2->revision >= 4) {
  bool VAR_3 = 0;
  FUNC_0((u8 *)VAR_2, VAR_1, &VAR_3);
  return VAR_3;
 }

 return ((VAR_2->input & VAR_0) != 0);
}
