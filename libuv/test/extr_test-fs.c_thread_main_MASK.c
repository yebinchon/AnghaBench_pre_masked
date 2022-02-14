
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_ctx {int size; char* data; int interval; int pid; int fd; scalar_t__ doread; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(void* VAR_1) {
  const struct thread_ctx* VAR_2;
  int VAR_3;
  char* VAR_4;

  VAR_2 = (struct thread_ctx*)VAR_1;
  VAR_3 = VAR_2->size;
  VAR_4 = VAR_2->data;

  while (VAR_3 > 0) {
    ssize_t VAR_5;
    int VAR_6;
    VAR_6 = VAR_3 < VAR_2->interval ? VAR_3 : VAR_2->interval;
    if (VAR_2->doread) {
      VAR_5 = FUNC_3(VAR_2->fd, VAR_4, VAR_6);

      FUNC_0(VAR_5 == VAR_6);
    } else {
      VAR_5 = FUNC_2(VAR_2->fd, VAR_4, VAR_6);



      FUNC_0(VAR_5 > 0 && VAR_5 <= VAR_6);
    }

    FUNC_1(VAR_2->pid, VAR_0);
    VAR_3 -= VAR_5;
    VAR_4 += VAR_5;
  }
}
