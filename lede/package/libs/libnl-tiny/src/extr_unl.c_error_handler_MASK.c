
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_nl {int dummy; } ;
struct nlmsgerr {int error; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct sockaddr_nl *VAR_1, struct nlmsgerr *VAR_2, void *VAR_3)
{
 int *VAR_4 = VAR_3;
 *VAR_4 = VAR_2->error;
 return VAR_0;
}
