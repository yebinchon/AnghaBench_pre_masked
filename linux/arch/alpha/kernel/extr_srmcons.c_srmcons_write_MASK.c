
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int port; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_3(struct tty_struct *VAR_1,
       const unsigned char *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_0, VAR_4);
 FUNC_2(VAR_1->port, (const char *) VAR_2, VAR_3);
 FUNC_1(&VAR_0, VAR_4);

 return VAR_3;
}
