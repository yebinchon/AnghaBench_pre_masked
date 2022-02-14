
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_syncpt {int id; int base_val; struct host1x* host; } ;
struct host1x {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct host1x*,int ) ;

__attribute__((used)) static void FUNC_2(struct host1x_syncpt *VAR_0)
{

 struct host1x *VAR_1 = VAR_0->host;

 VAR_0->base_val =
  FUNC_1(VAR_1, FUNC_0(VAR_0->id));

}
