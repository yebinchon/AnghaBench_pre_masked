
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int bio; int q; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int ,int *,struct bio*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct request *VAR_0, struct bio *VAR_1)
{
 return FUNC_0(VAR_0->q, ((void*)0), VAR_1, VAR_0->bio);
}
