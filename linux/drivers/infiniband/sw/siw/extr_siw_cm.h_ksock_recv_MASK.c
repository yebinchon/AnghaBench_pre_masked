
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_flags; int * msg_name; } ;
struct kvec {char* member_0; size_t member_1; } ;


 int FUNC_0 (struct socket*,struct msghdr*,struct kvec*,int,size_t,int) ;

__attribute__((used)) static inline int FUNC_1(struct socket *VAR_0, char *VAR_1, size_t VAR_2,
        int VAR_3)
{
 struct kvec VAR_4 = { VAR_1, VAR_2 };
 struct msghdr VAR_5 = { .msg_name = ((void*)0), .msg_flags = VAR_3 };

 return FUNC_0(VAR_0, &VAR_5, &VAR_4, 1, VAR_2, VAR_3);
}
