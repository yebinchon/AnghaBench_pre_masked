
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int dummy; } ;
struct io_pump {scalar_t__ error; } ;


 int FUNC_0 (struct pollfd*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct pollfd*) ;
 scalar_t__ FUNC_2 (struct io_pump*,int,struct pollfd*) ;

__attribute__((used)) static int FUNC_3(struct io_pump *VAR_1, int VAR_2)
{
 struct pollfd *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_1[VAR_4].error = 0;

 FUNC_0(VAR_3, VAR_2);
 while (FUNC_2(VAR_1, VAR_2, VAR_3))
  ;
 FUNC_1(VAR_3);


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_1[VAR_4].error) {
   VAR_0 = VAR_1[VAR_4].error;
   return -1;
  }
 }
 return 0;
}
