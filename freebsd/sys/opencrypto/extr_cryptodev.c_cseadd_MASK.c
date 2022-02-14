
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcrypt {int sesn; int csessions; } ;
struct csession {scalar_t__ ses; } ;


 int FUNC_0 (int *,struct csession*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct csession *
FUNC_1(struct fcrypt *VAR_1, struct csession *VAR_2)
{
 FUNC_0(&VAR_1->csessions, VAR_2, VAR_0);
 VAR_2->ses = VAR_1->sesn++;
 return (VAR_2);
}
