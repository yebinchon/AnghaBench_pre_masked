
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,unsigned int,int ) ;
 int FUNC_5 (char*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static int FUNC_8(void *VAR_7, unsigned int VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;

 FUNC_0(&VAR_4);
 if (VAR_6) {
  VAR_9 = FUNC_2(VAR_5);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_4(0, 0, VAR_3);
  if (VAR_9 != 0) {
   FUNC_1(VAR_5);
   FUNC_5("HW init failed: %d\n", VAR_9);
   return -VAR_1;
  }
  VAR_6 = 0;
 }

 VAR_10 = FUNC_7(VAR_7);
 VAR_9 = FUNC_4(VAR_10, VAR_8, VAR_2);
 FUNC_6(&VAR_4, FUNC_3(500));
 if (VAR_9 != 0)
  return -VAR_0;
 return 0;
}
