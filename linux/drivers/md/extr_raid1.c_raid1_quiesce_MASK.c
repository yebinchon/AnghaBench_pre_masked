
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int dummy; } ;
struct mddev {struct r1conf* private; } ;


 int FUNC_0 (struct r1conf*,int ) ;
 int FUNC_1 (struct r1conf*) ;

__attribute__((used)) static void FUNC_2(struct mddev *VAR_0, int VAR_1)
{
 struct r1conf *VAR_2 = VAR_0->private;

 if (VAR_1)
  FUNC_0(VAR_2, 0);
 else
  FUNC_1(VAR_2);
}
