
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fhashentry6 {int dummy; } ;
struct fhashentry4 {int dummy; } ;
struct fhashentry {scalar_t__ af; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fhashentry4*,int ) ;
 int FUNC_1 (struct fhashentry6*,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct fhashentry *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;

 if (VAR_1->af == VAR_0) {
  VAR_3 = FUNC_0((struct fhashentry4 *)VAR_1, VAR_2);
 } else {
  VAR_3 = FUNC_1((struct fhashentry6 *)VAR_1, VAR_2);
 }

 return (VAR_3);
}
