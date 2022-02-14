
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct host1x_syncpt {int id; struct host1x* host; } ;
struct host1x {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct host1x*,int ,int ) ;
 int FUNC_2 (struct host1x_syncpt*) ;

__attribute__((used)) static void FUNC_3(struct host1x_syncpt *VAR_0)
{
 u32 VAR_1 = FUNC_2(VAR_0);
 struct host1x *VAR_2 = VAR_0->host;

 FUNC_1(VAR_2, VAR_1, FUNC_0(VAR_0->id));
}
