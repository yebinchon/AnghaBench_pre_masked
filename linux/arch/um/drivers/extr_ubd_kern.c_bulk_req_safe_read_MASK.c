
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_thread_req {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static int FUNC_3(
 int VAR_0,
 struct io_thread_req * (*VAR_1)[],
 struct io_thread_req **VAR_2,
 int *VAR_3,
 int VAR_4
 )
{
 int VAR_5 = 0;
 int VAR_6 = 0;

 if (*VAR_3 > 0) {
  FUNC_1(
   (char *) VAR_1,
   (char *) VAR_2, *VAR_3
  );
  VAR_5 = *VAR_3;
 }

 VAR_6 = FUNC_2(
   VAR_0,
   ((char *) VAR_1) + *VAR_3,
   sizeof(struct io_thread_req *)*VAR_4
    - *VAR_3
  );
 if (VAR_6 > 0) {
  VAR_5 += VAR_6;
  if ((VAR_5 % sizeof(struct io_thread_req *)) > 0) {





   *VAR_3 = VAR_5 % sizeof(struct io_thread_req *);
   FUNC_0(*VAR_3 > 0, "UBD IPC read returned a partial result");
   FUNC_1(
    VAR_2,
    ((char *) VAR_1) +
     (VAR_5/sizeof(struct io_thread_req *))*sizeof(struct io_thread_req *),
    *VAR_3
   );
   VAR_5 = VAR_5 - *VAR_3;
  }
 } else {
  VAR_5 = VAR_6;
 }
 return VAR_5;
}
