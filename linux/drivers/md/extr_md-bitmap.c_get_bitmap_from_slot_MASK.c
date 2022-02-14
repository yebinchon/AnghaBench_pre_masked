
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int dummy; } ;
struct bitmap {int dummy; } ;


 struct bitmap* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bitmap*) ;
 int FUNC_2 (struct bitmap*) ;
 struct bitmap* FUNC_3 (struct mddev*,int) ;
 int FUNC_4 (struct bitmap*) ;
 int FUNC_5 (struct bitmap*,int ) ;

struct bitmap *FUNC_6(struct mddev *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 struct bitmap *VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_1(VAR_3)) {
  VAR_2 = FUNC_2(VAR_3);
  return FUNC_0(VAR_2);
 }

 VAR_2 = FUNC_5(VAR_3, 0);
 if (VAR_2) {
  FUNC_4(VAR_3);
  return FUNC_0(VAR_2);
 }

 return VAR_3;
}
