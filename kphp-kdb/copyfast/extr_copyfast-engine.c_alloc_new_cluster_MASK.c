
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cluster {void* crc64_array; void* binlog_buffer; void* fptr; void* wptr; void* binlog_buffer_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 struct cluster* FUNC_3 (int) ;

struct cluster *FUNC_4 (void) {
  FUNC_2 (2, "Allocating new cluster\n");
  struct cluster *VAR_3 = FUNC_3 (sizeof (struct cluster));
  VAR_3->binlog_buffer = FUNC_1 (VAR_0 * 2);
  FUNC_0 (VAR_3->binlog_buffer);
  VAR_3->binlog_buffer_end = VAR_3->binlog_buffer + VAR_0 * 2;
  VAR_3->wptr = VAR_3->binlog_buffer;
  VAR_3->fptr = VAR_3->binlog_buffer;
  VAR_3->crc64_array = FUNC_1 ((VAR_2 >> VAR_1) * 8);
  FUNC_0 (VAR_3->crc64_array);
  return VAR_3;
}
