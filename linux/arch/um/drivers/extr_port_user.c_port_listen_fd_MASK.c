
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int arg ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int,int ,int ,int*,int) ;
 int FUNC_7 (int ,int ,int ) ;

int FUNC_8(int VAR_7)
{
 struct sockaddr_in VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_7(VAR_2, VAR_3, 0);
 if (VAR_9 == -1)
  return -VAR_6;

 VAR_11 = 1;
 if (FUNC_6(VAR_9, VAR_4, VAR_5, &VAR_11, sizeof(VAR_11)) < 0) {
  VAR_10 = -VAR_6;
  goto out;
 }

 VAR_8.sin_family = VAR_0;
 VAR_8.sin_port = FUNC_3(VAR_7);
 VAR_8.sin_addr.s_addr = FUNC_2(VAR_1);
 if (FUNC_0(VAR_9, (struct sockaddr *) &VAR_8, sizeof(VAR_8)) < 0) {
  VAR_10 = -VAR_6;
  goto out;
 }

 if (FUNC_4(VAR_9, 1) < 0) {
  VAR_10 = -VAR_6;
  goto out;
 }

 VAR_10 = FUNC_5(VAR_9, 0);
 if (VAR_10 < 0)
  goto out;

 return VAR_9;
 out:
 FUNC_1(VAR_9);
 return VAR_10;
}
