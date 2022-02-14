
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
struct alps_data {int dummy; } ;
typedef int otp ;


 scalar_t__ FUNC_0 (struct psmouse*,int,unsigned char*) ;
 int FUNC_1 (unsigned char**,struct alps_data*) ;
 int FUNC_2 (unsigned char**,struct alps_data*) ;
 int FUNC_3 (unsigned char**,struct alps_data*,struct psmouse*) ;
 int FUNC_4 (unsigned char**,int ,int) ;

__attribute__((used)) static int FUNC_5(struct psmouse *VAR_0,
        struct alps_data *VAR_1)
{
 unsigned char VAR_2[2][4];

 FUNC_4(VAR_2, 0, sizeof(VAR_2));

 if (FUNC_0(VAR_0, 1, &VAR_2[1][0]) ||
     FUNC_0(VAR_0, 0, &VAR_2[0][0]))
  return -1;

 FUNC_2(VAR_2, VAR_1);

 FUNC_1(VAR_2, VAR_1);

 FUNC_3(VAR_2, VAR_1, VAR_0);

 return 0;
}
