
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {size_t max_read; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 size_t VAR_0 ;

int FUNC_2(struct evbuffer *VAR_1, size_t VAR_2)
{
 if (VAR_2 > VAR_0) {
  return -1;
 }

 FUNC_0(VAR_1);
 VAR_1->max_read = VAR_2;
 FUNC_1(VAR_1);
 return 0;
}
