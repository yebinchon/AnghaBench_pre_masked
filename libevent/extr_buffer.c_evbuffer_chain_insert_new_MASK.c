
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {int dummy; } ;
struct evbuffer {int dummy; } ;


 int FUNC_0 (struct evbuffer*,struct evbuffer_chain*) ;
 struct evbuffer_chain* FUNC_1 (size_t) ;

__attribute__((used)) static inline struct evbuffer_chain *
FUNC_2(struct evbuffer *VAR_0, size_t VAR_1)
{
 struct evbuffer_chain *VAR_2;
 if ((VAR_2 = FUNC_1(VAR_1)) == ((void*)0))
  return ((void*)0);
 FUNC_0(VAR_0, VAR_2);
 return VAR_2;
}
