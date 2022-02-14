
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int dummy; } ;
struct iovec {int dummy; } ;
struct cmsgcred {int dummy; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,struct msghdr*) ;
 int FUNC_5 (struct msghdr*,struct iovec*,void*,size_t,int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;

int
FUNC_8(int VAR_1)
{
 struct msghdr VAR_2;
 struct iovec VAR_3[1];
 void *VAR_4;
 size_t VAR_5;
 int VAR_6;

 if (FUNC_7() < 0)
  return (-2);

 VAR_6 = -2;

 VAR_5 = FUNC_0(sizeof(struct cmsgcred));
 VAR_4 = FUNC_2(VAR_5);
 if (VAR_4 == ((void*)0)) {
  FUNC_3("malloc");
  goto done;
 }
 FUNC_5(&VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_0, sizeof(struct cmsgcred));

 if (FUNC_6(VAR_1) < 0)
  goto done;

 if (FUNC_4(VAR_1, &VAR_2) < 0)
  goto done;

 VAR_6 = 0;
done:
 FUNC_1(VAR_4);
 return (VAR_6);
}
