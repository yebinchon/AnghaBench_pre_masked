
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct page {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct socket*,struct page*,int,size_t,int) ;
 int FUNC_1 (struct socket*) ;

__attribute__((used)) static ssize_t FUNC_2(struct socket *VAR_0, struct page *VAR_1,
           int VAR_2, size_t VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
