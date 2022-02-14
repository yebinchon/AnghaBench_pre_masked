
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ber {int fd; } ;
typedef int ssize_t ;


 int FUNC_0 (struct ber*,int *,int) ;
 int FUNC_1 (int,int *,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct ber *VAR_0, u_char *VAR_1)
{
 ssize_t VAR_2;





 if (VAR_0->fd == -1)
  VAR_2 = FUNC_0(VAR_0, VAR_1, 1);
 else
  VAR_2 = FUNC_1(VAR_0->fd, VAR_1, 1);
 return VAR_2;
}
