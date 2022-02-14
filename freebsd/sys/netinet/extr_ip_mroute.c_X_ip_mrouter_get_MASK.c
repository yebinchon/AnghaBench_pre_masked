
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {int sopt_name; } ;
struct socket {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sockopt*,int *,int) ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_5, struct sockopt *VAR_6)
{
    int VAR_7;

    switch (VAR_6->sopt_name) {
    case 128:
 VAR_7 = FUNC_0(VAR_6, &VAR_4, sizeof VAR_4);
 break;

    case 129:
 VAR_7 = FUNC_0(VAR_6, &VAR_2,
     sizeof VAR_2);
 break;

    case 130:
 VAR_7 = FUNC_0(VAR_6, &VAR_3, sizeof VAR_3);
 break;

    case 131:
 VAR_7 = FUNC_0(VAR_6, &VAR_1, sizeof VAR_1);
 break;

    default:
 VAR_7 = VAR_0;
 break;
    }
    return VAR_7;
}
