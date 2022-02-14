
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int dummy; } ;


 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*,struct msghdr*,size_t) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_0, struct msghdr *VAR_1,
      size_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
