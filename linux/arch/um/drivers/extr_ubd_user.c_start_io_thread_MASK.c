
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(unsigned long VAR_7, int *VAR_8)
{
 int VAR_9, VAR_10[2], VAR_11;

 VAR_11 = FUNC_2(VAR_10, 1, 1);
 if(VAR_11 < 0){
  FUNC_4("start_io_thread - os_pipe failed, err = %d\n", -VAR_11);
  goto out;
 }

 VAR_5 = VAR_10[0];
 VAR_6.fd = VAR_5;
 VAR_6.events = VAR_2;
 *VAR_8 = VAR_10[1];

 VAR_11 = FUNC_3(*VAR_8, 0);
 VAR_11 = FUNC_3(VAR_5, 0);
 if (VAR_11) {
  FUNC_4("start_io_thread - failed to set nonblocking I/O.\n");
  goto out_close;
 }

 VAR_9 = FUNC_0(VAR_4, (void *) VAR_7, VAR_0 | VAR_1, ((void*)0));
 if(VAR_9 < 0){
  VAR_11 = -VAR_3;
  FUNC_4("start_io_thread - clone failed : errno = %d\n", VAR_3);
  goto out_close;
 }

 return(VAR_9);

 out_close:
 FUNC_1(VAR_10[0]);
 FUNC_1(VAR_10[1]);
 VAR_5 = -1;
 *VAR_8 = -1;
 out:
 return VAR_11;
}
