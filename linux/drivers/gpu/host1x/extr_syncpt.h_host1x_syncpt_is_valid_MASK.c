
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_syncpt {scalar_t__ id; int host; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct host1x_syncpt *VAR_0)
{
 return VAR_0->id < FUNC_0(VAR_0->host);
}
