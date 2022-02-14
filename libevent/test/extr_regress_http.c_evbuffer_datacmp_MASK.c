
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;


 size_t FUNC_0 (struct evbuffer*) ;
 unsigned char* FUNC_1 (struct evbuffer*,size_t) ;
 int FUNC_2 (unsigned char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(struct evbuffer *VAR_0, const char *VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_0);
 size_t VAR_3 = FUNC_3(VAR_1);
 unsigned char *VAR_4;
 int VAR_5;

 if (VAR_2 < VAR_3)
  return -1;

 VAR_4 = FUNC_1(VAR_0, VAR_3);
 if ((VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_3)))
  return VAR_5;

 if (VAR_2 > VAR_3)
  return 1;
 else
  return 0;
}
