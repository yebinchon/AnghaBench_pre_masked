
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rtas_error_log {int dummy; } ;


 scalar_t__ FUNC_0 (struct rtas_error_log*) ;
 scalar_t__ FUNC_1 (struct rtas_error_log*) ;
 int VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(char * VAR_1)
{
 int VAR_2;
 struct rtas_error_log *VAR_3;
 uint32_t VAR_4;


 VAR_2 = 8;
 VAR_3 = (struct rtas_error_log *)VAR_1;
 VAR_4 = FUNC_1(VAR_3);
 if (FUNC_0(VAR_3) && VAR_4) {


  VAR_2 += VAR_4;
 }

 if (VAR_0 == 0)
  VAR_0 = FUNC_2();

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 return VAR_2;
}
