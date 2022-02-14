
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_op {int ses; size_t len; void* mac; int src; } ;
typedef int cop ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int ,struct crypt_op*) ;
 int VAR_1 ;
 int FUNC_2 (struct crypt_op*,int ,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, int VAR_3, size_t VAR_4, void *VAR_5)
{
 struct crypt_op VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.ses = VAR_3;
 VAR_6.len = VAR_4;
 VAR_6.src = VAR_1;
 VAR_6.mac = VAR_5;
 FUNC_0(FUNC_1(VAR_2, VAR_0, &VAR_6) >= 0, "ioctl(CIOCCRYPT)");
}
