
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {size_t max_read; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;

size_t FUNC_2(struct evbuffer *VAR_0)
{
 size_t VAR_1;
 FUNC_0(VAR_0);
 VAR_1 = VAR_0->max_read;
 FUNC_1(VAR_0);
 return VAR_1;
}
