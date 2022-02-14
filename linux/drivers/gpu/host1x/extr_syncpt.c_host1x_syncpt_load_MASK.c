
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct host1x_syncpt {int id; int host; } ;


 int FUNC_0 (int ,struct host1x_syncpt*) ;
 int FUNC_1 (int ,int ) ;

u32 FUNC_2(struct host1x_syncpt *VAR_0)
{
 u32 VAR_1;

 VAR_1 = FUNC_0(VAR_0->host, VAR_0);
 FUNC_1(VAR_0->id, VAR_1);

 return VAR_1;
}
