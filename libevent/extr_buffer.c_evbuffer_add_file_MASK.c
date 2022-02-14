
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_file_segment {int dummy; } ;
struct evbuffer {int dummy; } ;
typedef int ev_off_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct evbuffer*,struct evbuffer_file_segment*,int ,int ) ;
 int FUNC_1 (struct evbuffer_file_segment*) ;
 struct evbuffer_file_segment* FUNC_2 (int,int ,int ,unsigned int) ;

int
FUNC_3(struct evbuffer *VAR_1, int VAR_2, ev_off_t VAR_3, ev_off_t VAR_4)
{
 struct evbuffer_file_segment *VAR_5;
 unsigned VAR_6 = VAR_0;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6);
 if (!VAR_5)
  return -1;
 VAR_7 = FUNC_0(VAR_1, VAR_5, 0, VAR_4);
 if (VAR_7 == -1)
  FUNC_1(VAR_5);
 return VAR_7;
}
