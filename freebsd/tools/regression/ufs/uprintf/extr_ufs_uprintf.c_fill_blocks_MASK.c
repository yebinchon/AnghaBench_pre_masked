
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,scalar_t__) ;
 scalar_t__ FUNC_8 (int,char*,int) ;

__attribute__((used)) static void
FUNC_9(void)
{
 char VAR_8[VAR_0];
 ssize_t VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_4(VAR_1, VAR_4 | VAR_6 | VAR_5, 0600);
 if (VAR_10 < 0)
  FUNC_2(-1, "fill_blocks: open(%s)", VAR_1);





 FUNC_0(VAR_8, VAR_0);
 VAR_7 = 0;
 while (1) {
  VAR_9 = FUNC_8(VAR_10, VAR_8, VAR_0);
  if (VAR_9 < 0)
   break;
  if (VAR_9 != VAR_0) {
   FUNC_7("fill_blocks: write(%d) returned %zd",
       VAR_0, VAR_9);
   FUNC_1(VAR_10);
   (void)FUNC_5(VAR_1);
   FUNC_3(-1);
  }

 }
 if (VAR_7 != VAR_2) {
  FUNC_6("fill_blocks: write");
  FUNC_1(VAR_10);
  (void)FUNC_5(VAR_1);
  FUNC_3(-1);
 }





 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_9 = FUNC_8(VAR_10, VAR_8, VAR_0);
  if (VAR_9 < 0 && VAR_7 != VAR_2) {
   FUNC_6("fill_blocks: write after ENOSPC");
   FUNC_1(VAR_10);
   (void)FUNC_5(VAR_1);
   FUNC_3(-1);
  }
 }

 FUNC_1(VAR_10);
 (void)FUNC_5(VAR_1);
}
