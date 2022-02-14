
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {scalar_t__ io_buffer_size; int read_func; int write_func; int * io_buffer; int * io_buffer_p; } ;
typedef int ssize_t ;


 int FUNC_0 (int (*) (struct query_state*,void*,size_t)) ;
 int FUNC_1 (int (*) (struct query_state*,void*,size_t)) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

ssize_t
FUNC_5(struct query_state *VAR_2, void *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 ssize_t VAR_6;

 FUNC_0(FUNC_5);
 if ((VAR_2->io_buffer_size == 0) || (VAR_2->io_buffer == ((void*)0)))
  return (-1);

 FUNC_2(VAR_2->io_buffer_p <=
  VAR_2->io_buffer + VAR_2->io_buffer_size);
 VAR_5 = VAR_2->io_buffer + VAR_2->io_buffer_size -
  VAR_2->io_buffer_p;
 if (VAR_4 < VAR_5)
  VAR_6 = VAR_4;
 else
  VAR_6 = VAR_5;

 FUNC_4(VAR_3, VAR_2->io_buffer_p, VAR_6);
 VAR_2->io_buffer_p += VAR_6;

 if (VAR_5 == 0) {
  FUNC_3(VAR_2->io_buffer);
  VAR_2->io_buffer = ((void*)0);

  VAR_2->write_func = VAR_1;
  VAR_2->read_func = VAR_0;
 }

 FUNC_1(FUNC_5);
 return (VAR_6);
}
