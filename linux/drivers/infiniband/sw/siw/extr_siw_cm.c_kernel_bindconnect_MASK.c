
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int s_val ;
struct TYPE_2__ {int (* bind ) (struct socket*,struct sockaddr*,size_t) ;int (* connect ) (struct socket*,struct sockaddr*,size_t,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct socket*,int ,int ,char*,int) ;
 int FUNC_1 (struct socket*,struct sockaddr*,size_t) ;
 int FUNC_2 (struct socket*,struct sockaddr*,size_t,int) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_3, struct sockaddr *VAR_4,
         struct sockaddr *VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8 = 1;
 size_t VAR_9 = VAR_4->sa_family == VAR_0 ?
  sizeof(struct sockaddr_in) : sizeof(struct sockaddr_in6);




 VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_2, (char *)&VAR_8,
          sizeof(VAR_8));
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = VAR_3->ops->bind(VAR_3, VAR_4, VAR_9);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = VAR_3->ops->connect(VAR_3, VAR_5, VAR_9, VAR_7);

 return VAR_6 < 0 ? VAR_6 : 0;
}
