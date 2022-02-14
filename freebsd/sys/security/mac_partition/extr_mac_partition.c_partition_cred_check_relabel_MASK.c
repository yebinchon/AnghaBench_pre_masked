
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct label*) ;
 int FUNC_1 (struct ucred*,int ) ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_1, struct label *VAR_2)
{
 int VAR_3;

 VAR_3 = 0;
 if (FUNC_0(VAR_2) != 0) {






  VAR_3 = FUNC_1(VAR_1, VAR_0);
 }

 return (VAR_3);
}
