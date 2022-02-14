
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_thread_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int **,int *,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

int FUNC_6(void *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_2();

 while(1){
  VAR_8 = FUNC_0(
   VAR_6,
   VAR_5,
   &VAR_3,
   &VAR_4,
   VAR_1
  );
  if (VAR_8 < 0) {
   if (VAR_8 == -VAR_0) {
    FUNC_4(-1);
    continue;
   }
  }

  for (VAR_9 = 0; VAR_9 < VAR_8/sizeof(struct io_thread_req *); VAR_9++) {
   VAR_2++;
   FUNC_1((*VAR_5)[VAR_9]);
  }

  VAR_10 = 0;

  do {
   VAR_11 = FUNC_3(VAR_6, ((char *) VAR_5) + VAR_10, VAR_8);
   if (VAR_11 >= 0) {
    VAR_10 += VAR_11;
   }
   if (VAR_10 < VAR_8) {
    FUNC_5(-1);
   }
  } while (VAR_10 < VAR_8);
 }

 return 0;
}
