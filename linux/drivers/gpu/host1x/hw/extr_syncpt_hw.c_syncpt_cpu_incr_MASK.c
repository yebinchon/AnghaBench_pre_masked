
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct host1x_syncpt {int id; struct host1x* host; } ;
struct host1x {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct host1x*,int ,int ) ;
 int FUNC_3 (struct host1x_syncpt*) ;
 scalar_t__ FUNC_4 (struct host1x_syncpt*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct host1x_syncpt *VAR_1)
{
 struct host1x *VAR_2 = VAR_1->host;
 u32 VAR_3 = VAR_1->id / 32;

 if (!FUNC_3(VAR_1) &&
     FUNC_4(VAR_1))
  return -VAR_0;

 FUNC_2(VAR_2, FUNC_0(VAR_1->id % 32),
      FUNC_1(VAR_3));
 FUNC_5();

 return 0;
}
