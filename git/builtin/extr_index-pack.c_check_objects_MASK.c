
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned FUNC_7(void)
{
 unsigned VAR_2, VAR_3, VAR_4 = 0;

 VAR_3 = FUNC_4();

 if (VAR_1)
  VAR_0 = FUNC_5(FUNC_0("Checking objects"), VAR_3);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_4 += FUNC_1(FUNC_3(VAR_2));
  FUNC_2(VAR_0, VAR_2 + 1);
 }

 FUNC_6(&VAR_0);
 return VAR_4;
}
